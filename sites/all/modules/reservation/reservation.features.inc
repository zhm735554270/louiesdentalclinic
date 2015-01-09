<?php
/**
 * @file
 * reservation.features.inc
 */

/**
 * Implements hook_node_info().
 */
function reservation_node_info() {
  $items = array(
    'reservation' => array(
      'name' => t('Set An Appointment With Us'),
      'base' => 'node_content',
      'description' => t('Sends reservation request to the admin.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
