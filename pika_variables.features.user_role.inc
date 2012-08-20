<?php

/**
 * Implementation of hook_user_default_roles().
 */
function pika_variables_user_default_roles() {
  $roles = array();

  // Exported role: Environmental Assessor
  $roles['Environmental Assessor'] = array(
    'name' => 'Environmental Assessor',
  );

  // Exported role: Finance
  $roles['Finance'] = array(
    'name' => 'Finance',
  );

  // Exported role: GIS technician
  $roles['GIS technician'] = array(
    'name' => 'GIS technician',
  );

  // Exported role: Governance
  $roles['Governance'] = array(
    'name' => 'Governance',
  );

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  // Exported role: clerk
  $roles['clerk'] = array(
    'name' => 'clerk',
  );

  // Exported role: controller
  $roles['controller'] = array(
    'name' => 'controller',
  );

  // Exported role: guest
  $roles['guest'] = array(
    'name' => 'guest',
  );

  // Exported role: site manager
  $roles['site manager'] = array(
    'name' => 'site manager',
  );

  return $roles;
}
