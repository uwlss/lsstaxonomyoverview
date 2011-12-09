<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function lsstaxonomyoverview_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:taxonomy/term
  $menu_links['features:taxonomy/term'] = array(
    'menu_name' => 'features',
    'link_path' => 'taxonomy/term',
    'router_path' => 'taxonomy/term',
    'link_title' => 'Keywords',
    'options' => array(
      'attributes' => array(
        'title' => 'Keywords',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Keywords');


  return $menu_links;
}
