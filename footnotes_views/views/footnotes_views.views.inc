<?php

/**
 * @file
 * To do views declarations.
 */


/**
 * Implements hook_views_data().
 */
function footnotes_views_views_data() {
  $data = array();

  // node view extensions

  $data['node_revision']['body_content'] = array(
    'group' => t('Node'),
    'title' => t('Body content'),
    'help' => t('The content of the body without the footnotes.'),
    'field' => array(
      'handler' => 'footnotes_views_handler_field_body_content',
      'format' => 'format',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );

  $data['node_revision']['body_footnotes'] = array(
    'group' => t('Node'),
    'title' => t('Body footnotes'),
    'help' => t('The footnotes alone, without body.'),
    'field' => array(
      'handler' => 'footnotes_views_handler_field_body_footnotes',
      'format' => 'format',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );

  $data['node_revision']['teaser_content'] = array(
    'group' => t('Node'),
    'title' => t('Teaser content'),
    'help' => t('The content of the teaser without the footnotes.'),
    'field' => array(
      'handler' => 'footnotes_views_handler_field_body_content',
      'format' => 'format',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );

  $data['node_revision']['teaser_footnotes'] = array(
    'group' => t('Node'),
    'title' => t('Teaser footnotes'),
    'help' => t('The footnotes alone, without the teaser.'),
    'field' => array(
      'handler' => 'footnotes_views_handler_field_body_footnotes',
      'format' => 'format',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );

  return $data;
}

