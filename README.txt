// $Id$


Footnotes module can be used to easily create automatically numbered footnote 
references into an article or post (such as a reference to a URL). It now 
supports also TinyMCE. This release also includes "Better URL filter", which can 
be used to replace the (incomplete) URL filter available in Drupal core. 

Beginning with version 2.4, Footnotes will highlight the footnote text if you click
on the footnote reference link. (This was inspired by wikipedia, see 
http://drupal.org/node/728658). The highlight color is light gray. If this clashes
with your site's colors, or you just want to set a nicer color (or unset the feature
altogether) you need to override the default color in your own theme. (See below).

As part of this feature, CSS class names have moved tags. While unlikely, if
you have used these in your own themes, please change your CSS accordingly:
<ul>
<li>The "footnote" class used to be the A or SPAN element that is the footnote 
    number/label in the list of footnotes. This class is now the LI element
    containing the entire footnote.</li>
<li>The A or SPAN element now has the class "footnote_label"</li>
</ul>

Due to changes in HTML and CSS, <strong>you need to clear the Drupal cache</strong>
after upgrading to version 2.4 or later.

Version 2.4 introduces an optional feature that identical footnotes are collapsed
into one, as if they had the same value="" attribute. This must be enabled from
admin/settings/filters by choosing the relevant "Input format" and then the 
"Configure" tab. By default, footnotes are separate unless you specify them to
have the same value="" attribute.

The erroneously named "footnotes-aternative_layout.css" file had been kept for
backward compatibility but is now removed in 2.4. The correct file is 
"footnotes-alternative_layout.css". This file was updated to reflect changes in
the default css file.


<h3>ABOUT FOOTNOTES</h3>

The Footnotes module can be used to create automatically numbered footnotes
within a text. In the place where you want to add a footnote enclose the
footnote text within an fn tag: <code>[fn]like this[/fn]</code>. By default, 
footnotes are placed at the end of the text. You can also use a 
<code>[footnotes]</code> or <code>[footnotes /]</code> tag to position it anywhere 
you want. 

The filter will take the text within the tag and move it to a footnote at 
the bottom of the page. In it's place it will place a number which is also 
a link to the footnote. As of version 2.0 Footnotes supports both 
[fn]square brackets[/fn] and <fn>angle brackets</fn>. Square brackets support 
was added in particular to support WYSIWYG editors like FCKEditor and TinyMCE.

Also supported in 2.0 is the use of a "value" attribute to a) set the numbering
to use as a label or b) to set an arbitrary text string as label. Ex:
<code> [fn value="5"]This becomes footnote #5. Subsequent are #6, #7...[/fn]
 [fn value="*"]This footnote is assigned the label "*"[/fn]</code>

As of version 2.2 you can have multiple references to the same footnote in the 
text body.
<code> [fn value="5"]This becomes footnote #5.[/fn]
 [fn value="5"]This is a reference to the same footnote #5, this text itself is discarded.[/fn]</code>

Footnotes 2.2 finally brings to you a much requested feature: <strong>TinyMCE 
integration</strong>. This is added through a standalone module tinymce_footnotes, 
and was contributed by Drupal user <a href="http://drupal.org/user/125299">elgreg</a>. 
See that module's own README file for information.


<h3>BETTER URL FILTER</h3>

This version of Footnotes includes also a "Better URL filter". This is a fork of
the URL filter in Drupal core filter.module. The original URL filter is buggy
(or more accurately, very limited). If the enhancements in Better URL filter
are ever committed to Drupal core, this filter will (obviously) be deprecated.
(You can follow the bug in Drupal core URL filter <a href="http://drupal.org/node/161217">here</a>.)

In particular Footnotes users have suffered from the Drupal URL filter not converting 
URL's inside footnotes to links, however, the Better URL filter can be used by
anyone wishing more correct URL filter functionality, even if you don't use footnotes.
(You don't even need to enable the Footnotes filters to use the Better URL filter.)


<h3>INSTALL INSTRUCTIONS FOR FOOTNOTES.MODULE</h3>

1. Copy the contents of this module to modules/footnotes folder.
2. Login as site administrator.
3. Activate footnotes on the administer->modules page.
4. To use the footnotes filter in some input formats, go to administer->input formats.
5. For selected input formats, select configure and activate a suitable footnotes filter. 

Note: Typically you want the footnotes filter to be pretty early in the chain. 
If you need to lift the Footnotes filter higher up, click "rearrange".

Also see section about HTML filter below.


<h3>TIPS n TRICKS (CSS)</h3>

Beginning with version 2.4, Footnotes will highlight the footnote text if you click
on the footnote reference link. (This was inspired by wikipedia, see 
http://drupal.org/node/728658). The highlight color is light gray. If this clashes
with your site's colors, or you want to set a nicer color (or unset the feature
altogether) you need to override the default color in your own theme. The
below CSS can be used for that:

.see_footnote:target,
.footnotes .footnote:target {
  background-color: #ffeeee; /* Set footnote highlight color to light pink. */
}
.see_footnote:target {
  border: solid 1px #ffaaaa; /* Set border color of highlighted footnote ref to light red. */
}


<h3>TEXTILE STYLE FOOTNOTES</h3>

There is also another filter which does the same with a Textile markup style.
Use it together with the Textile module.

Note: The Textile style filter is no longer actively developed and may become
deprecated. It is better to use the <fn>...</fn> or [fn]...[/fn] style footnotes 
with any markup you are using.



<h3>HTML FILTER</h3>

Footnotes.module is designed such that it can be used together with Drupal's html filter,
and in particular you should have footnotes first and html filter later.

This version of Footnotes has been redesigned so that it only outputs html tags that 
are allowed in a default installation of HTML filter. (Tags used are A, OL and LI.)


<h3>KNOWN ISSUES</h3>

Version 2.0 uses a new markup for the list of footnotes. It is an OL list with 
CSS taking away the browser generated list numbers and moving the link numbers 
towards the left. All IE versions have a bug that the numbers are slightly lower 
than the baseline of the footnote text. (If you know how to fix this, please tell.)
In addition IE 5.5 has a more serious bug that the footnote number will be on top of
the first letters of the footnote text. There doesn't seem to be a way to fix this.

The development version of Drupal7 has a bug in that CSS and JavaScript files added 
by modules are absent from the page. If you are hit by this bug, your footnote references
will not appear as supertext, and the list of footnotes will have duplicate numbering.
There is a workaround to empty Drupal's cache table in 
Administer > Site Configuration > Performance > Clear cached data
after which everything works again. 
To follow up on this bug, see [#279420]

<h3>COPYRIGHT AND ACKNOWLEDGEMENTS</h3>

Footnotes.module is copyrighted by Henrik Ingo and other contributors. It is 
licensed by the same conditions as Drupal itself. (GPL license)

Footnotes.module was originally created by henrik.ingo@avoinelama.fi ("hingo" on 
drupal.org) in the summer of 2006.

The HTML footnotes were seriously enhanced by "beginner" (on drupal.org)
and later on by other users comments and code snippets.

Footnotes was originally developed for http://openlife.cc/onlinebook
Beginner was the second to use it on his site at 
http://www.reuniting.info/wisdom/sources/metaphysical/a_course_in_miracles_sacred_sexuality_holy_relationship

I wish to thank all contributors for letting me experience the miracle of maintaining 
an Open Source module living its own life!
