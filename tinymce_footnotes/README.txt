TinyMCE Footnotes 6.x-0.1
--------------------
Installation Instructions:
1. place in your modules directory (i.e. /sites/all/modules)
2. Enable the module in /admin/build/modules
3. Enable the "Add Footnote" button in the WYSIWYG settings for the input format(s)
that you would like to use.
4


Information
---------------------
Reuses the tiny_mce_popup.js - you can also point this at the tiny_mce_popup.js
that resides in the tinymce/jscripts/tiny_mce directory of your wysiwyg install
by changing the file footnote.htm's <script> tag where the tiny_mce_popup.js is
added.


Credits
---------------------

Original author: elgreg
Port to Drupal 6.x: hingo

Known issues
----------------------

Translation is currently not implemented. See http://drupal.org/node/672034
The few strings that would need translation are found in tinymce_plugin/footnote.(htm|js)
