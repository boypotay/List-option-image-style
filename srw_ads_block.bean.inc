<?php
/**
 * @file
 * srw_ads_block.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function srw_ads_block_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'srw_ads_block';
  $bean_type->label = 'SRW Ads Block';
  $bean_type->options = '';
  $bean_type->description = 'SRW Ads Block';
  $export['srw_ads_block'] = $bean_type;

  return $export;
}
