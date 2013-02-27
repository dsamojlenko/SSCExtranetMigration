<?php

/**
 * Common mappings for the Drupal 6 node migrations.
 */
class SSCNodeMigration extends DrupalNode7Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);
	
	$this->addFieldMapping('tnid', 'tnid')
         ->description('Map translation nodes');
    
  }
}
