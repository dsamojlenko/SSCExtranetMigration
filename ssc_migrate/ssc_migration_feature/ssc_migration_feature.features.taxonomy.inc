<?php
/**
 * @file
 * ssc_migration_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ssc_migration_feature_taxonomy_default_vocabularies() {
  return array(
    'human_resources' => array(
      'name' => 'Human Resources',
      'machine_name' => 'human_resources',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '4',
      'metatags' => array(),
    ),
  );
}
