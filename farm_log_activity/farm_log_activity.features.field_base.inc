<?php
/**
 * @file
 * farm_log_activity.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function farm_log_activity_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_farm_rating'.
  $field_bases['field_farm_rating'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_farm_rating',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'fivestar',
    'settings' => array(
      'axis' => 'vote',
    ),
    'translatable' => 0,
    'type' => 'fivestar',
  );

  return $field_bases;
}
