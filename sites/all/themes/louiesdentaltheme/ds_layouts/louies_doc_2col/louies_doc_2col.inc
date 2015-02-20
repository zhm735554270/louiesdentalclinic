<?php
/**
 * @file
 * Definition of Louies Two column Display Suite layout.
 */

function ds_louies_doc_2col() {
  return array(
    'label' => t('Louies Dental Theme Two column'),
    'regions' => array(
      'left' => t('Left'),
      'right' => t('Right'),
    ),
    'image' => TRUE,
  );
}
