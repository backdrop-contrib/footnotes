// $Id$

The Footnotes module can be used to create automatically numbered footnotes
within a text. In the place, where you want to add a footnote, enclose the
footnote text within an fn tag: [fn]like this[/fn]. 
NOTE: This version of Footnotes includes "Better URL filter". See below for 
details.

The filter will take the text within the tag and move it to a footnote at 
the bottom of the page. In it's place it will place a number which is also 
a link to the footnote. As of version 2.0 Footnotes supports both 
[fn]square brackets[/fn] and <fn>angle brackets</fn>. Square brackets support 
was added in particular to support WYSIWYG editors like FCKEditor and TinyMCE.

There is also another filter which does the same with a Textile markup style.
Use it together with the Textile module.

By default, footnotes are placed at the end of the text. You can also use a 
[footnotes] or [footnotes /] tag to position it anywhere you want. For Textile
use "footnotes." tag. 


BETTER URL FILTER
----

This version of Footnotes includes also a "Better URL filter". This is a fork of
the URL filter in Drupal core filter.module. The original URL filter is buggy
(or more accurately, very limited). If the enhancements in Better URL filter
are ever committed to Drupal core, this filter will (obviously) be deprecated.
(You can follow the bug in Drupal core URL filter here: http://drupal.org/node/161217)

In particular Footnotes users have suffered from the Drupal URL filter not converting 
URL's inside footnotes to links, however, the Better URL filter can be used by
anyone wishing more correct URL filter functionality, even if you don't use footnotes.
(You don't even need to enable the Footnotes filters to use the Better URL filter.)



INSTALL INSTRUCTIONS FOR FOOTNOTES.MODULE
----

1. Copy the contents of this module to modules/footnotes folder.
2. Login as site administrator.
3. Activate footnotes on the administer->modules page.
4. To use the footnotes filter in some input formats, go to administer->input formats.
5. For selected input formats, select configure and activate a suitable footnotes filter. 

Note: Typically you want the footnotes filter to be pretty early in the chain. 
For instance the Footnotes Textile style filter outputs Textile markup, so it 
should definitively be before your Textile filter. If you need to lift the 
Footnotes filter higher up, click "rearrange".

Also see section about HTML filter below.


HTML FILTER
----

Footnotes.module is designed such that it can be used together with Drupal's html filter,
and in particular you should have footnotes first and html filter later.

This version of Footnotes has been redesigned so that it only outputs html tags that 
are allowed in a default installation of HTML filter. (Tags used are A, OL and LI.)


KNOWN ISSUES
----

This version uses a new markup for the list of footnotes. It is an OL list with 
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
To follow up on this bug: http://drupal.org/node/279420

COPYRIGHT AND ACKNOWLEDGEMENTS
----

Footnotes.module is copyrighted by Henrik Ingo. It is licensed by the same conditions as Drupal 
itself. (GPL license)

Footnotes.module was originally created by henrik.ingo@avoinelama.fi ("hingo" on drupal.org)
in the summer of 2006.

The HTML footnotes were seriously enhanced by "beginner" (on drupal.org)
and later on by other users comments and code snippets.

Footnotes was originally developed for http://openlife.cc/onlinebook
Beginner was the second to use it on his site at 
http://www.reuniting.info/wisdom/sources/metaphysical/a_course_in_miracles_sacred_sexuality_holy_relationship

I wish to thank all contributors for letting me experience the miracle of maintaining an
Open Source module living its own life!