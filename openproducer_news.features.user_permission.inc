<?php
/**
 * @file
 * openproducer_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openproducer_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node news content'.
  $permissions['administer panelizer node news content'] = array(
    'name' => 'administer panelizer node news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news layout'.
  $permissions['administer panelizer node news layout'] = array(
    'name' => 'administer panelizer node news layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  return $permissions;
}
