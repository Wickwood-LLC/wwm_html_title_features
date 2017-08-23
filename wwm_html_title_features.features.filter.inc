<?php
/**
 * @file
 * wwm_html_title_features.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function wwm_html_title_features_filter_default_formats() {
  $formats = array();

  // Exported format: Title.
  $formats['title'] = array(
    'format' => 'title',
    'name' => 'Title',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<em> <strong> <i> <abbr> <sub> <sup>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
    ),
  );

  return $formats;
}
