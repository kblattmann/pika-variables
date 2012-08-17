<?php

/**
 * Implementation of hook_openlayers_presets().
 */
function pika_variables_openlayers_presets() {
  $export = array();

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'autorization_map';
  $openlayers_presets->title = 'Authorization Map';
  $openlayers_presets->description = 'Map showing land use authorization on the registry dashboard';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '475px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-139.01000975989, 61.301902201853',
        'zoom' => '8',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'authorizations_map_openlayers_1' => 'authorizations_map_openlayers_1',
          'openlayers_kml_layer_node_403' => 0,
        ),
      ),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => 'darkblue',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
      ),
      'openlayers_behavior_dragpan' => array(),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_drawfeatures' => array(
        'feature_types' => array(
          'point' => 'point',
          'path' => 0,
          'polygon' => 0,
        ),
        'feature_limit' => '1',
        'element_id' => '',
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_satellite' => 'google_satellite',
      'google_normal' => 'google_normal',
      'google_physical' => 'google_physical',
      'authorizations_map_openlayers_1' => 'authorizations_map_openlayers_1',
      'openlayers_kml_layer_node_403' => 'openlayers_kml_layer_node_403',
    ),
    'layer_styles' => array(
      'parcel_map_openlayers_1' => array(
        'default' => 'default',
        'select' => 'default_select',
        'temporary' => 'invisible',
      ),
    ),
    'layer_activated' => array(
      'authorizations_map_openlayers_1' => 'authorizations_map_openlayers_1',
      'openlayers_kml_layer_node_403' => 'openlayers_kml_layer_node_403',
    ),
    'layer_switcher' => array(
      'authorizations_map_openlayers_1' => 'authorizations_map_openlayers_1',
      'openlayers_kml_layer_node_403' => 'openlayers_kml_layer_node_403',
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['autorization_map'] = $openlayers_presets;

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'front_page_map_postgis';
  $openlayers_presets->title = 'Front page map for the public';
  $openlayers_presets->description = 'This map is used for display on the front page';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '500px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-138.98803710383, 61.375673314235',
        'zoom' => '7',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'openlayers_kml_layer_node_403' => 'openlayers_kml_layer_node_403',
        ),
      ),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => 'darkblue',
      ),
      'openlayers_behavior_mouseposition' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
      ),
      'openlayers_behavior_dragpan' => array(),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'google_satellite',
        'point_zoom_level' => '14',
      ),
      'openlayers_behavior_drawfeatures' => array(
        'feature_types' => array(
          'point' => 'point',
          'path' => 0,
          'polygon' => 0,
        ),
        'feature_limit' => '1',
        'element_id' => '',
      ),
      'openlayers_behavior_wmsgetfeatureinfo' => array(
        'getfeatureinfo_usevisiblelayers' => 1,
        'getfeatureinfo_layers' => 'google_satellite',
        'getfeatureinfo_info_format' => 'application/vnd.ogc.gml',
        'getfeatureinfo_htmlelement' => 'getfeatureinfo',
      ),
    ),
    'default_layer' => 'google_physical',
    'layers' => array(
      'google_satellite' => 'google_satellite',
      'google_hybrid' => 'google_hybrid',
      'google_normal' => 'google_normal',
      'google_physical' => 'google_physical',
      'openlayers_kml_layer_node_403' => 'openlayers_kml_layer_node_403',
      'quartz_claims_Clip' => 'quartz_claims_Clip',
      'kfn_tt_pg' => 'kfn_tt_pg',
    ),
    'layer_styles' => array(
      'parcel_map_openlayers_1' => array(
        'default' => 'default',
        'select' => 'default_select',
        'temporary' => 'invisible',
      ),
    ),
    'layer_activated' => array(
      'openlayers_kml_layer_node_403' => 'openlayers_kml_layer_node_403',
      'quartz_claims_Clip' => 'quartz_claims_Clip',
      'kfn_tt_pg' => 'kfn_tt_pg',
    ),
    'layer_switcher' => array(
      'openlayers_kml_layer_node_403' => 'openlayers_kml_layer_node_403',
      'quartz_claims_Clip' => 'quartz_claims_Clip',
      'kfn_tt_pg' => 'kfn_tt_pg',
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['front_page_map_postgis'] = $openlayers_presets;

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'home_page_map';
  $openlayers_presets->title = 'Settlement Map';
  $openlayers_presets->description = 'Map showing traditional territory and settlement land parcels';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '500px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-138.50463866626, 61.32299739636',
        'zoom' => '7',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'front_page_map_openlayers_1' => 'front_page_map_openlayers_1',
          'openlayers_kml_layer_node_331' => 'openlayers_kml_layer_node_331',
        ),
      ),
      'openlayers_behavior_tooltip' => array(
        'layers' => array(
          'front_page_map_openlayers_1' => 'front_page_map_openlayers_1',
          'openlayers_kml_layer_node_331' => 'openlayers_kml_layer_node_331',
        ),
      ),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => 'darkblue',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
      ),
      'openlayers_behavior_dragpan' => array(),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'google_physical',
        'point_zoom_level' => '12',
      ),
    ),
    'default_layer' => 'google_physical',
    'layers' => array(
      'google_satellite' => 'google_satellite',
      'google_normal' => 'google_normal',
      'google_physical' => 'google_physical',
      'front_page_map_openlayers_1' => 'front_page_map_openlayers_1',
    ),
    'layer_styles' => array(
      'parcel_map_openlayers_1' => array(
        'default' => 'parcel',
        'select' => 'parcel',
        'temporary' => 'parcel',
      ),
    ),
    'layer_activated' => array(
      'front_page_map_openlayers_1' => 'front_page_map_openlayers_1',
    ),
    'layer_switcher' => array(
      'front_page_map_openlayers_1' => 'front_page_map_openlayers_1',
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
    'preset_name' => 'home_page_map',
  );
  $export['home_page_map'] = $openlayers_presets;

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'parcel_map';
  $openlayers_presets->title = 'Parcel Map';
  $openlayers_presets->description = 'Map showing settlement land parcels, zoomed to a single parcel';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '350px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-138.53210448651, 61.185624679907',
        'zoom' => '8',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'openlayers_kml_layer_node_403' => 0,
        ),
      ),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => 'darkblue',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
      ),
      'openlayers_behavior_dragpan' => array(),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'google_satellite',
        'point_zoom_level' => '8',
      ),
      'openlayers_behavior_drawfeatures' => array(
        'feature_types' => array(
          'point' => 'point',
          'path' => 0,
          'polygon' => 0,
        ),
        'feature_limit' => '1',
        'element_id' => '',
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_satellite' => 'google_satellite',
      'google_normal' => 'google_normal',
      'google_physical' => 'google_physical',
      'openlayers_kml_layer_node_403' => 'openlayers_kml_layer_node_403',
    ),
    'layer_styles' => array(
      'parcel_map_openlayers_1' => array(
        'default' => 'default',
        'select' => 'default_select',
        'temporary' => 'invisible',
      ),
    ),
    'layer_activated' => array(
      'openlayers_kml_layer_node_403' => 'openlayers_kml_layer_node_403',
    ),
    'layer_switcher' => array(
      'openlayers_kml_layer_node_403' => 'openlayers_kml_layer_node_403',
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['parcel_map'] = $openlayers_presets;

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'parcel_printing_map';
  $openlayers_presets->title = 'Printing parcel map';
  $openlayers_presets->description = 'Shows an individual parcel for printing.';
  $openlayers_presets->data = array(
    'width' => '600px',
    'height' => '500px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-135.0219726508, 61.137932564588',
        'zoom' => '8',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_dragpan' => array(),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'google_normal',
        'point_zoom_level' => '14',
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
    ),
    'layer_styles' => array(
      'parcel_map_openlayers_1' => array(
        'default' => 'default',
        'select' => 'default_select',
        'temporary' => 'invisible',
      ),
    ),
    'layer_activated' => array(),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['parcel_printing_map'] = $openlayers_presets;

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'print_traditional_territory';
  $openlayers_presets->title = 'Traditional territory and mining claims for Printing';
  $openlayers_presets->description = 'This map is used for display in the primary link Map for printing';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '500px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-138.98803710383, 61.375673314235',
        'zoom' => '6',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_tooltip' => array(
        'layers' => array(
          'openlayers_kml_layer_node_402' => 0,
        ),
      ),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => 'darkblue',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
      ),
      'openlayers_behavior_dragpan' => array(),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'kfn_tt_pg',
        'point_zoom_level' => '14',
      ),
      'openlayers_behavior_drawfeatures' => array(
        'feature_types' => array(
          'point' => 'point',
          'path' => 0,
          'polygon' => 0,
        ),
        'feature_limit' => '1',
        'element_id' => '',
      ),
    ),
    'default_layer' => 'google_physical',
    'layers' => array(
      'google_physical' => 'google_physical',
      'kfn_tt_pg' => 'kfn_tt_pg',
      'quartz_claims_Clip' => 'quartz_claims_Clip',
    ),
    'layer_styles' => array(
      'parcel_map_openlayers_1' => array(
        'default' => 'default',
        'select' => 'default_select',
        'temporary' => 'invisible',
      ),
    ),
    'layer_activated' => array(
      'kfn_tt_pg' => 'kfn_tt_pg',
      'quartz_claims_Clip' => 'quartz_claims_Clip',
    ),
    'layer_switcher' => array(
      'kfn_tt_pg' => 'kfn_tt_pg',
      'quartz_claims_Clip' => 'quartz_claims_Clip',
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['print_traditional_territory'] = $openlayers_presets;

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'registry_block_map';
  $openlayers_presets->title = 'Traditional territory and mining claims';
  $openlayers_presets->description = 'This map is used for display in the primary link Map';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '500px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-138.98803710383, 61.375673314235',
        'zoom' => '6',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'openlayers_kml_layer_node_403' => 'openlayers_kml_layer_node_403',
        ),
      ),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => 'darkblue',
      ),
      'openlayers_behavior_mouseposition' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
      ),
      'openlayers_behavior_dragpan' => array(),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoombox' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'google_satellite',
        'point_zoom_level' => '14',
      ),
      'openlayers_behavior_drawfeatures' => array(
        'feature_types' => array(
          'point' => 'point',
          'path' => 0,
          'polygon' => 0,
        ),
        'feature_limit' => '1',
        'element_id' => '',
      ),
    ),
    'default_layer' => 'google_physical',
    'layers' => array(
      'google_satellite' => 'google_satellite',
      'google_hybrid' => 'google_hybrid',
      'google_normal' => 'google_normal',
      'google_physical' => 'google_physical',
      'alaska_pipeline_right_of_way' => 'alaska_pipeline_right_of_way',
      'kfn_tt_pg' => 'kfn_tt_pg',
      'openlayers_kml_layer_node_403' => 'openlayers_kml_layer_node_403',
      'KFN:Post_SGA_Draft_Option_Albers' => 'KFN:Post_SGA_Draft_Option_Albers',
      'quartz_claims_kfn' => 'quartz_claims_kfn',
    ),
    'layer_styles' => array(
      'parcel_map_openlayers_1' => array(
        'default' => 'default',
        'select' => 'default_select',
        'temporary' => 'invisible',
      ),
    ),
    'layer_activated' => array(
      'alaska_pipeline_right_of_way' => 'alaska_pipeline_right_of_way',
      'kfn_tt_pg' => 'kfn_tt_pg',
      'openlayers_kml_layer_node_403' => 'openlayers_kml_layer_node_403',
      'KFN:Post_SGA_Draft_Option_Albers' => 'KFN:Post_SGA_Draft_Option_Albers',
      'quartz_claims_kfn' => 'quartz_claims_kfn',
    ),
    'layer_switcher' => array(
      'alaska_pipeline_right_of_way' => 'alaska_pipeline_right_of_way',
      'kfn_tt_pg' => 'kfn_tt_pg',
      'openlayers_kml_layer_node_403' => 'openlayers_kml_layer_node_403',
      'KFN:Post_SGA_Draft_Option_Albers' => 'KFN:Post_SGA_Draft_Option_Albers',
      'quartz_claims_kfn' => 'quartz_claims_kfn',
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['registry_block_map'] = $openlayers_presets;

  return $export;
}
