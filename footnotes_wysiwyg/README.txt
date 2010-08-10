Footnotes Wysiwyg 6.x-0.1
--------------------
Installation Instructions:
1. Enable the module in /admin/build/modules
2. Enable the "Add Footnote" button in the Wysiwyg settings for the input format(s)
that you would like to use.

TinyMCE
----------------------
The TinyMCE plugin provides a simple dialog to enter footnote text that will be 
inserted as a [fn]square bracket[/fn] footnote into the text. (Ie the tags and
text are visible as is in your text.)

This is all the plugin currently does. Existing footnotes must be edited in
text, you cannot reopen them in the dialog. The value= attribute is not supported,
again, you must write it manually into the tag.

The plugin reuses the tiny_mce_popup.js - you can also point this at the 
tiny_mce_popup.js that resides in the tinymce/jscripts/tiny_mce directory of your 
Wysiwyg install by changing the file footnote.htm's <script> tag where the 
tiny_mce_popup.js is added.


CKEditor
------------------------
This is a rather sophisticated plugin to show a dialog to insert
<fn> footnotes or edit existing ones. It produces and understands
the <fn>angle bracket</fn> variant and uses the fakeObjects API to
show a nice icon to the user, while producing proper <fn> tags when 
the text is saved or View Source is pressed. 

If a text contains footnotes of the [fn]square bracket[/fn] variant, 
they will be visible in the text and this plugin will not react to them.

This plugin uses Drupal.t() to translate strings and will not as such
work outside of Drupal. (But removing those function calls would be the only
change needed.) While being part of a Wysiwyg compatible module, it could 
also be used together with the CKEditor module. 


Credits
---------------------

Original author (TinyMCE): elgreg
Port to Drupal 6.x: hingo
CKEditor support: Owen Barton

Known issues
----------------------

Translation is currently not implemented. See http://drupal.org/node/672034
The few strings that would need translation are found in tinymce_plugin/footnote.(htm|js)
