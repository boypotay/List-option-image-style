<?php
/**
 * @file
 * srw_ads_block.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function srw_ads_block_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-srw_ads_block-field_ads_block_image'
  $field_instances['bean-srw_ads_block-field_ads_block_image'] = array(
    'bundle' => 'srw_ads_block',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_ads_block_image',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'epsacrop' => array(
        'styles' => array(
          'desk-hero-background-adaptbreakpoints_theme_srwt_desk_1x' => 0,
          'desk-hero-background-adaptbreakpoints_theme_srwt_mobile_1x' => 0,
          'desk-hero-background-adaptbreakpoints_theme_srwt_tablet_1x' => 0,
          'desk-news-large-adapt-breakpoints_theme_srwt_desk_1x' => 0,
          'desk-news-large-adapt-breakpoints_theme_srwt_mobile_1x' => 0,
          'desk_hero_background_custom_breakpoints_theme_srwt_desk_1x' => 0,
          'desk_hero_background_custom_breakpoints_theme_srwt_mobile_1x' => 0,
          'desk_new_home_bottom' => 0,
          'desk_news_medium' => 0,
          'desk_work_program_thumb' => 0,
        ),
      ),
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'bean-srw_ads_block-field_ads_block_link'
  $field_instances['bean-srw_ads_block-field_ads_block_link'] = array(
    'bundle' => 'srw_ads_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_ads_block_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'bean-srw_ads_block-field_ads_image_style'
  $field_instances['bean-srw_ads_block-field_ads_image_style'] = array(
    'bundle' => 'srw_ads_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_ads_image_style',
    'label' => 'Image style',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');
  t('Image style');
  t('Link');

  return $field_instances;
}
