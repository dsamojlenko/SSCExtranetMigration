<?php

/**
 * Common mappings for the Drupal 6 node migrations.
 */
 

class SSCMenuMigration extends DrupalMenuMigration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);
	
  }
  
  protected function query() {
    $query = Database::getConnection('default', $this->sourceConnection)
             ->select('menu_custom', 'm')
             ->fields('m');
    return $query;
  }
  
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // D6 prefixes menus added through the UI with 'menu-'
    if ($row->menu_name == 'secondary-links' ||
        substr($row->menu_name, 0, 5) === 'menu-') {
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

}


class SSCMenuLinksMigration extends DrupalMenuLinksMigration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);
	
  }
  
  protected function query() {
    $query = Database::getConnection('default', $this->sourceConnection)
             ->select('menu_links', 'm')
             ->fields('m');
    return $query;
  }
}

