<?php

/**
 * Implementation of hook_node_export_features_default().
 */
function pika_variables_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  array(
    \'nid\' => NULL,
    \'type\' => \'land_use_designation\',
    \'language\' => \'en\',
    \'uid\' => \'6\',
    \'status\' => \'1\',
    \'created\' => NULL,
    \'changed\' => NULL,
    \'comment\' => \'2\',
    \'promote\' => \'1\',
    \'moderate\' => \'0\',
    \'sticky\' => \'0\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'vid\' => NULL,
    \'revision_uid\' => \'1\',
    \'title\' => \'Land use designation\',
    \'body\' => \'\',
    \'teaser\' => \'\',
    \'log\' => \'\',
    \'revision_timestamp\' => NULL,
    \'format\' => \'1\',
    \'name\' => \'kblattmann\',
    \'picture\' => \'\',
    \'data\' => \'a:4:{s:13:"form_build_id";s:37:"form-71c3964fbeda4bebc48471387fc528be";s:21:"force_password_change";i:0;s:5:"block";a:2:{s:4:"user";a:1:{i:1;i:0;}s:5:"views";a:1:{s:16:"calendar-block_1";i:0;}}s:7:"contact";i:0;}\',
    \'path\' => NULL,
    \'print_display\' => 1,
    \'print_display_comment\' => 0,
    \'print_display_urllist\' => 1,
    \'_workflow\' => \'3\',
    \'last_comment_timestamp\' => NULL,
    \'last_comment_name\' => NULL,
    \'comment_count\' => \'0\',
    \'taxonomy\' => array(),
    \'files\' => array(),
    \'uuid\' => \'48f1721b-c6ee-11e1-a847-002590335e20\',
    \'revision_uuid\' => FALSE,
    \'menu\' => NULL,
    \'export_display\' => \'$display = new ;
$display->layout = \\\'\\\';
$display->layout_settings = \\\'\\\';
$display->panel_settings = \\\'\\\';
$display->cache = \\\'\\\';
$display->title = \\\'\\\';
$display->content = array();
$display->panels = array();
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = \\\'0\\\';
\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'nid\' => NULL,
    \'type\' => \'page\',
    \'language\' => \'en\',
    \'uid\' => \'6\',
    \'status\' => \'1\',
    \'created\' => NULL,
    \'changed\' => NULL,
    \'comment\' => \'0\',
    \'promote\' => \'0\',
    \'moderate\' => \'0\',
    \'sticky\' => \'0\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'vid\' => NULL,
    \'revision_uid\' => \'1\',
    \'title\' => \'Registry\',
    \'body\' => \'Settlement Land Registry System

The Settlement Land Registry System is a module that supports and facilitates the registration of settlement land parcels.

\',
    \'teaser\' => \'Settlement Land Registry System

The Settlement Land Registry System is a module that supports and facilitates the registration of settlement land parcels.

\',
    \'log\' => \'\',
    \'revision_timestamp\' => NULL,
    \'format\' => \'1\',
    \'name\' => \'kblattmann\',
    \'picture\' => \'\',
    \'data\' => \'a:4:{s:13:"form_build_id";s:37:"form-71c3964fbeda4bebc48471387fc528be";s:21:"force_password_change";i:0;s:5:"block";a:2:{s:4:"user";a:1:{i:1;i:0;}s:5:"views";a:1:{s:16:"calendar-block_1";i:0;}}s:7:"contact";i:0;}\',
    \'path\' => NULL,
    \'print_display\' => 0,
    \'print_display_comment\' => 0,
    \'print_display_urllist\' => 0,
    \'_workflow\' => \'3\',
    \'last_comment_timestamp\' => NULL,
    \'last_comment_name\' => NULL,
    \'comment_count\' => \'0\',
    \'taxonomy\' => array(),
    \'files\' => array(),
    \'uuid\' => \'49377995-c6ee-11e1-a847-002590335e20\',
    \'revision_uuid\' => \'44282c49-0975-11e2-b260-0025906bdbee\',
    \'menu\' => NULL,
    \'export_display\' => \'$display = new ;
$display->layout = \\\'\\\';
$display->layout_settings = \\\'\\\';
$display->panel_settings = \\\'\\\';
$display->cache = \\\'\\\';
$display->title = \\\'\\\';
$display->content = array();
$display->panels = array();
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = \\\'0\\\';
\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'nid\' => NULL,
    \'type\' => \'fnsettlementlands\',
    \'language\' => \'en\',
    \'uid\' => \'6\',
    \'status\' => \'1\',
    \'created\' => NULL,
    \'changed\' => NULL,
    \'comment\' => \'2\',
    \'promote\' => \'1\',
    \'moderate\' => \'0\',
    \'sticky\' => \'0\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'vid\' => NULL,
    \'revision_uid\' => \'1\',
    \'title\' => \'Kluane First Nation Settlement Lands\',
    \'body\' => \'\',
    \'teaser\' => \'\',
    \'log\' => \'\',
    \'revision_timestamp\' => NULL,
    \'format\' => \'0\',
    \'name\' => \'kblattmann\',
    \'picture\' => \'\',
    \'data\' => \'a:4:{s:13:"form_build_id";s:37:"form-71c3964fbeda4bebc48471387fc528be";s:21:"force_password_change";i:0;s:5:"block";a:2:{s:4:"user";a:1:{i:1;i:0;}s:5:"views";a:1:{s:16:"calendar-block_1";i:0;}}s:7:"contact";i:0;}\',
    \'path\' => NULL,
    \'print_display\' => 1,
    \'print_display_comment\' => 0,
    \'print_display_urllist\' => 1,
    \'field_fnsl_firstnation\' => array(
      \'0\' => array(
        \'value\' => \'Kluane\',
      ),
    ),
    \'field_fnsl_kml\' => array(
      \'0\' => array(
        \'fid\' => \'487\',
        \'uid\' => \'1\',
        \'filename\' => \'KFN_SL_incl_unsurveyed_Project_WGS_With_URL.kml\',
        \'filepath\' => \'sites/19pc.v4730969223.v180p.nyc.host8.biz/files/KFN_SL_incl_unsurveyed_Project_WGS_With_URL.kml\',
        \'filemime\' => \'application/vnd.google-earth.kml+xml\',
        \'filesize\' => \'1033850\',
        \'status\' => \'1\',
        \'timestamp\' => \'1348086155\',
        \'origname\' => \'\',
        \'list\' => \'1\',
        \'data\' => NULL,
      ),
    ),
    \'_workflow\' => \'3\',
    \'last_comment_timestamp\' => NULL,
    \'last_comment_name\' => NULL,
    \'comment_count\' => \'0\',
    \'taxonomy\' => array(),
    \'files\' => array(),
    \'uuid\' => \'d29e3d2c-c6ec-11e1-a847-002590335e20\',
    \'revision_uuid\' => \'0e4f9c1f-0296-11e2-b260-0025906bdbee\',
    \'menu\' => NULL,
    \'export_display\' => \'$display = new ;
