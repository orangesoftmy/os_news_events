<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function os_news_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function os_news_events_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News & Events'),
      'module' => 'features',
      'description' => t('Create your new News & Events listing here.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Content'),
      'min_word_count' => '0',
      'help' => t('Please include only either <strong>File</strong> , <strong>Link</strong> or <strong>Content</strong> only.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function os_news_events_views_api() {
  return array(
    'api' => '2',
  );
}
