<?php

/**
 * Implementation of hook_openlayers_styles().
 */
function pika_variables_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'default_map';
  $openlayers_styles->title = 'Default style map';
  $openlayers_styles->description = 'Basic default style.';
  $openlayers_styles->data = array(
    'pointRadius' => 5,
    'fillColor' => '#CC6666',
    'strokeColor' => '#4C1919',
    'strokeWidth' => 4,
    'fillOpacity' => 0.5,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['default_map'] = $openlayers_styles;

  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'parcel';
  $openlayers_styles->title = 'Default style for parcels';
  $openlayers_styles->description = 'Basic default style.';
  $openlayers_styles->data = array(
    'pointRadius' => 3,
    'fillColor' => '#FFCC66',
    'strokeColor' => '#FFCC66',
    'strokeWidth' => 20,
    'fillOpacity' => 0.999,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'label' => '${name}',
    'labelAlign' => 'cm',
  );
  $export['parcel'] = $openlayers_styles;

  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'parcel_style';
  $openlayers_styles->title = 'Parcel Style';
  $openlayers_styles->description = 'Basic parcel style.';
  $openlayers_styles->data = array(
    'pointRadius' => 5,
    'fillColor' => '7A3E48',
    'strokeColor' => 'blue',
    'strokeWidth' => 4,
    'fillOpacity' => 0.5,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['parcel_style'] = $openlayers_styles;

  return $export;
}
