// $Id$

The Footnotes module can be used to create automatically numbered footnotes
within a text. In the place, where you want to add a footnote, enclose the
footnote text within an fn tag: <fn>like this</fn>. The filter will take the
text within the tag and move it to a footnote at the bottom of the page. 
In it's place it will place a number which is also a link to the footnote.

There is also another filter which does the same with a Textile markup style.
Use it together with the Textile module.

By default, footnotes are placed at the end of the text. You can also use a 
<footnotes> or <footnotes /> tag to position it anywhere you want. For Textile
use "footnotes." tag. (This feature is quite new, please report any bugs you 
find at http://drupal.org/node/add/project_issue/footnotes)


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

Footnotes outputs tags: <sup>, <a>, <div>, <ol>, <li>
You should add these tags to your input formats that use html filter. This can be done at 
administer > input formats > configure > configure > HTML filter


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