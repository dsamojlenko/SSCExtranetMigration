<?php
/**
 * @file
 * ssc_migration_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ssc_migration_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ssc_migration_feature_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ssc_migration_feature_node_info() {
  $items = array(
    'adm_cs_blog_content' => array(
      'name' => t('ADM CS blog content'),
      'base' => 'node_content',
      'description' => t('Gina Rallis blog'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'adm_ops_blog_content' => array(
      'name' => t('ADM Ops blog content'),
      'base' => 'node_content',
      'description' => t('Kevin Radford Blog'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'adm_pcr_blog_content' => array(
      'name' => t('ADM PCR blog content'),
      'base' => 'node_content',
      'description' => t('Maurice Chénier Blog'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'adm_tssd_blog_content' => array(
      'name' => t('ADM TSSD blog content'),
      'base' => 'node_content',
      'description' => t('Benoit Long Blog'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'communiques' => array(
      'name' => t('Communiques'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'coo_blog_content' => array(
      'name' => t('COO blog content'),
      'base' => 'node_content',
      'description' => t('Grant Westcott Blog'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'finance' => array(
      'name' => t('Finance'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'human_ressources' => array(
      'name' => t('Human Ressources'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'iconnect' => array(
      'name' => t('iConnect'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'image_gallery' => array(
      'name' => t('Image Gallery'),
      'base' => 'node_content',
      'description' => t('Content type specific for photo gallery'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'latest_news' => array(
      'name' => t('Latest News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'president_blog_content' => array(
      'name' => t('President blog content'),
      'base' => 'node_content',
      'description' => t('Liseanne Forand Blog'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'procurement' => array(
      'name' => t('Procurement'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
