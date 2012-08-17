<?php

/**
 * Implementation of hook_openlayers_layers().
 */
function pika_variables_openlayers_layers() {
  $export = array();

  $openlayers_layers = new stdClass;
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'KFN:Post_SGA_Draft_Option_Albers';
  $openlayers_layers->title = 'Land use designations';
  $openlayers_layers->description = 'Land use designations';
  $openlayers_layers->data = array(
    'base_url' => 'http://3pikas.com/geoserver/KFN/wms?',
    'params' => array(
      'isBaseLayer' => 0,
      'buffer' => '2',
      'ratio' => '1.5',
      'singleTile' => 1,
    ),
    'options' => array(
      'srs' => 'EPSG:900913',
      'TRANSPARENT' => TRUE,
      'exceptions' => 'application/vnd.ogc.se_inimage',
      'format' => 'image/png',
      'layers' => 'KFN:Post_SGA_Draft_Option_Albers',
      'styles' => '',
    ),
    'layer_type' => 'openlayers_layer_type_wms',
  );
  $export['KFN:Post_SGA_Draft_Option_Albers'] = $openlayers_layers;

  $openlayers_layers = new stdClass;
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'alaska_pipeline_right_of_way';
  $openlayers_layers->title = 'Alaska Highway Pipeline ROW';
  $openlayers_layers->description = 'The right of way for the Alaska Highway pipeline.';
  $openlayers_layers->data = array(
    'base_url' => 'http://3pikas.com/geoserver/KFN/wms?',
    'params' => array(
      'isBaseLayer' => 0,
      'buffer' => '2',
      'ratio' => '1.5',
      'singleTile' => 1,
    ),
    'options' => array(
      'srs' => 'EPSG:900913',
      'TRANSPARENT' => TRUE,
      'exceptions' => 'application/vnd.ogc.se_inimage',
      'format' => 'image/png',
      'layers' => 'alaska_pipeline_right_of_way',
      'styles' => '',
    ),
    'layer_type' => 'openlayers_layer_type_wms',
  );
  $export['alaska_pipeline_right_of_way'] = $openlayers_layers;

  $openlayers_layers = new stdClass;
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'kfn_tt_pg';
  $openlayers_layers->title = 'KFN Traditional Territory';
  $openlayers_layers->description = 'KFN traditional territory (PostGIS)';
  $openlayers_layers->data = array(
    'base_url' => 'http://3pikas.com/geoserver/KFN/wms?',
    'params' => array(
      'isBaseLayer' => 0,
      'buffer' => '2',
      'ratio' => '1.5',
      'singleTile' => 1,
    ),
    'options' => array(
      'srs' => 'EPSG:900913',
      'TRANSPARENT' => TRUE,
      'exceptions' => 'application/vnd.ogc.se_inimage',
      'format' => 'image/jpeg',
      'layers' => 'KFN:KFN_TT_pg',
      'styles' => '',
    ),
    'layer_type' => 'openlayers_layer_type_wms',
  );
  $export['kfn_tt_pg'] = $openlayers_layers;

  $openlayers_layers = new stdClass;
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'openlayers_kml_layer_node_402';
  $openlayers_layers->title = 'Land use designation';
  $openlayers_layers->description = '';
  $openlayers_layers->data = array(
    'layer_type' => 'openlayers_layer_type_kml',
    'layer_handler' => 'kml',
    'projection' => array(
      0 => '4326',
    ),
    'baselayer' => FALSE,
    'vector' => TRUE,
    'formatOptions' => array(
      'extractStyles' => TRUE,
      'extractAttributes' => TRUE,
    ),
    'url' => '/',
  );
  $export['openlayers_kml_layer_node_402'] = $openlayers_layers;

  $openlayers_layers = new stdClass;
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'openlayers_kml_layer_node_403';
  $openlayers_layers->title = 'Kluane First Nation Settlement Lands';
  $openlayers_layers->description = '';
  $openlayers_layers->data = array(
    'url' => '/sites/4pc.v4730969223.v180p.nyc.host8.biz/files/useruploaded/fnsettlementlands/403/KFN_SL_incl_unsurveyed_Project_WGS_With_URL.kml',
    'formatOptions' => array(
      'extractStyles' => 1,
      'extractAttributes' => 1,
    ),
    'layer_type' => 'openlayers_layer_type_kml',
    'layer_handler' => 'kml',
    'projection' => array(
      0 => '4326',
    ),
    'baselayer' => FALSE,
    'vector' => TRUE,
  );
  $export['openlayers_kml_layer_node_403'] = $openlayers_layers;

  $openlayers_layers = new stdClass;
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'quartz_claims';
  $openlayers_layers->title = 'Full claims';
  $openlayers_layers->description = 'full claims';
  $openlayers_layers->data = array(
    'base_url' => 'http://3pikas.com/geoserver/KFN/wms?',
    'params' => array(
      'isBaseLayer' => 0,
      'buffer' => '2',
      'ratio' => '1.5',
      'singleTile' => 1,
    ),
    'options' => array(
      'srs' => 'EPSG:900913',
      'TRANSPARENT' => TRUE,
      'exceptions' => 'application/vnd.ogc.se_inimage',
      'format' => 'image/png',
      'layers' => 'quartz_claims',
      'styles' => '',
    ),
    'layer_type' => 'openlayers_layer_type_wms',
  );
  $export['quartz_claims'] = $openlayers_layers;

  $openlayers_layers = new stdClass;
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'quartz_claims_kfn';
  $openlayers_layers->title = 'KFN quartz claims';
  $openlayers_layers->description = 'Quartz claims for the KFN traditional territory.';
  $openlayers_layers->data = array(
    'base_url' => 'http://3pikas.com/geoserver/KFN/wms?',
    'params' => array(
      'isBaseLayer' => 0,
      'buffer' => '2',
      'ratio' => '1.5',
      'singleTile' => 0,
    ),
    'options' => array(
      'srs' => 'EPSG:900913',
      'TRANSPARENT' => TRUE,
      'exceptions' => 'application/vnd.ogc.se_inimage',
      'format' => 'image/jpeg',
      'layers' => 'KFN:quartz_claims_Clip',
      'styles' => '',
    ),
    'layer_type' => 'openlayers_layer_type_wms',
  );
  $export['quartz_claims_kfn'] = $openlayers_layers;

  return $export;
}
