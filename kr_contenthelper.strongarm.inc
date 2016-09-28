<?php
/**
 * @file
 * kr_contenthelper.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function kr_contenthelper_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short_timeless';
  $strongarm->value = 'd.m.Y';
  $export['date_format_short_timeless'] = $strongarm;

  return $export;
}
