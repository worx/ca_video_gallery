<?php

/**
 * @file
 * Plugin to provide access control based upon ca_video gallery admin settings.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Video Gallery: list type'),
  'description' => t('Control access by video gallery list type.'),
  'callback' => 'ca_video_gallery_list_template_access_check',
  'settings form' => 'ca_video_gallery_list_template_access_settings',
  'settings form submit' => 'ca_video_gallery_list_template_access_settings_submit',
  'summary' => 'ca_video_gallery_list_template_access_summary',
);

/**
 * Settings form for the 'by video gallery list type' access plugin.
 */
function ca_video_gallery_list_template_access_settings($form, &$form_state, $conf) {
  $form['settings']['ca_video_gallery_list_template'] = array(
    '#type' => 'select',
    '#title' => t('Video Gallery\'s list template'),
    '#options' => array(
      'ca_video_gallery_list_template_one' => t('Template one'),
      'ca_video_gallery_list_template_one_flex' => t('Template one Flex'),
      'ca_video_gallery_list_template_one_preview' => t('Template one Preview'),
      'ca_video_gallery_list_template_one_flex_preview' => t('Template one Flex Preview'),
      'ca_video_gallery_list_template_two' => t('Template two'),
      'ca_video_gallery_list_template_two_flex' => t('Template two Flex'),
      'ca_video_gallery_list_template_two_preview' => t('Template two Preview'),
      'ca_video_gallery_list_template_two_flex_preview' => t('Template two Flex Preview'),
      'ca_video_gallery_list_template_three' => t('Template three'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_video_gallery_list_template'],
  );

  return $form;
}

/**
 * Settings form submission.
 */
function ca_video_gallery_list_template_access_settings_form($form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_video_gallery_list_template_access_check($conf, $context) {
  return $conf['ca_video_gallery_list_template'] == variable_get('ca_video_gallery_list_template', 'ca_video_gallery_list_template_one_flex');
}

/**
 * Provide a summary description based upon the checked video gallery list type.
 */
function ca_video_gallery_list_template_access_summary($conf, $context) {
  switch ($conf['ca_video_gallery_list_template']) {
    case 'ca_video_gallery_list_template_one':
      $template = t('Template one');
      break;
    case 'ca_video_gallery_list_template_one_flex':
      $template = t('Template one Flex');
      break;
    case 'ca_video_gallery_list_template_one_preview':
      $template = t('Template one Preview');
      break;
    case 'ca_video_gallery_list_template_one_flex_preview':
      $template = t('Template one Flex Preview');
      break;
    case 'ca_video_gallery_list_template_two':
      $template = t('Template two');
      break;
    case 'ca_video_gallery_list_template_two_flex':
      $template = t('Template two Flex');
      break;
    case 'ca_video_gallery_list_template_two_preview':
      $template = t('Template two Preview');
      break;
    case 'ca_video_gallery_list_template_two_flex_preview':
      $template = t('Template two Flex Preview');
      break;
    case 'ca_video_gallery_list_template_three':
      $template = t('Template three');
      break;
  }

  return t('Display template is set to: ' . $template);
}
