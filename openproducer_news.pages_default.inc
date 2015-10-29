<?php
/**
 * @file
 * openproducer_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openproducer_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news';
  $page->task = 'page';
  $page->admin_title = 'News';
  $page->admin_description = '';
  $page->path = 'news';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'News',
    'weight' => 0,
    'name' => 'main-menu',
    'parent' => 'main-menu:0',
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'news',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'floyd_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
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
  $display->uuid = '30c6ce38-f606-4d3f-a0aa-44a559021be0';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ca26ddbe-87b4-4d81-b0c6-36cac3bb93c4';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'news-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'more_link' => 0,
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '20',
    'offset' => '0',
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 1,
      'body' => 1,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'News',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ca26ddbe-87b4-4d81-b0c6-36cac3bb93c4';
  $display->content['new-ca26ddbe-87b4-4d81-b0c6-36cac3bb93c4'] = $pane;
  $display->panels['contentmain'][0] = 'new-ca26ddbe-87b4-4d81-b0c6-36cac3bb93c4';
  $pane = new stdClass();
  $pane->pid = 'new-0b537cba-bf7f-44c1-8d35-33ebfff7f217';
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
      'modifier_class' => '',
      'hide_classes' => array(),
      'additional_classes' => array(),
      'collapsible' => FALSE,
      'collapsed' => '',
      'region_title' => '',
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0b537cba-bf7f-44c1-8d35-33ebfff7f217';
  $display->content['new-0b537cba-bf7f-44c1-8d35-33ebfff7f217'] = $pane;
  $display->panels['sidebar'][0] = 'new-0b537cba-bf7f-44c1-8d35-33ebfff7f217';
  $pane = new stdClass();
  $pane->pid = 'new-994a76b3-9c20-40cf-bc4a-a3951b487de6';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'albums-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'fields_override' => array(
      'field_artwork' => 1,
      'title' => 1,
      'field_artist' => 0,
      'field_album' => 1,
      'field_tracklist' => 1,
    ),
    'exposed' => array(
      'widget_title' => 'Featured Album',
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => 'Featured Album',
    'items_per_page' => NULL,
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
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
  $pane->uuid = '994a76b3-9c20-40cf-bc4a-a3951b487de6';
  $display->content['new-994a76b3-9c20-40cf-bc4a-a3951b487de6'] = $pane;
  $display->panels['sidebar'][1] = 'new-994a76b3-9c20-40cf-bc4a-a3951b487de6';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-ca26ddbe-87b4-4d81-b0c6-36cac3bb93c4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news'] = $page;

  return $pages;

}
