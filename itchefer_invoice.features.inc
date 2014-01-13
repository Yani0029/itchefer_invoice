<?php
/**
 * @file
 * itchefer_invoice.features.inc
 */

/**
 * Implements hook_node_info().
 */
function itchefer_invoice_node_info() {
  $items = array(
    'invoice' => array(
      'name' => t('faktura'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
