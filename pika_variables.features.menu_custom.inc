<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function pika_variables_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: admin
  $menus['admin'] = array(
    'menu_name' => 'admin',
    'title' => 'Admin',
    'description' => 'Administrative links.',
  );
  // Exported menu: admin_menu
  $menus['admin_menu'] = array(
    'menu_name' => 'admin_menu',
    'title' => 'Administration menu',
    'description' => '',
  );
  // Exported menu: features
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: menu-clientdashboardmenu
  $menus['menu-clientdashboardmenu'] = array(
    'menu_name' => 'menu-clientdashboardmenu',
    'title' => 'Client Dashboard Left',
    'description' => 'For prepared views of clients based on age and address.',
  );
  // Exported menu: menu-dashboard
  $menus['menu-dashboard'] = array(
    'menu_name' => 'menu-dashboard',
    'title' => 'Client Dashboard Right',
    'description' => '',
  );
  // Exported menu: menu-dashboardrightside
  $menus['menu-dashboardrightside'] = array(
    'menu_name' => 'menu-dashboardrightside',
    'title' => 'Dashboard Right Side',
    'description' => '',
  );
  // Exported menu: menu-links
  $menus['menu-links'] = array(
    'menu_name' => 'menu-links',
    'title' => 'Links',
    'description' => 'Links to useful sites.',
  );
  // Exported menu: menu-lmmenu
  $menus['menu-lmmenu'] = array(
    'menu_name' => 'menu-lmmenu',
    'title' => 'lm_menu',
    'description' => '',
  );
  // Exported menu: menu-navigation
  $menus['menu-navigation'] = array(
    'menu_name' => 'menu-navigation',
    'title' => 'Navigation ',
    'description' => 'Navigation Front Page',
  );
  // Exported menu: menu-navigation-harvest
  $menus['menu-navigation-harvest'] = array(
    'menu_name' => 'menu-navigation-harvest',
    'title' => 'Registry Dashboard Menu Link',
    'description' => 'These links are used for the registry dashboard',
  );
  // Exported menu: menu-primarylinkfordashboard
  $menus['menu-primarylinkfordashboard'] = array(
    'menu_name' => 'menu-primarylinkfordashboard',
    'title' => 'Dashboard Primary Link',
    'description' => '',
  );
  // Exported menu: menu-print-items
  $menus['menu-print-items'] = array(
    'menu_name' => 'menu-print-items',
    'title' => 'Print Summary Lists',
    'description' => 'Different printing options',
  );
  // Exported menu: menu-usermenu
  $menus['menu-usermenu'] = array(
    'menu_name' => 'menu-usermenu',
    'title' => 'User Menu',
    'description' => 'My account',
  );
  // Exported menu: menu-workflowsummary
  $menus['menu-workflowsummary'] = array(
    'menu_name' => 'menu-workflowsummary',
    'title' => 'Dashboard Left Side',
    'description' => '',
  );
  // Exported menu: navigation
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The navigation menu is provided by Drupal and is the main interactive menu for any site. It is usually the only menu that contains personalized links for authenticated users, and is often not even visible to anonymous users.',
  );
  // Exported menu: primary-links
  $menus['primary-links'] = array(
    'menu_name' => 'primary-links',
    'title' => 'Primary links',
    'description' => 'Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.',
  );
  // Exported menu: secondary-links
  $menus['secondary-links'] = array(
    'menu_name' => 'secondary-links',
    'title' => 'Secondary links',
    'description' => 'Secondary links are often used for pages like legal notices, contact details, and other secondary navigation items that play a lesser role than primary links',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Admin');
  t('Administration menu');
  t('Administrative links.');
  t('Client Dashboard Left');
  t('Client Dashboard Right');
  t('Dashboard Left Side');
  t('Dashboard Primary Link');
  t('Dashboard Right Side');
  t('Different printing options');
  t('Features');
  t('For prepared views of clients based on age and address.');
  t('Links');
  t('Links to useful sites.');
  t('Menu items for any enabled features.');
  t('My account');
  t('Navigation');
  t('Navigation ');
  t('Navigation Front Page');
  t('Primary links');
  t('Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.');
  t('Print Summary Lists');
  t('Registry Dashboard Menu Link');
  t('Secondary links');
  t('Secondary links are often used for pages like legal notices, contact details, and other secondary navigation items that play a lesser role than primary links');
  t('The navigation menu is provided by Drupal and is the main interactive menu for any site. It is usually the only menu that contains personalized links for authenticated users, and is often not even visible to anonymous users.');
  t('These links are used for the registry dashboard');
  t('User Menu');
  t('lm_menu');


  return $menus;
}
