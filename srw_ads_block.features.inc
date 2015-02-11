<?php
/**
 * @file
 * srw_ads_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function srw_ads_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
