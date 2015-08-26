<?php
/**
 * @file
 * openproducer_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openproducer_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openproducer_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function openproducer_news_image_default_styles() {
  $styles = array();

  // Exported image style: carousel.
  $styles['carousel'] = array(
    'label' => 'Carousel',
    'effects' => array(
      3 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 117,
          'height' => 50,
          'keepproportions' => 1,
          'reuse_crop_style' => 'panopoly_image_full',
          'style_name' => 'carousel',
        ),
        'weight' => 0,
      ),
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1170,
          'height' => 500,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function openproducer_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('A quick news update.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
