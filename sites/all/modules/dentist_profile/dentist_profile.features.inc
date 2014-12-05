<?php
/**
 * @file
 * dentist_profile.features.inc
 */

/**
 * Implements hook_node_info().
 */
function dentist_profile_node_info() {
  $items = array(
    'dentist' => array(
      'name' => t('Dentists'),
      'base' => 'node_content',
      'description' => t('short profile of doctors'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
