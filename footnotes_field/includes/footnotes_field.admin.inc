<?php

/**
 * @file
 * Footnotes field admin file.
 */

/**
 * Renders admin form.
 *
 * @param array $form
 *   Form array.
 * @param array $form_state
 *   The form state array.
 */
function _footnotes_field_admin_form($form, &$form_state) {
  $expose_block = config_get('footnotes_field.settings', 'expose_block');

  $form['expose_block'] = array(
    '#type' => 'checkbox',
    '#title' => t('Expose footnotes as block'),
    '#default_value' => !empty($expose_block) ? $expose_block : 0,
    '#description' => t('This will expose a block which you can add on a node detail page. The footnotes will be stripped from the node text fields and will be added in this block.'),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save settings'),
  );

  return $form;
}

/**
 * Submit handler.
 *
 * @param array $form
 *   Form array.
 * @param array $form_state
 *   Form_state array.
 */
function _footnotes_field_admin_form_submit($form, &$form_state) {
  config_set('footnotes_field.settings', 'expose_block', $form_state['values']['expose_block']);
  backdrop_set_message(t('Your settings have been saved.'));
}
