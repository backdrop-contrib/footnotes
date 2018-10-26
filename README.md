Footnotes
=========

The Footnotes module enables you to insert automatically numbered footnotes
into Backdrop texts.

The module is a port of the Drupal version 7.x-3.1.

Status
------

This is an initial port of the module. While the basics are working fine,
CKEditor and Views integration need some work.

Requirements
------------

No additional requirements.

Installation
------------

Install this module using the official Backdrop CMS instructions at
https://backdropcms.org/guide/modules.

Configuration
-------------

The main module doesn't provide a configuration page.

To use Footnotes, you have to configure a text format:

- Go to **Administration > Configuration > Content authoring**.
- Configure a *text format* of your choice.
- Under *Enabled filters*, enable the "Footnotes" filter.
- Under *Filter processing order*, "Footnotes" should stay above the HTML filters.

Basic Usage
-----------

To insert automatically numbered footnotes to a text of your Backdrop website:

- Create or edit a content item, go to the text editor,
and add or edit your body text.
- Put the cursor in the place, where you want to add your footnote.
- Write the footnote text, and enclose it between
an opening `[fn]` tag and a closing `[/fn]` tag.

Example:  
`This is some body text.[fn]This is my footnote text.[/fn] This is more body text.`

The text within the `fn` tags will be replaced by a number with a link
and moved to a footnote, usually at the bottom of the page.

Coming from Drupal?
-------------------

If you're coming from Drupal you might want to use `<fn>angle brackets</fn>`
instead of `[fn]square brackets[/fn]`. Angle brackets are supported by the
Backdrop version as well, but at this time they can't be added or edited when
CKEditor is enabled for the text format.

We recommend anyway to use square brackets: They are generally less problematic because they differ clearly from HTML syntax.

Advanced usage
--------------

**Footnote value**

By default, footnotes are numbered automatically. Alternatively, can use a
"value" attribute. The attribute allows to start the numbering from a specified
value, or to set a text string, e.g. a symbol, as the footnote marker.

Examples:

`[fn value="5"]This footnote is number 5. Next footnotes will be 6 and 7.[/fn]`

`[fn value="*"]This footnote has the marker "*"[/fn]`

**Footnotes block**

The *Footnotes block* submodule provides a block with the footnotes of a content
item. It allows to display the footnotes in a different region of your page,
e.g. in the sidebar.

To use the *Footnotes block*, enable the submodule, check the permission
*Administer footnotes fields*, and place the block in a Layout with a 'node'
context, i.e. with a path like `node/%`.

**Footnotes with Views**

The *Footnotes with Views* submodule adds *Views* support to the *Footnotes*
module. It allows to separate the display of a body field's content and the
corresponding footnotes.

To use *Footnotes with Views*, enable the submodule, create or edit a View with
fields, and add the fields "Node: Body content" and/or "Node: Body footnotes" to
the View.

**Footnotes Wysiwyg**

The *Footnotes Wysiwyg* submodule adds an *Insert footnote* button to CKEditor.
The button allows to insert Footnotes using a modal dialog.

To use *Footnotes Wysiwyg*, enable the submodule, configure a *text format* with
*Footnotes* support, and drag the *Footnotes* button in the *Active toolbar*.
Then, edit a content item, go to the text editor, put the cursor in the text,
choose the *Footnotes* button, and insert the footnote text in the dialog. The
dialog closes, and the footnote text is placed with the corresponding `fn` tags
in the editor.

Issues
------

Please report Bugs and Feature requests in the Issue queue:
https://github.com/olafgrabienski/footnotes/issues.

Current Maintainers
-------------------

- Olaf Grabienski (https://github.com/olafgrabienski).
- Looking for co-maintainers.

Credits
-------

- Ported to Backdrop CMS by Olaf Grabienski (https://github.com/olafgrabienski).
- Substantial help during the port by docwilmot (https://github.com/docwilmot), Herb https://github.com/herbdool, and Graham Oliver (https://github.com/Graham-72).
- Originally written for Drupal by Henrik Ingo (https://www.drupal.org/u/hingo).

License
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.
