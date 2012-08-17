<?php

/**
 * Implementation of hook_content_default_fields().
 */
function pika_variables_content_default_fields() {
  $fields = array();

  // Exported field: field_fnsl_firstnation
  $fields['fnsettlementlands-field_fnsl_firstnation'] = array(
    'field_name' => 'field_fnsl_firstnation',
    'type_name' => 'fnsettlementlands',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Kluane',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'Ta\'an Kwachan Council',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'First Nation',
      'weight' => '-3',
      'description' => 'Select the First Nation for the settlement land file.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_fnsl_kml
  $fields['fnsettlementlands-field_fnsl_kml'] = array(
    'field_name' => 'field_fnsl_kml',
    'type_name' => 'fnsettlementlands',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'kml',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Settlment Land KML',
      'weight' => '-2',
      'description' => 'The KML for this First Nation.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_home_quartzclaim
  $fields['home_page_map-field_home_quartzclaim'] = array(
    'field_name' => 'field_home_quartzclaim',
    'type_name' => 'home_page_map',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'openlayers_map_registry_block_map',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'openlayers_wkt',
    'required' => '0',
    'multiple' => '0',
    'module' => 'openlayers_cck',
    'active' => '1',
    'openlayers_cck_feature_types' => array(
      'polygon' => 'polygon',
      'point' => 0,
      'path' => 0,
    ),
    'widget' => array(
      'spatial_widget_save_file' => 0,
      'default_value' => array(
        '0' => array(
          'openlayers_wkt' => '',
        ),
      ),
      'default_value_php' => NULL,
      'openlayers_cck_preset_map' => 'home_page_map',
      'openlayers_behaviors' => array(
        'openlayers_behavior_zoomtolayer' => array(
          'enabled' => 1,
          'options' => array(
            'zoomtolayer' => 'openlayers_cck_vector_layer',
            'point_zoom_level' => '5',
          ),
        ),
      ),
      'label' => 'Quartz Claim',
      'weight' => '-4',
      'description' => 'Upload .zip file only.',
      'type' => 'spatial_widget_combo',
      'module' => 'spatial_widget',
    ),
  );

  // Exported field: field_home_reservations
  $fields['home_page_map-field_home_reservations'] = array(
    'field_name' => 'field_home_reservations',
    'type_name' => 'home_page_map',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'openlayers_map_registry_block_map',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'openlayers_wkt',
    'required' => '0',
    'multiple' => '0',
    'module' => 'openlayers_cck',
    'active' => '1',
    'openlayers_cck_feature_types' => array(
      'polygon' => 'polygon',
      'point' => 0,
      'path' => 0,
    ),
    'widget' => array(
      'openlayers_cck_preset_map' => 'home_page_map',
      'openlayers_behaviors' => array(
        'openlayers_behavior_zoomtolayer' => array(
          'enabled' => 1,
          'options' => array(
            'zoomtolayer' => 'openlayers_cck_vector_layer',
            'point_zoom_level' => '5',
          ),
        ),
      ),
      'spatial_widget_save_file' => 0,
      'default_value' => array(
        '0' => array(
          'openlayers_wkt' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Reservations',
      'weight' => '-3',
      'description' => 'Upload a .zip file only.',
      'type' => 'spatial_widget_combo',
      'module' => 'spatial_widget',
    ),
  );

  // Exported field: field_home_settlementlands
  $fields['home_page_map-field_home_settlementlands'] = array(
    'field_name' => 'field_home_settlementlands',
    'type_name' => 'home_page_map',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'openlayers_map_registry_block_map',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'openlayers_map_registry_block_map',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'openlayers_wkt',
    'required' => '0',
    'multiple' => '1',
    'module' => 'openlayers_cck',
    'active' => '1',
    'openlayers_cck_feature_types' => array(
      'polygon' => 'polygon',
      'point' => 0,
      'path' => 0,
    ),
    'widget' => array(
      'openlayers_cck_preset_map' => 'home_page_map',
      'openlayers_behaviors' => array(
        'openlayers_behavior_zoomtolayer' => array(
          'enabled' => 1,
          'options' => array(
            'zoomtolayer' => 'openlayers_cck_vector_layer',
            'point_zoom_level' => '5',
          ),
        ),
      ),
      'spatial_widget_save_file' => 0,
      'default_value' => array(
        '0' => array(
          'openlayers_wkt' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Settlement Lands',
      'weight' => '-2',
      'description' => 'Upload a .zip file only.',
      'type' => 'spatial_widget_combo',
      'module' => 'spatial_widget',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('First Nation');
  t('Quartz Claim');
  t('Reservations');
  t('Settlement Lands');
  t('Settlment Land KML');

  return $fields;
}