$display->layout = \\\'\\\';
$display->layout_settings = \\\'\\\';
$display->panel_settings = \\\'\\\';
$display->cache = \\\'\\\';
$display->title = \\\'\\\';
$display->content = array();
$display->panels = array();
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = \\\'0\\\';
\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'nid\' => NULL,
    \'type\' => \'home_page_map\',
    \'language\' => \'en\',
    \'uid\' => \'6\',
    \'status\' => \'1\',
    \'created\' => NULL,
    \'changed\' => NULL,
    \'comment\' => \'0\',
    \'promote\' => \'1\',
    \'moderate\' => \'0\',
    \'sticky\' => \'0\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'vid\' => NULL,
    \'revision_uid\' => \'1\',
    \'title\' => \'Welcome to PIKA - Integrated Knowledge Application\',
    \'body\' => \'\',
    \'teaser\' => \'\',
    \'log\' => \'\',
    \'revision_timestamp\' => NULL,
    \'format\' => \'1\',
    \'name\' => \'kblattmann\',
    \'picture\' => \'\',
    \'data\' => \'a:4:{s:13:"form_build_id";s:37:"form-71c3964fbeda4bebc48471387fc528be";s:21:"force_password_change";i:0;s:5:"block";a:2:{s:4:"user";a:1:{i:1;i:0;}s:5:"views";a:1:{s:16:"calendar-block_1";i:0;}}s:7:"contact";i:0;}\',
    \'path\' => NULL,
    \'print_display\' => 1,
    \'print_display_comment\' => 0,
    \'print_display_urllist\' => 1,
    \'field_home_quartzclaim\' => array(
      \'0\' => array(
        \'openlayers_wkt\' => NULL,
      ),
    ),
    \'field_home_reservations\' => array(
      \'0\' => array(
        \'openlayers_wkt\' => NULL,
      ),
    ),
    \'field_home_settlementlands\' => array(
      \'0\' => array(
        \'openlayers_wkt\' => NULL,
      ),
    ),
    \'_workflow\' => \'3\',
    \'last_comment_timestamp\' => NULL,
    \'last_comment_name\' => NULL,
    \'comment_count\' => \'0\',
    \'taxonomy\' => array(),
    \'files\' => array(),
    \'uuid\' => \'d2c5c356-c6ec-11e1-a847-002590335e20\',
    \'revision_uuid\' => \'442816ad-0975-11e2-b260-0025906bdbee\',
    \'menu\' => NULL,
    \'export_display\' => \'$display = new ;
$display->layout = \\\'\\\';
$display->layout_settings = \\\'\\\';
$display->panel_settings = \\\'\\\';
$display->cache = \\\'\\\';
$display->title = \\\'\\\';
$display->content = array();
$display->panels = array();
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = \\\'0\\\';
\',
    \'#_export_node_encode_object\' => \'1\',
  ),
)',
);
  return $node_export;
}
