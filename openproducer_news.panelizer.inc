<?php
/**
 * @file
 * openproducer_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function openproducer_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = 'news';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'floyd_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => array(
        'region_title' => '',
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
    ),
    'contentmain' => array(
      'style' => 'bootstrap_styles:well',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2cfbd48e-2882-48f4-92e0-860b1110b49a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d7a177c1-ac8f-4f9a-9442-b1a2cf95a662';
  $pane->panel = 'contentmain';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'none',
    'id' => '',
    'class' => '',
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd7a177c1-ac8f-4f9a-9442-b1a2cf95a662';
  $display->content['new-d7a177c1-ac8f-4f9a-9442-b1a2cf95a662'] = $pane;
  $display->panels['contentmain'][0] = 'new-d7a177c1-ac8f-4f9a-9442-b1a2cf95a662';
  $pane = new stdClass();
  $pane->pid = 'new-af0ac5f7-d199-45ad-acfe-4b27d4bd00bd';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'panopoly_image_half',
      'image_link' => '',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'af0ac5f7-d199-45ad-acfe-4b27d4bd00bd';
  $display->content['new-af0ac5f7-d199-45ad-acfe-4b27d4bd00bd'] = $pane;
  $display->panels['contentmain'][1] = 'new-af0ac5f7-d199-45ad-acfe-4b27d4bd00bd';
  $pane = new stdClass();
  $pane->pid = 'new-a902ad9d-e801-4b1e-a90d-bafd786f5c8e';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a902ad9d-e801-4b1e-a90d-bafd786f5c8e';
  $display->content['new-a902ad9d-e801-4b1e-a90d-bafd786f5c8e'] = $pane;
  $display->panels['contentmain'][2] = 'new-a902ad9d-e801-4b1e-a90d-bafd786f5c8e';
  $pane = new stdClass();
  $pane->pid = 'new-4423b24d-d096-4f70-b665-f9a764b43e89';
  $pane->panel = 'contentmain';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'build_mode' => 'full',
    'identifier' => '',
    'link' => 1,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '4423b24d-d096-4f70-b665-f9a764b43e89';
  $display->content['new-4423b24d-d096-4f70-b665-f9a764b43e89'] = $pane;
  $display->panels['contentmain'][3] = 'new-4423b24d-d096-4f70-b665-f9a764b43e89';
  $pane = new stdClass();
  $pane->pid = 'new-d645dfab-105f-4efa-b320-033c9e9b077a';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'news-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'teaser',
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'hide_classes' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'additional_classes' => array(
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
      ),
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array(
    'css_id' => 'news',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd645dfab-105f-4efa-b320-033c9e9b077a';
  $display->content['new-d645dfab-105f-4efa-b320-033c9e9b077a'] = $pane;
  $display->panels['sidebar'][0] = 'new-d645dfab-105f-4efa-b320-033c9e9b077a';
  $pane = new stdClass();
  $pane->pid = 'new-6e9e2a85-a442-4920-af64-643fe26b64f2';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'events-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'more_link' => 1,
    'items_per_page' => '3',
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 0,
      'field_event_date' => 0,
      'field_event_venue' => 0,
      'field_event_city' => 0,
      'field_event_state' => 0,
      'nothing' => 1,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Upcoming Shows',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'hide_classes' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'additional_classes' => array(
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
      ),
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6e9e2a85-a442-4920-af64-643fe26b64f2';
  $display->content['new-6e9e2a85-a442-4920-af64-643fe26b64f2'] = $pane;
  $display->panels['sidebar'][1] = 'new-6e9e2a85-a442-4920-af64-643fe26b64f2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:news:default'] = $panelizer;

  return $export;
}
