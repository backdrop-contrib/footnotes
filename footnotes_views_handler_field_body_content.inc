<?php
// $Id$

/**
 * @file
 * Views handler for the body content.
 */

class footnotes_views_handler_field_body_content extends footnotes_views_handler_field {
  function init(&$view, $options) {
    parent::init($view, $options);
  }

  function render_name($data, $values) {
    $pos = strpos($data, '<ul class="footnotes">');
    if ($pos !== FALSE) {
      return substr($data, 0, $pos);
    }
    return $data;
  }

  function render($values) {
    $body = parent::render($values);
    return $this->render_link($this->render_name($body, $values), $values);
  }
};

// vim: ts=2 sw=2 et syntax=php
