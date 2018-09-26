/**
 * @file
 * Footnotes plugin.
 */

(function ($, Backdrop, CKEDITOR) {

"use strict";

CKEDITOR.plugins.add('footnotes', {
  init: function (editor) {
    // Add the commands for footnotes.
    editor.addCommand('footnotes', {
      canUndo: true,
      exec: function (editor) {
        // @Todo: allow editing existing footnote tags.
        var existingValues = {};
        existingValues.text = '';
        // Prepare a save callback to be used upon saving the dialog.
        var saveCallback = function (returnValues) {
          editor.fire('saveSnapshot');

          var footnoteText = returnValues.attributes.footnote_text;
          var footnoteValue = returnValues.attributes.footnote_value;
          var openFnTag = '[fn]';
          if (footnoteValue) {
            openFnTag = '[fn value="' + footnoteValue + '"]';
          }

          editor.insertText(openFnTag + footnoteText + '[/fn]');

          // Save snapshot for undo support.
          editor.fire('saveSnapshot');
        };
        // Backdrop.t() will not work inside CKEditor plugins because CKEditor
        // loads the JavaScript file instead of Backdrop. Pull translated strings
        // from the plugin settings that are translated server-side.
        var dialogSettings = {
          dialogClass: 'editor-footnote-dialog'
        };

        // Open the dialog for the edit form.
        Backdrop.ckeditor.openDialog(editor, editor.config.backdrop.footnotesDialogUrl, existingValues, saveCallback, dialogSettings);
      }
    });
    // Add buttons for footnotes.
    if (editor.ui.addButton) {
      editor.ui.addButton('footnotes', {
        label: Backdrop.t('Insert footnote'),
        command: 'footnotes',
        icon: this.path + 'images/footnotes.png'
      });
    }

  }
});

})(jQuery, Backdrop, CKEDITOR);
