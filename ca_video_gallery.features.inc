<?php
/**
 * @file
 * ca_video_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ca_video_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "weight" && $api == "weight") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ca_video_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ca_video_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: ca_video_gallery_large.
  $styles['ca_video_gallery_large'] = array(
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 480,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'ca_video_gallery_large',
  );

  // Exported image style: ca_video_gallery_original.
  $styles['ca_video_gallery_original'] = array(
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 560,
          'height' => 420,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'ca_video_gallery_original',
  );

  // Exported image style: ca_video_gallery_preview.
  $styles['ca_video_gallery_preview'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'ca_video_gallery_preview',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ca_video_gallery_node_info() {
  $items = array(
    'ca_video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ca_video_gallery_weight_features_default_settings() {
  $settings = array();

  $settings['ca_video'] = array(
    'enabled' => 1,
    'range' => 100,
    'menu_weight' => 0,
    'default' => -100,
    'sync_translations' => 0,
  );

  return $settings;
}
