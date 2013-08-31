<?php
/**
 * @file
 * mentee_profile.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function mentee_profile_default_profile2_type() {
  $items = array();
  $items['mentee'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "mentee",
    "label" : "mentee",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : [  ]
  }');
  return $items;
}
