<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function os_news_events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:news
  $menu_links['primary-links:news'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('News');


  return $menu_links;
}
