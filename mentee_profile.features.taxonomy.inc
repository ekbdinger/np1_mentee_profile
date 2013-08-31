<?php
/**
 * @file
 * mentee_profile.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mentee_profile_taxonomy_default_vocabularies() {
  return array(
    'career_industry' => array(
      'name' => 'Career Industry',
      'machine_name' => 'career_industry',
      'description' => 'Industry that a mentee or mentee works in',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
