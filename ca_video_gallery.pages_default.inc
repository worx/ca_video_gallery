<?php
/**
 * @file
 * ca_video_gallery.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ca_video_gallery_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_video_gallery_node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'CA Video Galery: Node View One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_video' => 'ca_video',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_video_gallery_node_template',
          'settings' => array(
            'ca_video_gallery_node_template' => 'ca_video_gallery_node_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-node ca-video-node-template-1',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2aae47e0-8a09-4072-9e67-feca6a1802d0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'ca_video_gallery_node_view_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5c7c804d-d173-4c18-a1db-6b3e8d7c6973';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_node-ca_video_gallery_node_view_one';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5c7c804d-d173-4c18-a1db-6b3e8d7c6973';
  $display->content['new-5c7c804d-d173-4c18-a1db-6b3e8d7c6973'] = $pane;
  $display->panels['middle'][0] = 'new-5c7c804d-d173-4c18-a1db-6b3e8d7c6973';
  $pane = new stdClass();
  $pane->pid = 'new-4716fe72-b54d-4f4f-9b23-e0a1f4991f9f';
  $pane->panel = 'middle';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = '';
  $pane->uuid = '4716fe72-b54d-4f4f-9b23-e0a1f4991f9f';
  $display->content['new-4716fe72-b54d-4f4f-9b23-e0a1f4991f9f'] = $pane;
  $display->panels['middle'][1] = 'new-4716fe72-b54d-4f4f-9b23-e0a1f4991f9f';
  $pane = new stdClass();
  $pane->pid = 'new-2251ed1d-9d4b-4662-a980-67fe1f1e42c3';
  $pane->panel = 'middle';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'build_mode' => 'full',
    'identifier' => '',
    'link' => 0,
    'context' => 'argument_entity_id:node_1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = '2251ed1d-9d4b-4662-a980-67fe1f1e42c3';
  $display->content['new-2251ed1d-9d4b-4662-a980-67fe1f1e42c3'] = $pane;
  $display->panels['middle'][2] = 'new-2251ed1d-9d4b-4662-a980-67fe1f1e42c3';
  $pane = new stdClass();
  $pane->pid = 'new-7edc4bc6-ce30-4d0e-b4eb-e14ec9045674';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'ca-addtoany-feature',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7edc4bc6-ce30-4d0e-b4eb-e14ec9045674';
  $display->content['new-7edc4bc6-ce30-4d0e-b4eb-e14ec9045674'] = $pane;
  $display->panels['middle'][3] = 'new-7edc4bc6-ce30-4d0e-b4eb-e14ec9045674';
  $pane = new stdClass();
  $pane->pid = 'new-064ed0b9-f56c-4d16-8a34-7faf365836d3';
  $pane->panel = 'middle';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '30',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = '';
  $pane->uuid = '064ed0b9-f56c-4d16-8a34-7faf365836d3';
  $display->content['new-064ed0b9-f56c-4d16-8a34-7faf365836d3'] = $pane;
  $display->panels['middle'][4] = 'new-064ed0b9-f56c-4d16-8a34-7faf365836d3';
  $pane = new stdClass();
  $pane->pid = 'new-06f6723b-de7a-4094-9861-8ee144548e99';
  $pane->panel = 'middle';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = '';
  $pane->uuid = '06f6723b-de7a-4094-9861-8ee144548e99';
  $display->content['new-06f6723b-de7a-4094-9861-8ee144548e99'] = $pane;
  $display->panels['middle'][5] = 'new-06f6723b-de7a-4094-9861-8ee144548e99';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_video_gallery_node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_084a13c0-a720-4bdc-bca2-9b2b82096aba';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Aurora Video Galery: Node View Two',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_video' => 'ca_video',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_video_gallery_node_template',
          'settings' => array(
            'ca_video_gallery_node_template' => 'ca_video_gallery_node_template_two',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-node ca-video-node-template-2',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2aae47e0-8a09-4072-9e67-feca6a1802d0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_084a13c0-a720-4bdc-bca2-9b2b82096aba';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-18176784-b82b-4902-ac57-c6c74b255541';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_node-ca_video_gallery_node_view_two';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '18176784-b82b-4902-ac57-c6c74b255541';
  $display->content['new-18176784-b82b-4902-ac57-c6c74b255541'] = $pane;
  $display->panels['first-first'][0] = 'new-18176784-b82b-4902-ac57-c6c74b255541';
  $pane = new stdClass();
  $pane->pid = 'new-4716fe72-b54d-4f4f-9b23-e0a1f4991f9f';
  $pane->panel = 'first-first';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = '';
  $pane->uuid = '4716fe72-b54d-4f4f-9b23-e0a1f4991f9f';
  $display->content['new-4716fe72-b54d-4f4f-9b23-e0a1f4991f9f'] = $pane;
  $display->panels['first-first'][1] = 'new-4716fe72-b54d-4f4f-9b23-e0a1f4991f9f';
  $pane = new stdClass();
  $pane->pid = 'new-2251ed1d-9d4b-4662-a980-67fe1f1e42c3';
  $pane->panel = 'first-first';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'build_mode' => 'full',
    'identifier' => '',
    'link' => 0,
    'context' => 'argument_entity_id:node_1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = '2251ed1d-9d4b-4662-a980-67fe1f1e42c3';
  $display->content['new-2251ed1d-9d4b-4662-a980-67fe1f1e42c3'] = $pane;
  $display->panels['first-first'][2] = 'new-2251ed1d-9d4b-4662-a980-67fe1f1e42c3';
  $pane = new stdClass();
  $pane->pid = 'new-7edc4bc6-ce30-4d0e-b4eb-e14ec9045674';
  $pane->panel = 'first-first';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'ca-addtoany-feature',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7edc4bc6-ce30-4d0e-b4eb-e14ec9045674';
  $display->content['new-7edc4bc6-ce30-4d0e-b4eb-e14ec9045674'] = $pane;
  $display->panels['first-first'][3] = 'new-7edc4bc6-ce30-4d0e-b4eb-e14ec9045674';
  $pane = new stdClass();
  $pane->pid = 'new-064ed0b9-f56c-4d16-8a34-7faf365836d3';
  $pane->panel = 'first-first';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '30',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = '';
  $pane->uuid = '064ed0b9-f56c-4d16-8a34-7faf365836d3';
  $display->content['new-064ed0b9-f56c-4d16-8a34-7faf365836d3'] = $pane;
  $display->panels['first-first'][4] = 'new-064ed0b9-f56c-4d16-8a34-7faf365836d3';
  $pane = new stdClass();
  $pane->pid = 'new-06f6723b-de7a-4094-9861-8ee144548e99';
  $pane->panel = 'first-first';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = '';
  $pane->uuid = '06f6723b-de7a-4094-9861-8ee144548e99';
  $display->content['new-06f6723b-de7a-4094-9861-8ee144548e99'] = $pane;
  $display->panels['first-first'][5] = 'new-06f6723b-de7a-4094-9861-8ee144548e99';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_084a13c0-a720-4bdc-bca2-9b2b82096aba'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_995ba3fa-e513-42a6-81be-2cd5fdc26121';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Video Galery: Node View One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_video' => 'ca_video',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_video_gallery_node_template',
          'settings' => array(
            'ca_video_gallery_node_template' => 'ca_video_gallery_node_template_one',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-node ca-video-node-template-1',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2aae47e0-8a09-4072-9e67-feca6a1802d0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_995ba3fa-e513-42a6-81be-2cd5fdc26121';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5c7c804d-d173-4c18-a1db-6b3e8d7c6973';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_node-ca_video_gallery_node_view_one';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5c7c804d-d173-4c18-a1db-6b3e8d7c6973';
  $display->content['new-5c7c804d-d173-4c18-a1db-6b3e8d7c6973'] = $pane;
  $display->panels['first-first'][0] = 'new-5c7c804d-d173-4c18-a1db-6b3e8d7c6973';
  $pane = new stdClass();
  $pane->pid = 'new-4716fe72-b54d-4f4f-9b23-e0a1f4991f9f';
  $pane->panel = 'first-first';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = '';
  $pane->uuid = '4716fe72-b54d-4f4f-9b23-e0a1f4991f9f';
  $display->content['new-4716fe72-b54d-4f4f-9b23-e0a1f4991f9f'] = $pane;
  $display->panels['first-first'][1] = 'new-4716fe72-b54d-4f4f-9b23-e0a1f4991f9f';
  $pane = new stdClass();
  $pane->pid = 'new-2251ed1d-9d4b-4662-a980-67fe1f1e42c3';
  $pane->panel = 'first-first';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'build_mode' => 'full',
    'identifier' => '',
    'link' => 0,
    'context' => 'argument_entity_id:node_1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = '2251ed1d-9d4b-4662-a980-67fe1f1e42c3';
  $display->content['new-2251ed1d-9d4b-4662-a980-67fe1f1e42c3'] = $pane;
  $display->panels['first-first'][2] = 'new-2251ed1d-9d4b-4662-a980-67fe1f1e42c3';
  $pane = new stdClass();
  $pane->pid = 'new-7edc4bc6-ce30-4d0e-b4eb-e14ec9045674';
  $pane->panel = 'first-first';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'ca-addtoany-feature',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7edc4bc6-ce30-4d0e-b4eb-e14ec9045674';
  $display->content['new-7edc4bc6-ce30-4d0e-b4eb-e14ec9045674'] = $pane;
  $display->panels['first-first'][3] = 'new-7edc4bc6-ce30-4d0e-b4eb-e14ec9045674';
  $pane = new stdClass();
  $pane->pid = 'new-064ed0b9-f56c-4d16-8a34-7faf365836d3';
  $pane->panel = 'first-first';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '30',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = '';
  $pane->uuid = '064ed0b9-f56c-4d16-8a34-7faf365836d3';
  $display->content['new-064ed0b9-f56c-4d16-8a34-7faf365836d3'] = $pane;
  $display->panels['first-first'][4] = 'new-064ed0b9-f56c-4d16-8a34-7faf365836d3';
  $pane = new stdClass();
  $pane->pid = 'new-06f6723b-de7a-4094-9861-8ee144548e99';
  $pane->panel = 'first-first';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = '';
  $pane->uuid = '06f6723b-de7a-4094-9861-8ee144548e99';
  $display->content['new-06f6723b-de7a-4094-9861-8ee144548e99'] = $pane;
  $display->panels['first-first'][5] = 'new-06f6723b-de7a-4094-9861-8ee144548e99';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_995ba3fa-e513-42a6-81be-2cd5fdc26121'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_9ce3db83-36b6-4cbb-916f-aeb1ff37a97a';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'CA Video Galery: Node View Two',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_video' => 'ca_video',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_video_gallery_node_template',
          'settings' => array(
            'ca_video_gallery_node_template' => 'ca_video_gallery_node_template_two',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-node ca-video-node-template-2',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2aae47e0-8a09-4072-9e67-feca6a1802d0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_9ce3db83-36b6-4cbb-916f-aeb1ff37a97a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-18176784-b82b-4902-ac57-c6c74b255541';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_node-ca_video_gallery_node_view_two';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '18176784-b82b-4902-ac57-c6c74b255541';
  $display->content['new-18176784-b82b-4902-ac57-c6c74b255541'] = $pane;
  $display->panels['middle'][0] = 'new-18176784-b82b-4902-ac57-c6c74b255541';
  $pane = new stdClass();
  $pane->pid = 'new-4716fe72-b54d-4f4f-9b23-e0a1f4991f9f';
  $pane->panel = 'middle';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = '';
  $pane->uuid = '4716fe72-b54d-4f4f-9b23-e0a1f4991f9f';
  $display->content['new-4716fe72-b54d-4f4f-9b23-e0a1f4991f9f'] = $pane;
  $display->panels['middle'][1] = 'new-4716fe72-b54d-4f4f-9b23-e0a1f4991f9f';
  $pane = new stdClass();
  $pane->pid = 'new-2251ed1d-9d4b-4662-a980-67fe1f1e42c3';
  $pane->panel = 'middle';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'build_mode' => 'full',
    'identifier' => '',
    'link' => 0,
    'context' => 'argument_entity_id:node_1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = '2251ed1d-9d4b-4662-a980-67fe1f1e42c3';
  $display->content['new-2251ed1d-9d4b-4662-a980-67fe1f1e42c3'] = $pane;
  $display->panels['middle'][2] = 'new-2251ed1d-9d4b-4662-a980-67fe1f1e42c3';
  $pane = new stdClass();
  $pane->pid = 'new-7edc4bc6-ce30-4d0e-b4eb-e14ec9045674';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'ca-addtoany-feature',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7edc4bc6-ce30-4d0e-b4eb-e14ec9045674';
  $display->content['new-7edc4bc6-ce30-4d0e-b4eb-e14ec9045674'] = $pane;
  $display->panels['middle'][3] = 'new-7edc4bc6-ce30-4d0e-b4eb-e14ec9045674';
  $pane = new stdClass();
  $pane->pid = 'new-064ed0b9-f56c-4d16-8a34-7faf365836d3';
  $pane->panel = 'middle';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '30',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = '';
  $pane->uuid = '064ed0b9-f56c-4d16-8a34-7faf365836d3';
  $display->content['new-064ed0b9-f56c-4d16-8a34-7faf365836d3'] = $pane;
  $display->panels['middle'][4] = 'new-064ed0b9-f56c-4d16-8a34-7faf365836d3';
  $pane = new stdClass();
  $pane->pid = 'new-06f6723b-de7a-4094-9861-8ee144548e99';
  $pane->panel = 'middle';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = '';
  $pane->uuid = '06f6723b-de7a-4094-9861-8ee144548e99';
  $display->content['new-06f6723b-de7a-4094-9861-8ee144548e99'] = $pane;
  $display->panels['middle'][5] = 'new-06f6723b-de7a-4094-9861-8ee144548e99';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_9ce3db83-36b6-4cbb-916f-aeb1ff37a97a'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ca_video_gallery_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_video_gallery_add_video';
  $page->task = 'page';
  $page->admin_title = 'CA Video Gallery: Add Video';
  $page->admin_description = '';
  $page->path = 'video_gallery/add_video';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 24931611,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Video',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_add_video_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_add_video';
  $handler->handler = 'menu_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'ca_video',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'empty',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_video_gallery_add_video'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_video_gallery_admin';
  $page->task = 'page';
  $page->admin_title = 'CA Video Gallery: Admin';
  $page->admin_description = '';
  $page->path = 'video_gallery/admin/administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 24931611,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Administer',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '2',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_admin_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_admin';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Video Gallery: Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-video-admin',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Administer';
  $display->uuid = 'af973d24-0a0e-4c54-b85c-ef216317ed4c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_admin_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cb63e2f5-1a7a-40a9-b269-d997736a64ec';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_admin-ca_video_gallery_video_admin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cb63e2f5-1a7a-40a9-b269-d997736a64ec';
  $display->content['new-cb63e2f5-1a7a-40a9-b269-d997736a64ec'] = $pane;
  $display->panels['middle'][0] = 'new-cb63e2f5-1a7a-40a9-b269-d997736a64ec';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_video_gallery_admin'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_video_gallery_list_view';
  $page->task = 'page';
  $page->admin_title = 'CA Video Gallery: List View';
  $page->admin_description = '';
  $page->path = 'video_gallery/view';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'View',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Videos',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_list_view__panel_context_02d91f1e-cc42-4954-901f-01f902c053d0';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -10;
  $handler->conf = array(
    'title' => 'Aurora Video Galley: Grid Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_video_gallery_list_template',
          'settings' => array(
            'ca_video_gallery_list_template' => 'ca_video_gallery_list_template_one',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-list ca-video-list-template-1',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4e5cd453-e045-4e40-934c-4e4a93c44725';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_list_view__panel_context_02d91f1e-cc42-4954-901f-01f902c053d0';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b6fdfe42-a360-4a4d-a25c-1fa3ac29602d';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_list_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b6fdfe42-a360-4a4d-a25c-1fa3ac29602d';
  $display->content['new-b6fdfe42-a360-4a4d-a25c-1fa3ac29602d'] = $pane;
  $display->panels['first-first'][0] = 'new-b6fdfe42-a360-4a4d-a25c-1fa3ac29602d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_list_view__panel_context_fb786bbb-042b-43b6-9f33-977d35aebb8e';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -8;
  $handler->conf = array(
    'title' => 'Aurora Video Galley: Grid Template Two',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_video_gallery_list_template',
          'settings' => array(
            'ca_video_gallery_list_template' => 'ca_video_gallery_list_template_two',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-list ca-video-list-template-2',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '523dac00-06f4-42d2-b1dd-9009e0d8a032';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_list_view__panel_context_fb786bbb-042b-43b6-9f33-977d35aebb8e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8e813fe5-f308-4199-abbc-a5eff21f4e58';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_list_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8e813fe5-f308-4199-abbc-a5eff21f4e58';
  $display->content['new-8e813fe5-f308-4199-abbc-a5eff21f4e58'] = $pane;
  $display->panels['first-first'][0] = 'new-8e813fe5-f308-4199-abbc-a5eff21f4e58';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_list_view__aurora-video-galley-grid-view-template-one-preview';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -9;
  $handler->conf = array(
    'title' => 'Aurora Video Galley: Grid Template One Preview',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_video_gallery_list_template',
          'settings' => array(
            'ca_video_gallery_list_template' => 'ca_video_gallery_list_template_one_preview',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-list ca-video-list-template-1',
    'name' => 'aurora-video-galley-grid-view-template-one-preview',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
      'ninth-first' => NULL,
      'ninth-second' => NULL,
      'ninth-third' => NULL,
      'ninth-fourth' => NULL,
      'ninth-fifth' => NULL,
      'ninth-sixth' => NULL,
      'tenth-first' => NULL,
      'tenth-second' => NULL,
      'tenth-third' => NULL,
      'tenth-fourth' => NULL,
      'tenth-fifth' => NULL,
      'tenth-sixth' => NULL,
      'eleventh-first' => NULL,
      'eleventh-second' => NULL,
      'eleventh-third' => NULL,
      'eleventh-fourth' => NULL,
      'eleventh-fifth' => NULL,
      'eleventh-sixth' => NULL,
      'twelfth-first' => NULL,
      'twelfth-second' => NULL,
      'twelfth-third' => NULL,
      'twelfth-fourth' => NULL,
      'twelfth-fifth' => NULL,
      'twelfth-sixth' => NULL,
      'thirteenth-first' => NULL,
      'thirteenth-second' => NULL,
      'thirteenth-third' => NULL,
      'thirteenth-fourth' => NULL,
      'thirteenth-fifth' => NULL,
      'thirteenth-sixth' => NULL,
      'fourteenth-first' => NULL,
      'fourteenth-second' => NULL,
      'fourteenth-third' => NULL,
      'fourteenth-fourth' => NULL,
      'fourteenth-fifth' => NULL,
      'fourteenth-sixth' => NULL,
      'fifteenth-first' => NULL,
      'fifteenth-second' => NULL,
      'fifteenth-third' => NULL,
      'fifteenth-fourth' => NULL,
      'fifteenth-fifth' => NULL,
      'fifteenth-sixth' => NULL,
      'sixteenth-first' => NULL,
      'sixteenth-second' => NULL,
      'sixteenth-third' => NULL,
      'sixteenth-fourth' => NULL,
      'sixteenth-fifth' => NULL,
      'sixteenth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4e5cd453-e045-4e40-934c-4e4a93c44725';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_list_view__aurora-video-galley-grid-view-template-one-preview';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-498bb6bf-f83b-471f-8453-c2f2a89b0afb';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_list_1_preview';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '498bb6bf-f83b-471f-8453-c2f2a89b0afb';
  $display->content['new-498bb6bf-f83b-471f-8453-c2f2a89b0afb'] = $pane;
  $display->panels['first-first'][0] = 'new-498bb6bf-f83b-471f-8453-c2f2a89b0afb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_list_view__panel_context_6c5ac4a3-486a-4deb-8aaf-9de274219394';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -6;
  $handler->conf = array(
    'title' => 'Aurora Video Galley: List Template Three',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_video_gallery_list_template',
          'settings' => array(
            'ca_video_gallery_list_template' => 'ca_video_gallery_list_template_three',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-list ca-video-list-template-3',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '64c983d4-5b26-4723-b2c9-c5ca10ed369a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_list_view__panel_context_6c5ac4a3-486a-4deb-8aaf-9de274219394';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f7e52bb1-6482-4166-a8f1-0867a32bd132';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_list_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f7e52bb1-6482-4166-a8f1-0867a32bd132';
  $display->content['new-f7e52bb1-6482-4166-a8f1-0867a32bd132'] = $pane;
  $display->panels['first-first'][0] = 'new-f7e52bb1-6482-4166-a8f1-0867a32bd132';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_list_view__panel_context_f36e73ae-dc00-4c58-9324-44bceeb4fd0e';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -5;
  $handler->conf = array(
    'title' => 'Aurora Video Galley: Flex Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_video_gallery_list_template',
          'settings' => array(
            'ca_video_gallery_list_template' => 'ca_video_gallery_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-flex ca-video-flex-template-1',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4e5cd453-e045-4e40-934c-4e4a93c44725';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_list_view__panel_context_f36e73ae-dc00-4c58-9324-44bceeb4fd0e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c5ea0eda-a720-4e14-8a82-a325d937e1b6';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_flex_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c5ea0eda-a720-4e14-8a82-a325d937e1b6';
  $display->content['new-c5ea0eda-a720-4e14-8a82-a325d937e1b6'] = $pane;
  $display->panels['first-first'][0] = 'new-c5ea0eda-a720-4e14-8a82-a325d937e1b6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_list_view__panel_context_debe37b3-3227-4c0a-ba0c-ffe9a3fcf549';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -3;
  $handler->conf = array(
    'title' => 'Aurora Video Galley: Flex Template Two',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_video_gallery_list_template',
          'settings' => array(
            'ca_video_gallery_list_template' => 'ca_video_gallery_list_template_two_flex',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-flex ca-video-flex-template-2',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '523dac00-06f4-42d2-b1dd-9009e0d8a032';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_list_view__panel_context_debe37b3-3227-4c0a-ba0c-ffe9a3fcf549';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-994dd172-ef94-464c-b621-9282eca26ea6';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_flex_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '994dd172-ef94-464c-b621-9282eca26ea6';
  $display->content['new-994dd172-ef94-464c-b621-9282eca26ea6'] = $pane;
  $display->panels['first-first'][0] = 'new-994dd172-ef94-464c-b621-9282eca26ea6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_list_view__video-galley-flex-one-preview';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -4;
  $handler->conf = array(
    'title' => 'Aurora Video Galley: Flex Template One Preview',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_video_gallery_list_template',
          'settings' => array(
            'ca_video_gallery_list_template' => 'ca_video_gallery_list_template_one_flex_preview',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-flex ca-video-flex-template-1',
    'name' => 'video-galley-flex-one-preview',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
      'ninth-first' => NULL,
      'ninth-second' => NULL,
      'ninth-third' => NULL,
      'ninth-fourth' => NULL,
      'ninth-fifth' => NULL,
      'ninth-sixth' => NULL,
      'tenth-first' => NULL,
      'tenth-second' => NULL,
      'tenth-third' => NULL,
      'tenth-fourth' => NULL,
      'tenth-fifth' => NULL,
      'tenth-sixth' => NULL,
      'eleventh-first' => NULL,
      'eleventh-second' => NULL,
      'eleventh-third' => NULL,
      'eleventh-fourth' => NULL,
      'eleventh-fifth' => NULL,
      'eleventh-sixth' => NULL,
      'twelfth-first' => NULL,
      'twelfth-second' => NULL,
      'twelfth-third' => NULL,
      'twelfth-fourth' => NULL,
      'twelfth-fifth' => NULL,
      'twelfth-sixth' => NULL,
      'thirteenth-first' => NULL,
      'thirteenth-second' => NULL,
      'thirteenth-third' => NULL,
      'thirteenth-fourth' => NULL,
      'thirteenth-fifth' => NULL,
      'thirteenth-sixth' => NULL,
      'fourteenth-first' => NULL,
      'fourteenth-second' => NULL,
      'fourteenth-third' => NULL,
      'fourteenth-fourth' => NULL,
      'fourteenth-fifth' => NULL,
      'fourteenth-sixth' => NULL,
      'fifteenth-first' => NULL,
      'fifteenth-second' => NULL,
      'fifteenth-third' => NULL,
      'fifteenth-fourth' => NULL,
      'fifteenth-fifth' => NULL,
      'fifteenth-sixth' => NULL,
      'sixteenth-first' => NULL,
      'sixteenth-second' => NULL,
      'sixteenth-third' => NULL,
      'sixteenth-fourth' => NULL,
      'sixteenth-fifth' => NULL,
      'sixteenth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4e5cd453-e045-4e40-934c-4e4a93c44725';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_list_view__video-galley-flex-one-preview';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-37afa1ae-94d3-462e-a31c-d0fb597ec5a9';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_flex_1_preview';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '37afa1ae-94d3-462e-a31c-d0fb597ec5a9';
  $display->content['new-37afa1ae-94d3-462e-a31c-d0fb597ec5a9'] = $pane;
  $display->panels['first-first'][0] = 'new-37afa1ae-94d3-462e-a31c-d0fb597ec5a9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_list_view_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'CA Video Galley: Grid Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_video_gallery_list_template',
          'settings' => array(
            'ca_video_gallery_list_template' => 'ca_video_gallery_list_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-list ca-video-list-template-1',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4e5cd453-e045-4e40-934c-4e4a93c44725';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_list_view_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b6fdfe42-a360-4a4d-a25c-1fa3ac29602d';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_list_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b6fdfe42-a360-4a4d-a25c-1fa3ac29602d';
  $display->content['new-b6fdfe42-a360-4a4d-a25c-1fa3ac29602d'] = $pane;
  $display->panels['middle'][0] = 'new-b6fdfe42-a360-4a4d-a25c-1fa3ac29602d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_list_view_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'CA Video Galley: Grid Template Two',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_video_gallery_list_template',
          'settings' => array(
            'ca_video_gallery_list_template' => 'ca_video_gallery_list_template_two',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-list ca-video-list-template-2',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '523dac00-06f4-42d2-b1dd-9009e0d8a032';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_list_view_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8e813fe5-f308-4199-abbc-a5eff21f4e58';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_list_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8e813fe5-f308-4199-abbc-a5eff21f4e58';
  $display->content['new-8e813fe5-f308-4199-abbc-a5eff21f4e58'] = $pane;
  $display->panels['middle'][0] = 'new-8e813fe5-f308-4199-abbc-a5eff21f4e58';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_list_view_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'CA Video Galley: List Template Three',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_video_gallery_list_template',
          'settings' => array(
            'ca_video_gallery_list_template' => 'ca_video_gallery_list_template_three',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-list ca-video-list-template-3',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '64c983d4-5b26-4723-b2c9-c5ca10ed369a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_list_view_panel_context_3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f7e52bb1-6482-4166-a8f1-0867a32bd132';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_list_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f7e52bb1-6482-4166-a8f1-0867a32bd132';
  $display->content['new-f7e52bb1-6482-4166-a8f1-0867a32bd132'] = $pane;
  $display->panels['middle'][0] = 'new-f7e52bb1-6482-4166-a8f1-0867a32bd132';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_list_view_panel_context_4';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'CA Video Galley: Flex Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_video_gallery_list_template',
          'settings' => array(
            'ca_video_gallery_list_template' => 'ca_video_gallery_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-flex ca-video-flex-template-1',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4e5cd453-e045-4e40-934c-4e4a93c44725';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_list_view_panel_context_4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c5ea0eda-a720-4e14-8a82-a325d937e1b6';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_flex_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c5ea0eda-a720-4e14-8a82-a325d937e1b6';
  $display->content['new-c5ea0eda-a720-4e14-8a82-a325d937e1b6'] = $pane;
  $display->panels['middle'][0] = 'new-c5ea0eda-a720-4e14-8a82-a325d937e1b6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_list_view__ca-video-galley-grid-view-template-one-preview';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Video Galley: Grid Template One Preview',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_video_gallery_list_template',
          'settings' => array(
            'ca_video_gallery_list_template' => 'ca_video_gallery_list_template_one_preview',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-list ca-video-list-template-1',
    'name' => 'ca-video-galley-grid-view-template-one-preview',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4e5cd453-e045-4e40-934c-4e4a93c44725';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_list_view__ca-video-galley-grid-view-template-one-preview';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4b707456-3def-430f-a700-862e2d9d3f62';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_list_1_preview';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4b707456-3def-430f-a700-862e2d9d3f62';
  $display->content['new-4b707456-3def-430f-a700-862e2d9d3f62'] = $pane;
  $display->panels['middle'][0] = 'new-4b707456-3def-430f-a700-862e2d9d3f62';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_list_view_panel_context_5';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'CA Video Galley: Flex Template Two',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_video_gallery_list_template',
          'settings' => array(
            'ca_video_gallery_list_template' => 'ca_video_gallery_list_template_two_flex',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-flex ca-video-flex-template-2',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '523dac00-06f4-42d2-b1dd-9009e0d8a032';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_list_view_panel_context_5';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-994dd172-ef94-464c-b621-9282eca26ea6';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_flex_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '994dd172-ef94-464c-b621-9282eca26ea6';
  $display->content['new-994dd172-ef94-464c-b621-9282eca26ea6'] = $pane;
  $display->panels['middle'][0] = 'new-994dd172-ef94-464c-b621-9282eca26ea6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_list_view__ca-video-galley-flex-grid-template-one-preview';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'CA Video Galley: Flex Template One Preview',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_video_gallery_list_template',
          'settings' => array(
            'ca_video_gallery_list_template' => 'ca_video_gallery_list_template_one_flex_preview',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-flex ca-video-flex-template-1',
    'name' => 'ca-video-galley-flex-grid-template-one-preview',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4e5cd453-e045-4e40-934c-4e4a93c44725';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_list_view__ca-video-galley-flex-grid-template-one-preview';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7ed32b40-2a8e-4082-b8f4-35d1abb8d54c';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_flex_1_preview';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7ed32b40-2a8e-4082-b8f4-35d1abb8d54c';
  $display->content['new-7ed32b40-2a8e-4082-b8f4-35d1abb8d54c'] = $pane;
  $display->panels['middle'][0] = 'new-7ed32b40-2a8e-4082-b8f4-35d1abb8d54c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_list_view__aurora-video-galley-grid-template-two-preview';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -7;
  $handler->conf = array(
    'title' => 'Aurora Video Galley: Grid Template Two Preview',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_video_gallery_list_template',
          'settings' => array(
            'ca_video_gallery_list_template' => 'ca_video_gallery_list_template_two_preview',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-list ca-video-list-template-2',
    'name' => 'aurora-video-galley-grid-template-two-preview',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '523dac00-06f4-42d2-b1dd-9009e0d8a032';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_list_view__aurora-video-galley-grid-template-two-preview';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8e813fe5-f308-4199-abbc-a5eff21f4e58';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_list_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8e813fe5-f308-4199-abbc-a5eff21f4e58';
  $display->content['new-8e813fe5-f308-4199-abbc-a5eff21f4e58'] = $pane;
  $display->panels['first-first'][0] = 'new-8e813fe5-f308-4199-abbc-a5eff21f4e58';
  $pane = new stdClass();
  $pane->pid = 'new-9f5b950b-1c6c-44d7-b2a3-b9ee8c6ba335';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_list_2_preview';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9f5b950b-1c6c-44d7-b2a3-b9ee8c6ba335';
  $display->content['new-9f5b950b-1c6c-44d7-b2a3-b9ee8c6ba335'] = $pane;
  $display->panels['first-first'][1] = 'new-9f5b950b-1c6c-44d7-b2a3-b9ee8c6ba335';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_list_view__aurora-video-galley-flex-template-two-preview';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Aurora Video Galley: Flex Template Two Preview',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_video_gallery_list_template',
          'settings' => array(
            'ca_video_gallery_list_template' => 'ca_video_gallery_list_template_two_flex_preview',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-flex ca-video-flex-template-2',
    'name' => 'aurora-video-galley-flex-template-two-preview',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '523dac00-06f4-42d2-b1dd-9009e0d8a032';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_list_view__aurora-video-galley-flex-template-two-preview';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-994dd172-ef94-464c-b621-9282eca26ea6';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_flex_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '994dd172-ef94-464c-b621-9282eca26ea6';
  $display->content['new-994dd172-ef94-464c-b621-9282eca26ea6'] = $pane;
  $display->panels['first-first'][0] = 'new-994dd172-ef94-464c-b621-9282eca26ea6';
  $pane = new stdClass();
  $pane->pid = 'new-b4113cbc-d449-45fe-9833-1daca12a8454';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_flex_2_preview';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b4113cbc-d449-45fe-9833-1daca12a8454';
  $display->content['new-b4113cbc-d449-45fe-9833-1daca12a8454'] = $pane;
  $display->panels['first-first'][1] = 'new-b4113cbc-d449-45fe-9833-1daca12a8454';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_list_view__ca-video-galley-grid-template-two-preview';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'CA Video Galley: Grid Template Two Preview',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_video_gallery_list_template',
          'settings' => array(
            'ca_video_gallery_list_template' => 'ca_video_gallery_list_template_two_preview',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-list ca-video-list-template-2',
    'name' => 'ca-video-galley-grid-template-two-preview',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '523dac00-06f4-42d2-b1dd-9009e0d8a032';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_list_view__ca-video-galley-grid-template-two-preview';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0acb110e-b074-4207-9a37-d74c8cb2f143';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_list_2_preview';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0acb110e-b074-4207-9a37-d74c8cb2f143';
  $display->content['new-0acb110e-b074-4207-9a37-d74c8cb2f143'] = $pane;
  $display->panels['middle'][0] = 'new-0acb110e-b074-4207-9a37-d74c8cb2f143';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_list_view__ca-video-galley-flex-template-two-preview';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'CA Video Galley: Flex Template Two Preview',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_video_gallery_list_template',
          'settings' => array(
            'ca_video_gallery_list_template' => 'ca_video_gallery_list_template_two_flex_preview',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-flex ca-video-flex-template-2',
    'name' => 'ca-video-galley-flex-template-two-preview',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '523dac00-06f4-42d2-b1dd-9009e0d8a032';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_list_view__ca-video-galley-flex-template-two-preview';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f596e106-532f-4109-b023-b544c3af5f82';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_list-ca_video_gallery_flex_2_preview';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f596e106-532f-4109-b023-b544c3af5f82';
  $display->content['new-f596e106-532f-4109-b023-b544c3af5f82'] = $pane;
  $display->panels['middle'][0] = 'new-f596e106-532f-4109-b023-b544c3af5f82';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_video_gallery_list_view'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_video_gallery_sort_order';
  $page->task = 'page';
  $page->admin_title = 'CA Video Gallery: Sort Order';
  $page->admin_description = '';
  $page->path = 'video_gallery/admin/sort_order';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 24931611,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Sort Order',
    'name' => 'navigation',
    'weight' => '5',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_video_gallery_sort_order_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_video_gallery_sort_order';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Video Gallery: Sort Order',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-video-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sort Order';
  $display->uuid = 'a4fa5ce1-46d6-4a02-83e6-0cb692f90fb4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_video_gallery_sort_order_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-85559223-a8ba-4abe-adbc-c7d10f40c14c';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_video_sort-ca_video_gallery_video_sort';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '85559223-a8ba-4abe-adbc-c7d10f40c14c';
  $display->content['new-85559223-a8ba-4abe-adbc-c7d10f40c14c'] = $pane;
  $display->panels['middle'][0] = 'new-85559223-a8ba-4abe-adbc-c7d10f40c14c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_video_gallery_sort_order'] = $page;

  return $pages;

}
