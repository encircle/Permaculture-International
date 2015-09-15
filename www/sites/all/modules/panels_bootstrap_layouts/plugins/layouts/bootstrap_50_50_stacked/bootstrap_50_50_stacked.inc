<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Two 50/50 Columns Stacked'),
  'category' => t('Bootstrap'),
  'icon' => 'bootstrap_50_50_stacked.png',
  'theme' => 'bootstrap_twocol_stacked',
  'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left'),
    'right' => t('Right'),
    'bottom' => t('Bottom'),
  ),
);
