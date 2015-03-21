<?php
/**
 * @file
 * ca_video_gallery.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ca_video_gallery_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ca_video_v_video'
  $field_bases['field_ca_video_v_video'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ca_video_v_video',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  return $field_bases;
}
