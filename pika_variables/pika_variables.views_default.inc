<?php

/**
 * Implementation of hook_views_default_views().
 */
function pika_variables_views_default_views() {
  $views = array();

  // Exported view: authorization_summary_list
  $view = new view;
  $view->name = 'authorization_summary_list';
  $view->description = 'A list of all authorizations.';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
    3 => 3,
    4 => 4,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'field_client_entity_value';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_client_entity_value' => 'field_client_entity_value',
    'field_lua_authorizationtype_value' => 'field_lua_authorizationtype_value',
    'field_lua_startdate_value' => 'field_lua_startdate_value',
    'field_lua_enddate_value' => 'field_lua_enddate_value',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
    ),
    'field_client_entity_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
    ),
    'field_lua_authorizationtype_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
    ),
    'field_lua_startdate_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
    ),
    'field_lua_enddate_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Client Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Client Type (field_client_entity) */
  $handler->display->display_options['fields']['field_client_entity_value']['id'] = 'field_client_entity_value';
  $handler->display->display_options['fields']['field_client_entity_value']['table'] = 'node_data_field_client_entity';
  $handler->display->display_options['fields']['field_client_entity_value']['field'] = 'field_client_entity_value';
  $handler->display->display_options['fields']['field_client_entity_value']['label'] = 'Client Type';
  $handler->display->display_options['fields']['field_client_entity_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['label_type'] = 'custom';
  /* Field: Content: Authorization Type (field_lua_authorizationtype) */
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['id'] = 'field_lua_authorizationtype_value';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['table'] = 'node_data_field_lua_authorizationtype';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['field'] = 'field_lua_authorizationtype_value';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['label'] = 'Authorization Type';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['label_type'] = 'custom';
  /* Field: Content: Start Date (field_lua_startdate) */
  $handler->display->display_options['fields']['field_lua_startdate_value']['id'] = 'field_lua_startdate_value';
  $handler->display->display_options['fields']['field_lua_startdate_value']['table'] = 'node_data_field_lua_startdate';
  $handler->display->display_options['fields']['field_lua_startdate_value']['field'] = 'field_lua_startdate_value';
  $handler->display->display_options['fields']['field_lua_startdate_value']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_lua_startdate_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lua_startdate_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['label_type'] = 'custom';
  $handler->display->display_options['fields']['field_lua_startdate_value']['format'] = 'short';
  /* Field: Content: End date (field_lua_enddate) */
  $handler->display->display_options['fields']['field_lua_enddate_value']['id'] = 'field_lua_enddate_value';
  $handler->display->display_options['fields']['field_lua_enddate_value']['table'] = 'node_data_field_lua_enddate';
  $handler->display->display_options['fields']['field_lua_enddate_value']['field'] = 'field_lua_enddate_value';
  $handler->display->display_options['fields']['field_lua_enddate_value']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_lua_enddate_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lua_enddate_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['label_type'] = 'custom';
  $handler->display->display_options['fields']['field_lua_enddate_value']['format'] = 'short';
  /* Sort criterion: Node: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  /* Sort criterion: Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'landuseauthorization' => 'landuseauthorization',
    'tkc_client_list' => 'tkc_client_list',
  );

  /* Display: PDF Page */
  $handler = $view->new_display('pdf', 'PDF Page', 'pdf_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'This is the title of the pdf';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'pdf_table';
  $handler->display->display_options['style_options']['grouping'] = 'field_lua_authorizationtype_value';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 0,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 0,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '85',
      ),
    ),
    'field_lua_authorizationtype_value' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => 'C',
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => 'C',
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '45',
      ),
    ),
    'field_lua_startdate_value' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => 'C',
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '',
      ),
    ),
    'field_lua_enddate_value' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => 'C',
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['position'] = array(
    'last_writing_position' => 1,
    'x' => '20',
    'y' => '65',
    'width' => '',
    'row_height' => '10',
  );
  $handler->display->display_options['path'] = 'authorizationpdf';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Print Authorizations';
  $handler->display->display_options['menu']['description'] = 'A list of all authorizations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-print-items';
  $handler->display->display_options['default_page_format'] = 'LETTER';
  $handler->display->display_options['default_page_orientation'] = 'L';
  $handler->display->display_options['margin_top'] = '50';
  $handler->display->display_options['leading_template'] = '0';
  $handler->display->display_options['template'] = '0';
  $handler->display->display_options['succeed_template'] = '0';
  $translatables['authorization_summary_list'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Client Name'),
    t('Client Type'),
    t('Authorization Type'),
    t('Start Date'),
    t('End Date'),
    t('PDF Page'),
    t('This is the title of the pdf'),
  );

  $views[$view->name] = $view;

  // Exported view: authorizations_map
  $view = new view;
  $view->name = 'authorizations_map';
  $view->description = 'This is a view for active authorizations.';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Athorizations Map';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Authorizations';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Filter: Content: Authorization Status (field_lua_authroizationstatus) */
  $handler->display->display_options['filters']['field_lua_authroizationstatus_value']['id'] = 'field_lua_authroizationstatus_value';
  $handler->display->display_options['filters']['field_lua_authroizationstatus_value']['table'] = 'node_data_field_lua_authroizationstatus';
  $handler->display->display_options['filters']['field_lua_authroizationstatus_value']['field'] = 'field_lua_authroizationstatus_value';
  $handler->display->display_options['filters']['field_lua_authroizationstatus_value']['value'] = 'Active';
  $handler->display->display_options['filters']['field_lua_authroizationstatus_value']['case'] = 1;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'landuseauthorization' => 'landuseauthorization',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Land Use Authorizations';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['preset'] = 'autorization_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'authorizations';

  /* Display: OpenLayers Data */
  $handler = $view->new_display('openlayers', 'OpenLayers Data', 'openlayers_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'openlayers_wkt',
    'other_lat' => 'field_lua_extents_openlayers_wkt_1',
    'other_lon' => 'field_lua_extents_openlayers_wkt_1',
    'openlayers_wkt' => 'field_lua_extents_openlayers_wkt_1',
    'other_top' => 'field_lua_extents_openlayers_wkt_1',
    'other_right' => 'field_lua_extents_openlayers_wkt_1',
    'other_bottom' => 'field_lua_extents_openlayers_wkt_1',
    'other_left' => 'field_lua_extents_openlayers_wkt_1',
    'name_field' => 'type_1',
    'keep_orig_name_field' => 1,
    'description_field' => 'title',
    'keep_orig_desc_field' => 1,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Extents (field_lua_extents) */
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['id'] = 'field_lua_extents_openlayers_wkt_1';
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['table'] = 'node_data_field_lua_extents';
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['field'] = 'field_lua_extents_openlayers_wkt';
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['label'] = 'Extents';
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_lua_extents_openlayers_wkt_1']['format'] = 'openlayers_wkt';
  /* Field: Node: Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'node';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type_1']['link_to_node'] = 1;
  $handler->display->display_options['fields']['type_1']['machine_name'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Content: Authorization Status (field_lua_authroizationstatus) */
  $handler->display->display_options['filters']['field_lua_authroizationstatus_value']['id'] = 'field_lua_authroizationstatus_value';
  $handler->display->display_options['filters']['field_lua_authroizationstatus_value']['table'] = 'node_data_field_lua_authroizationstatus';
  $handler->display->display_options['filters']['field_lua_authroizationstatus_value']['field'] = 'field_lua_authroizationstatus_value';
  $handler->display->display_options['filters']['field_lua_authroizationstatus_value']['value'] = 'Active';
  $handler->display->display_options['filters']['field_lua_authroizationstatus_value']['case'] = 1;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'landuseauthorization' => 'landuseauthorization',
  );
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $translatables['authorizations_map'] = array(
    t('Defaults'),
    t('Authorizations'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('Page'),
    t('Land Use Authorizations'),
    t('OpenLayers Data'),
    t('Extents'),
    t('Type'),
  );

  $views[$view->name] = $view;

  // Exported view: client_authorization_criteria
  $view = new view;
  $view->name = 'client_authorization_criteria';
  $view->description = 'A View with filtering criteria to limit the selection to eligible clients.';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'A list of clients eligible to hold land use authorizations.';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Date of Birth (field_client_dob) */
  $handler->display->display_options['filters']['field_client_dob_value']['id'] = 'field_client_dob_value';
  $handler->display->display_options['filters']['field_client_dob_value']['table'] = 'node_data_field_client_dob';
  $handler->display->display_options['filters']['field_client_dob_value']['field'] = 'field_client_dob_value';
  $handler->display->display_options['filters']['field_client_dob_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_client_dob_value']['value']['min'] = array(
    'date' => '',
  );
  $handler->display->display_options['filters']['field_client_dob_value']['value']['max'] = array(
    'date' => '',
  );
  $handler->display->display_options['filters']['field_client_dob_value']['value']['value'] = array(
    'date' => '',
  );
  $handler->display->display_options['filters']['field_client_dob_value']['allow_null'] = 1;
  $handler->display->display_options['filters']['field_client_dob_value']['date_fields'] = array(
    'node_data_field_client_dob.field_client_dob_value' => 'node_data_field_client_dob.field_client_dob_value',
  );
  $handler->display->display_options['filters']['field_client_dob_value']['date_method'] = 'OR';
  $handler->display->display_options['filters']['field_client_dob_value']['granularity'] = 'day';
  $handler->display->display_options['filters']['field_client_dob_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_client_dob_value']['default_date'] = 'now -120 year';
  $handler->display->display_options['filters']['field_client_dob_value']['default_to_date'] = 'now -19 year';
  $handler->display->display_options['filters']['field_client_dob_value']['year_range'] = '-110:-59';
  $translatables['client_authorization_criteria'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
  );

  $views[$view->name] = $view;

  // Exported view: client_details
  $view = new view;
  $view->name = 'client_details';
  $view->description = 'Details regarding an individual client.';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_lua_client4_nid']['id'] = 'field_lua_client4_nid';
  $handler->display->display_options['relationships']['field_lua_client4_nid']['table'] = 'node_data_field_lua_client4';
  $handler->display->display_options['relationships']['field_lua_client4_nid']['field'] = 'field_lua_client4_nid';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Authorization Status (field_lua_authroizationstatus) */
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['id'] = 'field_lua_authroizationstatus_value';
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['table'] = 'node_data_field_lua_authroizationstatus';
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['field'] = 'field_lua_authroizationstatus_value';
  /* Field: Content: Authorization Type (field_lua_authorizationtype) */
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['id'] = 'field_lua_authorizationtype_value';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['table'] = 'node_data_field_lua_authorizationtype';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['field'] = 'field_lua_authorizationtype_value';
  /* Field: Content: End date (field_lua_enddate) */
  $handler->display->display_options['fields']['field_lua_enddate_value']['id'] = 'field_lua_enddate_value';
  $handler->display->display_options['fields']['field_lua_enddate_value']['table'] = 'node_data_field_lua_enddate';
  $handler->display->display_options['fields']['field_lua_enddate_value']['field'] = 'field_lua_enddate_value';
  /* Field: Content: Start Date (field_lua_startdate) */
  $handler->display->display_options['fields']['field_lua_startdate_value']['id'] = 'field_lua_startdate_value';
  $handler->display->display_options['fields']['field_lua_startdate_value']['table'] = 'node_data_field_lua_startdate';
  $handler->display->display_options['fields']['field_lua_startdate_value']['field'] = 'field_lua_startdate_value';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_lua_subparcel_nid']['id'] = 'field_lua_subparcel_nid';
  $handler->display->display_options['fields']['field_lua_subparcel_nid']['table'] = 'node_data_field_lua_subparcel';
  $handler->display->display_options['fields']['field_lua_subparcel_nid']['field'] = 'field_lua_subparcel_nid';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'landuseauthorization' => 'landuseauthorization',
  );

  /* Display: Clients and Authorizations */
  $handler = $view->new_display('page', 'Clients and Authorizations', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'clientluas';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Authorization Status (field_lua_authroizationstatus) */
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['id'] = 'field_lua_authroizationstatus_value';
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['table'] = 'node_data_field_lua_authroizationstatus';
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['field'] = 'field_lua_authroizationstatus_value';
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['label'] = 'Authorization Status';
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['link_to_node'] = 0;
  /* Field: Content: Authorization Type (field_lua_authorizationtype) */
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['id'] = 'field_lua_authorizationtype_value';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['table'] = 'node_data_field_lua_authorizationtype';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['field'] = 'field_lua_authorizationtype_value';
  /* Field: Content: End date (field_lua_enddate) */
  $handler->display->display_options['fields']['field_lua_enddate_value']['id'] = 'field_lua_enddate_value';
  $handler->display->display_options['fields']['field_lua_enddate_value']['table'] = 'node_data_field_lua_enddate';
  $handler->display->display_options['fields']['field_lua_enddate_value']['field'] = 'field_lua_enddate_value';
  /* Field: Content: Start Date (field_lua_startdate) */
  $handler->display->display_options['fields']['field_lua_startdate_value']['id'] = 'field_lua_startdate_value';
  $handler->display->display_options['fields']['field_lua_startdate_value']['table'] = 'node_data_field_lua_startdate';
  $handler->display->display_options['fields']['field_lua_startdate_value']['field'] = 'field_lua_startdate_value';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_lua_subparcel_nid']['id'] = 'field_lua_subparcel_nid';
  $handler->display->display_options['fields']['field_lua_subparcel_nid']['table'] = 'node_data_field_lua_subparcel';
  $handler->display->display_options['fields']['field_lua_subparcel_nid']['field'] = 'field_lua_subparcel_nid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'landuseauthorization' => 'landuseauthorization',
  );
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_lua_client4_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $translatables['client_details'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('field_lua_client4_nid'),
    t('Title'),
    t('Broken handler node_data_field_lua_subparcel.field_lua_subparcel_nid'),
    t('Clients and Authorizations'),
    t('Block'),
    t('Authorization Status'),
  );

  $views[$view->name] = $view;

  // Exported view: client_group_lists
  $view = new view;
  $view->name = 'client_group_lists';
  $view->description = 'For listing clients by location and citizen age, with Views Attachments used to show multiple views on each page.';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Grouped client lists';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
    3 => 3,
    4 => 4,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_client_entity_value' => 'field_client_entity_value',
    'field_client_fn_value' => 'field_client_fn_value',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_client_entity_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_client_fn_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Client Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['fields']['field_client_fn_value_1']['id'] = 'field_client_fn_value_1';
  $handler->display->display_options['fields']['field_client_fn_value_1']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['fields']['field_client_fn_value_1']['field'] = 'field_client_fn_value';
  $handler->display->display_options['fields']['field_client_fn_value_1']['label'] = 'First Nation Affiliation';
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['label_type'] = 'custom';
  /* Field: Content: Age (field_client_age) */
  $handler->display->display_options['fields']['field_client_age_value']['id'] = 'field_client_age_value';
  $handler->display->display_options['fields']['field_client_age_value']['table'] = 'node_data_field_client_age';
  $handler->display->display_options['fields']['field_client_age_value']['field'] = 'field_client_age_value';
  /* Sort criterion: Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Age (field_client_age) */
  $handler->display->display_options['filters']['field_client_age_value']['id'] = 'field_client_age_value';
  $handler->display->display_options['filters']['field_client_age_value']['table'] = 'node_data_field_client_age';
  $handler->display->display_options['filters']['field_client_age_value']['field'] = 'field_client_age_value';

  /* Display: Citizens Page */
  $handler = $view->new_display('page', 'Citizens Page', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Citizens Grouped by Age';
  $handler->display->display_options['display_description'] = 'Showing adult citizens.';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h3>Adults</h3>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Client Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['fields']['field_client_fn_value_1']['id'] = 'field_client_fn_value_1';
  $handler->display->display_options['fields']['field_client_fn_value_1']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['fields']['field_client_fn_value_1']['field'] = 'field_client_fn_value';
  $handler->display->display_options['fields']['field_client_fn_value_1']['label'] = 'First Nation Affiliation';
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['label_type'] = 'custom';
  /* Field: Content: Age (field_client_age) */
  $handler->display->display_options['fields']['field_client_age_value']['id'] = 'field_client_age_value';
  $handler->display->display_options['fields']['field_client_age_value']['table'] = 'node_data_field_client_age';
  $handler->display->display_options['fields']['field_client_age_value']['field'] = 'field_client_age_value';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['filters']['field_client_fn_value']['id'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['filters']['field_client_fn_value']['field'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['value'] = 'Kluane First Nation';
  $handler->display->display_options['filters']['field_client_fn_value']['case'] = 1;
  /* Filter: Content: Age (field_client_age) */
  $handler->display->display_options['filters']['field_client_age_value']['id'] = 'field_client_age_value';
  $handler->display->display_options['filters']['field_client_age_value']['table'] = 'node_data_field_client_age';
  $handler->display->display_options['filters']['field_client_age_value']['field'] = 'field_client_age_value';
  $handler->display->display_options['filters']['field_client_age_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_client_age_value']['value']['min'] = '19';
  $handler->display->display_options['filters']['field_client_age_value']['value']['max'] = '59';
  $handler->display->display_options['filters']['field_client_age_value']['allow_null'] = 1;
  $handler->display->display_options['path'] = 'citizens';

  /* Display: Elders Attachment */
  $handler = $view->new_display('attachment', 'Elders Attachment', 'attachment_3');
  $handler->display->display_options['display_description'] = 'Attachment of Elders';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h3>Elders</h3>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Age (field_client_age) */
  $handler->display->display_options['filters']['field_client_age_value']['id'] = 'field_client_age_value';
  $handler->display->display_options['filters']['field_client_age_value']['table'] = 'node_data_field_client_age';
  $handler->display->display_options['filters']['field_client_age_value']['field'] = 'field_client_age_value';
  $handler->display->display_options['filters']['field_client_age_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_client_age_value']['value']['value'] = '60';
  $handler->display->display_options['filters']['field_client_age_value']['allow_null'] = 0;
  /* Filter: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['filters']['field_client_fn_value']['id'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['filters']['field_client_fn_value']['field'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['value'] = 'Kluane First Nation';
  $handler->display->display_options['filters']['field_client_fn_value']['case'] = 1;
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['displays'] = array(
    'page_5' => 'page_5',
    'default' => 0,
    'page_6' => 0,
  );

  /* Display: Youth and Children Attachment */
  $handler = $view->new_display('attachment', 'Youth and Children Attachment', 'attachment_4');
  $handler->display->display_options['display_description'] = 'Attachment of Youth and Children';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h3>Youth</h3>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Age (field_client_age) */
  $handler->display->display_options['filters']['field_client_age_value']['id'] = 'field_client_age_value';
  $handler->display->display_options['filters']['field_client_age_value']['table'] = 'node_data_field_client_age';
  $handler->display->display_options['filters']['field_client_age_value']['field'] = 'field_client_age_value';
  $handler->display->display_options['filters']['field_client_age_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_client_age_value']['value']['value'] = '18';
  $handler->display->display_options['filters']['field_client_age_value']['allow_null'] = 0;
  /* Filter: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['filters']['field_client_fn_value']['id'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['filters']['field_client_fn_value']['field'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['value'] = 'Kluane First Nation';
  $handler->display->display_options['filters']['field_client_fn_value']['case'] = 1;
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['displays'] = array(
    'page_5' => 'page_5',
    'default' => 0,
    'page_6' => 0,
  );

  /* Display: All Locations */
  $handler = $view->new_display('page', 'All Locations', 'page_1');
  $handler->display->display_options['display_description'] = 'A clients by location.';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h3>In Burwash Landing</h3>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: City (field_client_city) */
  $handler->display->display_options['filters']['field_client_city_value']['id'] = 'field_client_city_value';
  $handler->display->display_options['filters']['field_client_city_value']['table'] = 'node_data_field_client_city';
  $handler->display->display_options['filters']['field_client_city_value']['field'] = 'field_client_city_value';
  $handler->display->display_options['filters']['field_client_city_value']['value'] = 'Burwash Landing';
  $handler->display->display_options['filters']['field_client_city_value']['case'] = 1;
  $handler->display->display_options['path'] = 'all_locations';

  /* Display: Non-BL Attachment */
  $handler = $view->new_display('attachment', 'Non-BL Attachment', 'attachment_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Yukon non-Burwash';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h3>Outside of Burwash Landing, but in Canada</h3>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Country (field_client_country) */
  $handler->display->display_options['filters']['field_client_country_value']['id'] = 'field_client_country_value';
  $handler->display->display_options['filters']['field_client_country_value']['table'] = 'node_data_field_client_country';
  $handler->display->display_options['filters']['field_client_country_value']['field'] = 'field_client_country_value';
  $handler->display->display_options['filters']['field_client_country_value']['value'] = 'canada';
  $handler->display->display_options['filters']['field_client_country_value']['case'] = 0;
  /* Filter: Content: City (field_client_city) */
  $handler->display->display_options['filters']['field_client_city_value']['id'] = 'field_client_city_value';
  $handler->display->display_options['filters']['field_client_city_value']['table'] = 'node_data_field_client_city';
  $handler->display->display_options['filters']['field_client_city_value']['field'] = 'field_client_city_value';
  $handler->display->display_options['filters']['field_client_city_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_client_city_value']['value'] = 'burwash landing';
  $handler->display->display_options['filters']['field_client_city_value']['case'] = 0;
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page_5' => 0,
  );

  /* Display: Outside of Canada Attachment */
  $handler = $view->new_display('attachment', 'Outside of Canada Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Outside of Canada';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h3>Outside of Canada</h3>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Country (field_client_country) */
  $handler->display->display_options['filters']['field_client_country_value']['id'] = 'field_client_country_value';
  $handler->display->display_options['filters']['field_client_country_value']['table'] = 'node_data_field_client_country';
  $handler->display->display_options['filters']['field_client_country_value']['field'] = 'field_client_country_value';
  $handler->display->display_options['filters']['field_client_country_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_client_country_value']['value'] = 'canada';
  $handler->display->display_options['filters']['field_client_country_value']['case'] = 0;
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page_5' => 0,
  );
  $translatables['client_group_lists'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Text area'),
    t('Client Name'),
    t('First Nation Affiliation'),
    t('Citizens Page'),
    t('Citizens Grouped by Age'),
    t('Showing adult citizens.'),
    t('<h3>Adults</h3>'),
    t('Elders Attachment'),
    t('Attachment of Elders'),
    t('<h3>Elders</h3>'),
    t('Youth and Children Attachment'),
    t('Attachment of Youth and Children'),
    t('<h3>Youth</h3>'),
    t('All Locations'),
    t('A clients by location.'),
    t('<h3>In Burwash Landing</h3>'),
    t('Non-BL Attachment'),
    t('Yukon non-Burwash'),
    t('<h3>Outside of Burwash Landing, but in Canada</h3>'),
    t('Outside of Canada Attachment'),
    t('Outside of Canada'),
    t('<h3>Outside of Canada</h3>'),
  );

  $views[$view->name] = $view;

  // Exported view: client_lua
  $view = new view;
  $view->name = 'client_lua';
  $view->description = 'Some details of a client and their LUAs.';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* Field: Content: Authorization Type (field_lua_authorizationtype) */
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['id'] = 'field_lua_authorizationtype_value';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['table'] = 'node_data_field_lua_authorizationtype';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['field'] = 'field_lua_authorizationtype_value';
  /* Field: Content: Authorization Status (field_lua_authroizationstatus) */
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['id'] = 'field_lua_authroizationstatus_value';
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['table'] = 'node_data_field_lua_authroizationstatus';
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['field'] = 'field_lua_authroizationstatus_value';
  /* Field: Content: Authorization Type (field_lua_authorizationtype) */
  $handler->display->display_options['fields']['field_lua_authorizationtype_value_1']['id'] = 'field_lua_authorizationtype_value_1';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value_1']['table'] = 'node_data_field_lua_authorizationtype';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value_1']['field'] = 'field_lua_authorizationtype_value';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_client_postal_code_value']['id'] = 'field_client_postal_code_value';
  $handler->display->display_options['fields']['field_client_postal_code_value']['table'] = 'node_data_field_client_postal_code';
  $handler->display->display_options['fields']['field_client_postal_code_value']['field'] = 'field_client_postal_code_value';
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'node_data_field_lua_client4';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Argument: Node: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'landuseauthorization' => 'landuseauthorization',
    'land_use_client' => 'land_use_client',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Node: Type';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['relationship'] = 'vid';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* Field: Content: Authorization Type (field_lua_authorizationtype) */
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['id'] = 'field_lua_authorizationtype_value';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['table'] = 'node_data_field_lua_authorizationtype';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['field'] = 'field_lua_authorizationtype_value';
  /* Field: Content: Authorization Status (field_lua_authroizationstatus) */
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['id'] = 'field_lua_authroizationstatus_value';
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['table'] = 'node_data_field_lua_authroizationstatus';
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['field'] = 'field_lua_authroizationstatus_value';
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['relationship'] = 'vid';
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['label'] = 'Authorization Status';
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lua_authroizationstatus_value']['link_to_node'] = 0;
  /* Field: Content: Authorization Type (field_lua_authorizationtype) */
  $handler->display->display_options['fields']['field_lua_authorizationtype_value_1']['id'] = 'field_lua_authorizationtype_value_1';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value_1']['table'] = 'node_data_field_lua_authorizationtype';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value_1']['field'] = 'field_lua_authorizationtype_value';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_client_postal_code_value']['id'] = 'field_client_postal_code_value';
  $handler->display->display_options['fields']['field_client_postal_code_value']['table'] = 'node_data_field_client_postal_code';
  $handler->display->display_options['fields']['field_client_postal_code_value']['field'] = 'field_client_postal_code_value';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'vid';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'landuseauthorization' => 'landuseauthorization',
    'tkc_client_list' => 'tkc_client_list',
  );
  $handler->display->display_options['path'] = 'clientlua';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['vid']['id'] = 'vid';
  $handler->display->display_options['relationships']['vid']['table'] = 'node_data_field_lua_client4';
  $handler->display->display_options['relationships']['vid']['field'] = 'vid';
  $handler->display->display_options['relationships']['vid']['label'] = 'Client Name reverse reference';
  $handler->display->display_options['relationships']['vid']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_lua_client4_nid';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Field: Content: Authorization Type (field_lua_authorizationtype) */
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['id'] = 'field_lua_authorizationtype_value';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['table'] = 'node_data_field_lua_authorizationtype';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['field'] = 'field_lua_authorizationtype_value';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['relationship'] = 'vid';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['label'] = 'Authorization Type';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'vid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'landuseauthorization' => 'landuseauthorization',
    'land_use_client' => 'land_use_client',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Node: Type';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'vid';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'landuseauthorization' => 'landuseauthorization',
    'land_use_client' => 'land_use_client',
  );
  $translatables['client_lua'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Title'),
    t('Broken handler node_data_field_client_postal_code.field_client_postal_code_value'),
    t('All'),
    t('Node: Type'),
    t('Page'),
    t('Authorization Status'),
    t('Block'),
    t('Client Name reverse reference'),
    t('Authorization Type'),
  );

  $views[$view->name] = $view;

  // Exported view: client_luas
  $view = new view;
  $view->name = 'client_luas';
  $view->description = 'Showing a block for the LUAs of each client.';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_lua_client4_nid']['id'] = 'field_lua_client4_nid';
  $handler->display->display_options['relationships']['field_lua_client4_nid']['table'] = 'node_data_field_lua_client4';
  $handler->display->display_options['relationships']['field_lua_client4_nid']['field'] = 'field_lua_client4_nid';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';

  /* Display: Clients and Authorizations */
  $handler = $view->new_display('block', 'Clients and Authorizations', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'landuseauthorization' => 'landuseauthorization',
  );
  $translatables['client_luas'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('field_lua_client4_nid'),
    t('Title'),
    t('Clients and Authorizations'),
  );

  $views[$view->name] = $view;

  // Exported view: client_luas_has
  $view = new view;
  $view->name = 'client_luas_has';
  $view->description = 'Showing clients who have LUAs.';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Clients who already have LUAs.';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Client (field_lua_client) */
  $handler->display->display_options['fields']['field_lua_client_nid']['id'] = 'field_lua_client_nid';
  $handler->display->display_options['fields']['field_lua_client_nid']['table'] = 'node_data_field_lua_client';
  $handler->display->display_options['fields']['field_lua_client_nid']['field'] = 'field_lua_client_nid';
  $handler->display->display_options['fields']['field_lua_client_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lua_client_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lua_client_nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lua_client_nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lua_client_nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lua_client_nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lua_client_nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lua_client_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lua_client_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lua_client_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lua_client_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lua_client_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lua_client_nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_lua_client_nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lua_client_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lua_client_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lua_client_nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_lua_client_nid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_lua_client_nid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_lua_client_nid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_lua_client_nid']['multiple']['multiple_reversed'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'landuseauthorization' => 'landuseauthorization',
  );
  /* Filter: Content: Client (field_lua_client) */
  $handler->display->display_options['filters']['field_lua_client_nid']['id'] = 'field_lua_client_nid';
  $handler->display->display_options['filters']['field_lua_client_nid']['table'] = 'node_data_field_lua_client';
  $handler->display->display_options['filters']['field_lua_client_nid']['field'] = 'field_lua_client_nid';
  $handler->display->display_options['filters']['field_lua_client_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_lua_client_nid']['reduce_duplicates'] = 1;
  $translatables['client_luas_has'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
  );

  $views[$view->name] = $view;

  // Exported view: client_summary
  $view = new view;
  $view->name = 'client_summary';
  $view->description = 'A list of all clients.';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => 7,
    2 => 2,
    6 => 6,
    5 => 5,
    17 => 17,
    4 => 4,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_client_entity_value' => 'field_client_entity_value',
    'field_client_fn_value' => 'field_client_fn_value',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_client_entity_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_client_fn_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Client Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Age (field_client_age) */
  $handler->display->display_options['fields']['field_client_age_value']['id'] = 'field_client_age_value';
  $handler->display->display_options['fields']['field_client_age_value']['table'] = 'node_data_field_client_age';
  $handler->display->display_options['fields']['field_client_age_value']['field'] = 'field_client_age_value';
  /* Field: Content: Address (field_client_address) */
  $handler->display->display_options['fields']['field_client_address_value']['id'] = 'field_client_address_value';
  $handler->display->display_options['fields']['field_client_address_value']['table'] = 'node_data_field_client_address';
  $handler->display->display_options['fields']['field_client_address_value']['field'] = 'field_client_address_value';
  /* Field: Content: City (field_client_city) */
  $handler->display->display_options['fields']['field_client_city_value']['id'] = 'field_client_city_value';
  $handler->display->display_options['fields']['field_client_city_value']['table'] = 'node_data_field_client_city';
  $handler->display->display_options['fields']['field_client_city_value']['field'] = 'field_client_city_value';
  /* Field: Content: Country (field_client_country) */
  $handler->display->display_options['fields']['field_client_country_value']['id'] = 'field_client_country_value';
  $handler->display->display_options['fields']['field_client_country_value']['table'] = 'node_data_field_client_country';
  $handler->display->display_options['fields']['field_client_country_value']['field'] = 'field_client_country_value';
  /* Field: Content: Phone Number (field_client_phone) */
  $handler->display->display_options['fields']['field_client_phone_value']['id'] = 'field_client_phone_value';
  $handler->display->display_options['fields']['field_client_phone_value']['table'] = 'node_data_field_client_phone';
  $handler->display->display_options['fields']['field_client_phone_value']['field'] = 'field_client_phone_value';
  /* Field: Content: Postal Code/Zip Code (field_client_postal) */
  $handler->display->display_options['fields']['field_client_postal_value']['id'] = 'field_client_postal_value';
  $handler->display->display_options['fields']['field_client_postal_value']['table'] = 'node_data_field_client_postal';
  $handler->display->display_options['fields']['field_client_postal_value']['field'] = 'field_client_postal_value';
  /* Field: Content: Province/Sate (field_client_province) */
  $handler->display->display_options['fields']['field_client_province_value']['id'] = 'field_client_province_value';
  $handler->display->display_options['fields']['field_client_province_value']['table'] = 'node_data_field_client_province';
  $handler->display->display_options['fields']['field_client_province_value']['field'] = 'field_client_province_value';
  /* Sort criterion: Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );

  /* Display: People Clients Page */
  $handler = $view->new_display('page', 'People Clients Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Clients';
  $handler->display->display_options['display_description'] = 'A normal View of clients who are people.';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => 6,
    5 => 5,
    15 => 15,
    17 => 17,
    4 => 4,
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  $handler->display->display_options['path'] = 'client';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Client';
  $handler->display->display_options['menu']['description'] = 'A listing of clients';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: PDF Page People Clients */
  $handler = $view->new_display('pdf', 'PDF Page People Clients', 'pdf_1');
  $handler->display->display_options['display_description'] = 'A PDF view of clients who are people.';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'pdf_table';
  $handler->display->display_options['style_options']['info'] = array(
    'field_client_applicant_last_value' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '',
      ),
    ),
    'field_client_applicant_firstname_value' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '',
      ),
    ),
    'field_client_corporate_name_value' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '',
      ),
    ),
    'field_client_fn_value' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => 'auto',
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '90',
      ),
    ),
  );
  $handler->display->display_options['style_options']['position'] = array(
    'last_writing_position' => 1,
    'x' => '25',
    'y' => '45',
    'width' => '230',
    'row_height' => '7',
  );
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Last Name (field_client_applicant_last) */
  $handler->display->display_options['fields']['field_client_applicant_last_value']['id'] = 'field_client_applicant_last_value';
  $handler->display->display_options['fields']['field_client_applicant_last_value']['table'] = 'node_data_field_client_applicant_last';
  $handler->display->display_options['fields']['field_client_applicant_last_value']['field'] = 'field_client_applicant_last_value';
  $handler->display->display_options['fields']['field_client_applicant_last_value']['label'] = 'Client Last Name';
  $handler->display->display_options['fields']['field_client_applicant_last_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_applicant_last_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_applicant_last_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_applicant_last_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_applicant_last_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_applicant_last_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_applicant_last_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_applicant_last_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_applicant_last_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_applicant_last_value']['link_to_node'] = 0;
  /* Field: Content: First Name (field_client_applicant_firstname) */
  $handler->display->display_options['fields']['field_client_applicant_firstname_value']['id'] = 'field_client_applicant_firstname_value';
  $handler->display->display_options['fields']['field_client_applicant_firstname_value']['table'] = 'node_data_field_client_applicant_firstname';
  $handler->display->display_options['fields']['field_client_applicant_firstname_value']['field'] = 'field_client_applicant_firstname_value';
  $handler->display->display_options['fields']['field_client_applicant_firstname_value']['label'] = 'Client First Name';
  $handler->display->display_options['fields']['field_client_applicant_firstname_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_applicant_firstname_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_applicant_firstname_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_applicant_firstname_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_applicant_firstname_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_applicant_firstname_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_applicant_firstname_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_applicant_firstname_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_applicant_firstname_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_applicant_firstname_value']['link_to_node'] = 0;
  /* Field: Content: Corporate Name (field_client_corporate_name) */
  $handler->display->display_options['fields']['field_client_corporate_name_value']['id'] = 'field_client_corporate_name_value';
  $handler->display->display_options['fields']['field_client_corporate_name_value']['table'] = 'node_data_field_client_corporate_name';
  $handler->display->display_options['fields']['field_client_corporate_name_value']['field'] = 'field_client_corporate_name_value';
  $handler->display->display_options['fields']['field_client_corporate_name_value']['label'] = 'Corporate Name';
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['link_to_node'] = 0;
  /* Field: Content: Client Type (field_client_entity) */
  $handler->display->display_options['fields']['field_client_entity_value']['id'] = 'field_client_entity_value';
  $handler->display->display_options['fields']['field_client_entity_value']['table'] = 'node_data_field_client_entity';
  $handler->display->display_options['fields']['field_client_entity_value']['field'] = 'field_client_entity_value';
  $handler->display->display_options['fields']['field_client_entity_value']['label'] = 'Client Type';
  $handler->display->display_options['fields']['field_client_entity_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['label_type'] = 'custom';
  /* Field: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['fields']['field_client_fn_value']['id'] = 'field_client_fn_value';
  $handler->display->display_options['fields']['field_client_fn_value']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['fields']['field_client_fn_value']['field'] = 'field_client_fn_value';
  $handler->display->display_options['fields']['field_client_fn_value']['label'] = 'First Nation Affiliation';
  $handler->display->display_options['fields']['field_client_fn_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value']['label_type'] = 'custom';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last Name (field_client_applicant_last) */
  $handler->display->display_options['sorts']['field_client_applicant_last_value']['id'] = 'field_client_applicant_last_value';
  $handler->display->display_options['sorts']['field_client_applicant_last_value']['table'] = 'node_data_field_client_applicant_last';
  $handler->display->display_options['sorts']['field_client_applicant_last_value']['field'] = 'field_client_applicant_last_value';
  /* Sort criterion: Content: First Name (field_client_applicant_firstname) */
  $handler->display->display_options['sorts']['field_client_applicant_firstname_value']['id'] = 'field_client_applicant_firstname_value';
  $handler->display->display_options['sorts']['field_client_applicant_firstname_value']['table'] = 'node_data_field_client_applicant_firstname';
  $handler->display->display_options['sorts']['field_client_applicant_firstname_value']['field'] = 'field_client_applicant_firstname_value';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  $handler->display->display_options['path'] = 'clientlist';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Client List';
  $handler->display->display_options['menu']['description'] = 'A view';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-print-items';
  $handler->display->display_options['default_page_format'] = 'LEGAL';
  $handler->display->display_options['margin_left'] = '30';
  $handler->display->display_options['margin_right'] = '10';
  $handler->display->display_options['margin_top'] = '40';
  $handler->display->display_options['margin_bottom'] = '5';
  $handler->display->display_options['leading_template'] = '0';
  $handler->display->display_options['template'] = 'KFN_PrintLogo_Template';
  $handler->display->display_options['succeed_template'] = '0';

  /* Display: Corporate Clients Table */
  $handler = $view->new_display('attachment', 'Corporate Clients Table', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h3>Corporate Clients</h3>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Corporate Name (field_client_corporate_name) */
  $handler->display->display_options['fields']['field_client_corporate_name_value']['id'] = 'field_client_corporate_name_value';
  $handler->display->display_options['fields']['field_client_corporate_name_value']['table'] = 'node_data_field_client_corporate_name';
  $handler->display->display_options['fields']['field_client_corporate_name_value']['field'] = 'field_client_corporate_name_value';
  $handler->display->display_options['fields']['field_client_corporate_name_value']['label'] = 'Corporate Name';
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_client_corporate_name_value']['link_to_node'] = 1;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Contact Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['fields']['field_client_fn_value_1']['id'] = 'field_client_fn_value_1';
  $handler->display->display_options['fields']['field_client_fn_value_1']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['fields']['field_client_fn_value_1']['field'] = 'field_client_fn_value';
  $handler->display->display_options['fields']['field_client_fn_value_1']['label'] = 'Affiliation';
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_client_fn_value_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_client_fn_value_1']['label_type'] = 'custom';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Corporate Name (field_client_corporate_name) */
  $handler->display->display_options['sorts']['field_client_corporate_name_value']['id'] = 'field_client_corporate_name_value';
  $handler->display->display_options['sorts']['field_client_corporate_name_value']['table'] = 'node_data_field_client_corporate_name';
  $handler->display->display_options['sorts']['field_client_corporate_name_value']['field'] = 'field_client_corporate_name_value';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Gender (field_client_gener) */
  $handler->display->display_options['filters']['field_client_gener_value']['id'] = 'field_client_gener_value';
  $handler->display->display_options['filters']['field_client_gener_value']['table'] = 'node_data_field_client_gener';
  $handler->display->display_options['filters']['field_client_gener_value']['field'] = 'field_client_gener_value';
  $handler->display->display_options['filters']['field_client_gener_value']['value'] = 'Corporate';
  $handler->display->display_options['filters']['field_client_gener_value']['case'] = 1;
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );

  /* Display: Elders table view */
  $handler = $view->new_display('page', 'Elders table view', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Elders';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Elders are citizens aged 60 and older.';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Date of Birth (field_client_dob) */
  $handler->display->display_options['filters']['field_client_dob_value']['id'] = 'field_client_dob_value';
  $handler->display->display_options['filters']['field_client_dob_value']['table'] = 'node_data_field_client_dob';
  $handler->display->display_options['filters']['field_client_dob_value']['field'] = 'field_client_dob_value';
  $handler->display->display_options['filters']['field_client_dob_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_client_dob_value']['allow_null'] = 1;
  $handler->display->display_options['filters']['field_client_dob_value']['date_fields'] = array(
    'node_data_field_client_dob.field_client_dob_value' => 'node_data_field_client_dob.field_client_dob_value',
  );
  $handler->display->display_options['filters']['field_client_dob_value']['date_method'] = 'OR';
  $handler->display->display_options['filters']['field_client_dob_value']['granularity'] = 'day';
  $handler->display->display_options['filters']['field_client_dob_value']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['field_client_dob_value']['default_date'] = 'now -120 year';
  $handler->display->display_options['filters']['field_client_dob_value']['default_to_date'] = 'now -60 year';
  $handler->display->display_options['filters']['field_client_dob_value']['year_range'] = '-120:+0';
  /* Filter: Content: Gender (field_client_gener) */
  $handler->display->display_options['filters']['field_client_gener_value']['id'] = 'field_client_gener_value';
  $handler->display->display_options['filters']['field_client_gener_value']['table'] = 'node_data_field_client_gener';
  $handler->display->display_options['filters']['field_client_gener_value']['field'] = 'field_client_gener_value';
  $handler->display->display_options['filters']['field_client_gener_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_client_gener_value']['value'] = 'Corporate';
  $handler->display->display_options['filters']['field_client_gener_value']['case'] = 1;
  /* Filter: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['filters']['field_client_fn_value']['id'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['filters']['field_client_fn_value']['field'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['value'] = 'Kluane First Nation';
  $handler->display->display_options['filters']['field_client_fn_value']['case'] = 1;
  $handler->display->display_options['path'] = 'elders';

  /* Display: Adult citizens table view */
  $handler = $view->new_display('page', 'Adult citizens table view', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Adult Citizens';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Adults are citizens aged 19 and older.';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Date of Birth (field_client_dob) */
  $handler->display->display_options['filters']['field_client_dob_value']['id'] = 'field_client_dob_value';
  $handler->display->display_options['filters']['field_client_dob_value']['table'] = 'node_data_field_client_dob';
  $handler->display->display_options['filters']['field_client_dob_value']['field'] = 'field_client_dob_value';
  $handler->display->display_options['filters']['field_client_dob_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_client_dob_value']['allow_null'] = 1;
  $handler->display->display_options['filters']['field_client_dob_value']['date_fields'] = array(
    'node_data_field_client_dob.field_client_dob_value' => 'node_data_field_client_dob.field_client_dob_value',
  );
  $handler->display->display_options['filters']['field_client_dob_value']['date_method'] = 'OR';
  $handler->display->display_options['filters']['field_client_dob_value']['granularity'] = 'day';
  $handler->display->display_options['filters']['field_client_dob_value']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['field_client_dob_value']['default_date'] = 'now -59 year';
  $handler->display->display_options['filters']['field_client_dob_value']['default_to_date'] = 'now -19 year';
  $handler->display->display_options['filters']['field_client_dob_value']['year_range'] = '-120:+0';
  /* Filter: Content: Gender (field_client_gener) */
  $handler->display->display_options['filters']['field_client_gener_value']['id'] = 'field_client_gener_value';
  $handler->display->display_options['filters']['field_client_gener_value']['table'] = 'node_data_field_client_gener';
  $handler->display->display_options['filters']['field_client_gener_value']['field'] = 'field_client_gener_value';
  $handler->display->display_options['filters']['field_client_gener_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_client_gener_value']['value'] = 'Corporate';
  $handler->display->display_options['filters']['field_client_gener_value']['case'] = 1;
  /* Filter: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['filters']['field_client_fn_value']['id'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['filters']['field_client_fn_value']['field'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['value'] = 'Kluane First Nation';
  $handler->display->display_options['filters']['field_client_fn_value']['case'] = 1;
  $handler->display->display_options['path'] = 'adults';

  /* Display: Youth citizens table view */
  $handler = $view->new_display('page', 'Youth citizens table view', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Youth Citizens';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Youth are citizens aged 18 and younger.';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Gender (field_client_gener) */
  $handler->display->display_options['filters']['field_client_gener_value']['id'] = 'field_client_gener_value';
  $handler->display->display_options['filters']['field_client_gener_value']['table'] = 'node_data_field_client_gener';
  $handler->display->display_options['filters']['field_client_gener_value']['field'] = 'field_client_gener_value';
  $handler->display->display_options['filters']['field_client_gener_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_client_gener_value']['value'] = 'Corporate';
  $handler->display->display_options['filters']['field_client_gener_value']['case'] = 1;
  /* Filter: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['filters']['field_client_fn_value']['id'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['filters']['field_client_fn_value']['field'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['value'] = 'Kluane First Nation';
  $handler->display->display_options['filters']['field_client_fn_value']['case'] = 1;
  /* Filter: Content: Age (field_client_age) */
  $handler->display->display_options['filters']['field_client_age_value']['id'] = 'field_client_age_value';
  $handler->display->display_options['filters']['field_client_age_value']['table'] = 'node_data_field_client_age';
  $handler->display->display_options['filters']['field_client_age_value']['field'] = 'field_client_age_value';
  $handler->display->display_options['filters']['field_client_age_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_client_age_value']['value']['value'] = '18';
  $handler->display->display_options['filters']['field_client_age_value']['allow_null'] = 1;
  $handler->display->display_options['path'] = 'youth';

  /* Display: Burwash Landing */
  $handler = $view->new_display('page', 'Burwash Landing', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Burwash Landing';
  $handler->display->display_options['display_description'] = 'Citizens living in Burwash Landing.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Date of Birth (field_client_dob) */
  $handler->display->display_options['filters']['field_client_dob_value']['id'] = 'field_client_dob_value';
  $handler->display->display_options['filters']['field_client_dob_value']['table'] = 'node_data_field_client_dob';
  $handler->display->display_options['filters']['field_client_dob_value']['field'] = 'field_client_dob_value';
  $handler->display->display_options['filters']['field_client_dob_value']['date_fields'] = array(
    'node_data_field_client_dob.field_client_dob_value' => 'node_data_field_client_dob.field_client_dob_value',
  );
  $handler->display->display_options['filters']['field_client_dob_value']['date_method'] = 'OR';
  $handler->display->display_options['filters']['field_client_dob_value']['granularity'] = 'day';
  $handler->display->display_options['filters']['field_client_dob_value']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['field_client_dob_value']['default_date'] = '';
  $handler->display->display_options['filters']['field_client_dob_value']['default_to_date'] = '';
  $handler->display->display_options['filters']['field_client_dob_value']['year_range'] = '-120:+0';
  /* Filter: Content: City (field_client_city) */
  $handler->display->display_options['filters']['field_client_city_value']['id'] = 'field_client_city_value';
  $handler->display->display_options['filters']['field_client_city_value']['table'] = 'node_data_field_client_city';
  $handler->display->display_options['filters']['field_client_city_value']['field'] = 'field_client_city_value';
  $handler->display->display_options['filters']['field_client_city_value']['value'] = 'Burwash Landing';
  $handler->display->display_options['filters']['field_client_city_value']['case'] = 1;
  /* Filter: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['filters']['field_client_fn_value']['id'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['filters']['field_client_fn_value']['field'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['value'] = 'Kluane First Nation';
  $handler->display->display_options['filters']['field_client_fn_value']['case'] = 1;
  $handler->display->display_options['path'] = 'burwash';

  /* Display: Yukon non-Burwash */
  $handler = $view->new_display('page', 'Yukon non-Burwash', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Canada';
  $handler->display->display_options['display_description'] = 'Clients living in Yukon but not in Burwash Landing.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: City (field_client_city) */
  $handler->display->display_options['filters']['field_client_city_value']['id'] = 'field_client_city_value';
  $handler->display->display_options['filters']['field_client_city_value']['table'] = 'node_data_field_client_city';
  $handler->display->display_options['filters']['field_client_city_value']['field'] = 'field_client_city_value';
  $handler->display->display_options['filters']['field_client_city_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_client_city_value']['value'] = 'Burwash Landing';
  $handler->display->display_options['filters']['field_client_city_value']['case'] = 1;
  /* Filter: Content: Country (field_client_country) */
  $handler->display->display_options['filters']['field_client_country_value']['id'] = 'field_client_country_value';
  $handler->display->display_options['filters']['field_client_country_value']['table'] = 'node_data_field_client_country';
  $handler->display->display_options['filters']['field_client_country_value']['field'] = 'field_client_country_value';
  $handler->display->display_options['filters']['field_client_country_value']['value'] = 'Canada';
  $handler->display->display_options['filters']['field_client_country_value']['case'] = 1;
  /* Filter: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['filters']['field_client_fn_value']['id'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['filters']['field_client_fn_value']['field'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['value'] = 'Kluane First Nation';
  $handler->display->display_options['filters']['field_client_fn_value']['case'] = 1;
  $handler->display->display_options['path'] = 'canada';

  /* Display: International */
  $handler = $view->new_display('page', 'International', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'International';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Country (field_client_country) */
  $handler->display->display_options['filters']['field_client_country_value']['id'] = 'field_client_country_value';
  $handler->display->display_options['filters']['field_client_country_value']['table'] = 'node_data_field_client_country';
  $handler->display->display_options['filters']['field_client_country_value']['field'] = 'field_client_country_value';
  $handler->display->display_options['filters']['field_client_country_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_client_country_value']['value'] = 'canada';
  $handler->display->display_options['filters']['field_client_country_value']['case'] = 0;
  /* Filter: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['filters']['field_client_fn_value']['id'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['filters']['field_client_fn_value']['field'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['value'] = 'Kluane First Nation';
  $handler->display->display_options['filters']['field_client_fn_value']['case'] = 1;
  $handler->display->display_options['path'] = 'international';

  /* Display: All citizens table view */
  $handler = $view->new_display('page', 'All citizens table view', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kluane First Nation Citizens';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_client_address_value' => 'field_client_address_value',
    'field_client_city_value' => 'field_client_city_value',
    'field_client_province_value' => 'field_client_province_value',
    'field_client_postal_value' => 'field_client_postal_value',
    'field_client_country_value' => 'field_client_country_value',
    'field_client_phone_value' => 'field_client_phone_value',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_client_address_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_client_city_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_client_province_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_client_postal_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_client_country_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_client_phone_value' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Address (field_client_address) */
  $handler->display->display_options['fields']['field_client_address_value']['id'] = 'field_client_address_value';
  $handler->display->display_options['fields']['field_client_address_value']['table'] = 'node_data_field_client_address';
  $handler->display->display_options['fields']['field_client_address_value']['field'] = 'field_client_address_value';
  /* Field: Content: City (field_client_city) */
  $handler->display->display_options['fields']['field_client_city_value']['id'] = 'field_client_city_value';
  $handler->display->display_options['fields']['field_client_city_value']['table'] = 'node_data_field_client_city';
  $handler->display->display_options['fields']['field_client_city_value']['field'] = 'field_client_city_value';
  $handler->display->display_options['fields']['field_client_city_value']['label'] = 'City';
  $handler->display->display_options['fields']['field_client_city_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client_city_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client_city_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_client_city_value']['link_to_node'] = 0;
  /* Field: Content: Province/Sate (field_client_province) */
  $handler->display->display_options['fields']['field_client_province_value']['id'] = 'field_client_province_value';
  $handler->display->display_options['fields']['field_client_province_value']['table'] = 'node_data_field_client_province';
  $handler->display->display_options['fields']['field_client_province_value']['field'] = 'field_client_province_value';
  $handler->display->display_options['fields']['field_client_province_value']['label'] = 'Province';
  $handler->display->display_options['fields']['field_client_province_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client_province_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client_province_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_client_province_value']['link_to_node'] = 0;
  /* Field: Content: Postal Code/Zip Code (field_client_postal) */
  $handler->display->display_options['fields']['field_client_postal_value']['id'] = 'field_client_postal_value';
  $handler->display->display_options['fields']['field_client_postal_value']['table'] = 'node_data_field_client_postal';
  $handler->display->display_options['fields']['field_client_postal_value']['field'] = 'field_client_postal_value';
  $handler->display->display_options['fields']['field_client_postal_value']['label'] = 'Postal Code';
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client_postal_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client_postal_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_client_postal_value']['link_to_node'] = 0;
  /* Field: Content: Country (field_client_country) */
  $handler->display->display_options['fields']['field_client_country_value']['id'] = 'field_client_country_value';
  $handler->display->display_options['fields']['field_client_country_value']['table'] = 'node_data_field_client_country';
  $handler->display->display_options['fields']['field_client_country_value']['field'] = 'field_client_country_value';
  $handler->display->display_options['fields']['field_client_country_value']['label'] = 'Country';
  $handler->display->display_options['fields']['field_client_country_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client_country_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client_country_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_client_country_value']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Gender (field_client_gener) */
  $handler->display->display_options['filters']['field_client_gener_value']['id'] = 'field_client_gener_value';
  $handler->display->display_options['filters']['field_client_gener_value']['table'] = 'node_data_field_client_gener';
  $handler->display->display_options['filters']['field_client_gener_value']['field'] = 'field_client_gener_value';
  $handler->display->display_options['filters']['field_client_gener_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_client_gener_value']['value'] = 'Corporate';
  $handler->display->display_options['filters']['field_client_gener_value']['case'] = 1;
  /* Filter: Content: Affiliation (field_client_fn) - Allowed values */
  $handler->display->display_options['filters']['field_client_fn_value_many_to_one']['id'] = 'field_client_fn_value_many_to_one';
  $handler->display->display_options['filters']['field_client_fn_value_many_to_one']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['filters']['field_client_fn_value_many_to_one']['field'] = 'field_client_fn_value_many_to_one';
  $handler->display->display_options['filters']['field_client_fn_value_many_to_one']['value'] = array(
    'Kluane First Nation' => 'Kluane First Nation',
  );
  $handler->display->display_options['filters']['field_client_fn_value_many_to_one']['reduce_duplicates'] = 0;
  $handler->display->display_options['path'] = 'citizens';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_9');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_client_age_value' => 'field_client_age_value',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_client_age_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'citizens-excel';

  /* Display: All clients table view */
  $handler = $view->new_display('page', 'All clients table view', 'page_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Land Registry Client List';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_client_address_value' => 'field_client_address_value',
    'field_client_city_value' => 'field_client_city_value',
    'field_client_province_value' => 'field_client_province_value',
    'field_client_postal_value' => 'field_client_postal_value',
    'field_client_country_value' => 'field_client_country_value',
    'field_client_phone_value' => 'field_client_phone_value',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_client_address_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_client_city_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_client_province_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_client_postal_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_client_country_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_client_phone_value' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Address (field_client_address) */
  $handler->display->display_options['fields']['field_client_address_value']['id'] = 'field_client_address_value';
  $handler->display->display_options['fields']['field_client_address_value']['table'] = 'node_data_field_client_address';
  $handler->display->display_options['fields']['field_client_address_value']['field'] = 'field_client_address_value';
  /* Field: Content: City (field_client_city) */
  $handler->display->display_options['fields']['field_client_city_value']['id'] = 'field_client_city_value';
  $handler->display->display_options['fields']['field_client_city_value']['table'] = 'node_data_field_client_city';
  $handler->display->display_options['fields']['field_client_city_value']['field'] = 'field_client_city_value';
  $handler->display->display_options['fields']['field_client_city_value']['label'] = 'City';
  $handler->display->display_options['fields']['field_client_city_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client_city_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client_city_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_client_city_value']['link_to_node'] = 0;
  /* Field: Content: Province/Sate (field_client_province) */
  $handler->display->display_options['fields']['field_client_province_value']['id'] = 'field_client_province_value';
  $handler->display->display_options['fields']['field_client_province_value']['table'] = 'node_data_field_client_province';
  $handler->display->display_options['fields']['field_client_province_value']['field'] = 'field_client_province_value';
  $handler->display->display_options['fields']['field_client_province_value']['label'] = 'Province';
  $handler->display->display_options['fields']['field_client_province_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client_province_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client_province_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_client_province_value']['link_to_node'] = 0;
  /* Field: Content: Postal Code/Zip Code (field_client_postal) */
  $handler->display->display_options['fields']['field_client_postal_value']['id'] = 'field_client_postal_value';
  $handler->display->display_options['fields']['field_client_postal_value']['table'] = 'node_data_field_client_postal';
  $handler->display->display_options['fields']['field_client_postal_value']['field'] = 'field_client_postal_value';
  $handler->display->display_options['fields']['field_client_postal_value']['label'] = 'Postal Code';
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client_postal_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client_postal_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_client_postal_value']['link_to_node'] = 0;
  /* Field: Content: Country (field_client_country) */
  $handler->display->display_options['fields']['field_client_country_value']['id'] = 'field_client_country_value';
  $handler->display->display_options['fields']['field_client_country_value']['table'] = 'node_data_field_client_country';
  $handler->display->display_options['fields']['field_client_country_value']['field'] = 'field_client_country_value';
  $handler->display->display_options['fields']['field_client_country_value']['label'] = 'Country';
  $handler->display->display_options['fields']['field_client_country_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client_country_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client_country_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_client_country_value']['link_to_node'] = 0;
  /* Field: Content: Phone Number (field_client_phone) */
  $handler->display->display_options['fields']['field_client_phone_value']['id'] = 'field_client_phone_value';
  $handler->display->display_options['fields']['field_client_phone_value']['table'] = 'node_data_field_client_phone';
  $handler->display->display_options['fields']['field_client_phone_value']['field'] = 'field_client_phone_value';
  $handler->display->display_options['fields']['field_client_phone_value']['label'] = 'Phone number';
  $handler->display->display_options['fields']['field_client_phone_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_phone_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_phone_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client_phone_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client_phone_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client_phone_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client_phone_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client_phone_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_phone_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_phone_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_phone_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_phone_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_phone_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client_phone_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client_phone_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_phone_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_phone_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_client_phone_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_client_phone_value']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_client_phone_value']['multiple']['multiple_reversed'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  $handler->display->display_options['path'] = 'clients';

  /* Display: Adult citizens dashboard view */
  $handler = $view->new_display('page', 'Adult citizens dashboard view', 'page_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Adult Citizens';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Adults are citizens aged 19 and older.';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Date of Birth (field_client_dob) */
  $handler->display->display_options['filters']['field_client_dob_value']['id'] = 'field_client_dob_value';
  $handler->display->display_options['filters']['field_client_dob_value']['table'] = 'node_data_field_client_dob';
  $handler->display->display_options['filters']['field_client_dob_value']['field'] = 'field_client_dob_value';
  $handler->display->display_options['filters']['field_client_dob_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_client_dob_value']['allow_null'] = 1;
  $handler->display->display_options['filters']['field_client_dob_value']['date_fields'] = array(
    'node_data_field_client_dob.field_client_dob_value' => 'node_data_field_client_dob.field_client_dob_value',
  );
  $handler->display->display_options['filters']['field_client_dob_value']['date_method'] = 'OR';
  $handler->display->display_options['filters']['field_client_dob_value']['granularity'] = 'day';
  $handler->display->display_options['filters']['field_client_dob_value']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['field_client_dob_value']['default_date'] = 'now -59 year';
  $handler->display->display_options['filters']['field_client_dob_value']['default_to_date'] = 'now -19 year';
  $handler->display->display_options['filters']['field_client_dob_value']['year_range'] = '-120:+0';
  /* Filter: Content: Gender (field_client_gener) */
  $handler->display->display_options['filters']['field_client_gener_value']['id'] = 'field_client_gener_value';
  $handler->display->display_options['filters']['field_client_gener_value']['table'] = 'node_data_field_client_gener';
  $handler->display->display_options['filters']['field_client_gener_value']['field'] = 'field_client_gener_value';
  $handler->display->display_options['filters']['field_client_gener_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_client_gener_value']['value'] = 'Corporate';
  $handler->display->display_options['filters']['field_client_gener_value']['case'] = 1;
  /* Filter: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['filters']['field_client_fn_value']['id'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['filters']['field_client_fn_value']['field'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['value'] = 'Kluane First Nation';
  $handler->display->display_options['filters']['field_client_fn_value']['case'] = 1;
  $handler->display->display_options['path'] = 'adults';

  /* Display: Elders table dashboard view */
  $handler = $view->new_display('page', 'Elders table dashboard view', 'page_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Elders';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Elders are citizens aged 60 and older.';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Date of Birth (field_client_dob) */
  $handler->display->display_options['filters']['field_client_dob_value']['id'] = 'field_client_dob_value';
  $handler->display->display_options['filters']['field_client_dob_value']['table'] = 'node_data_field_client_dob';
  $handler->display->display_options['filters']['field_client_dob_value']['field'] = 'field_client_dob_value';
  $handler->display->display_options['filters']['field_client_dob_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_client_dob_value']['allow_null'] = 1;
  $handler->display->display_options['filters']['field_client_dob_value']['date_fields'] = array(
    'node_data_field_client_dob.field_client_dob_value' => 'node_data_field_client_dob.field_client_dob_value',
  );
  $handler->display->display_options['filters']['field_client_dob_value']['date_method'] = 'OR';
  $handler->display->display_options['filters']['field_client_dob_value']['granularity'] = 'day';
  $handler->display->display_options['filters']['field_client_dob_value']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['field_client_dob_value']['default_date'] = 'now -120 year';
  $handler->display->display_options['filters']['field_client_dob_value']['default_to_date'] = 'now -60 year';
  $handler->display->display_options['filters']['field_client_dob_value']['year_range'] = '-120:+0';
  /* Filter: Content: Gender (field_client_gener) */
  $handler->display->display_options['filters']['field_client_gener_value']['id'] = 'field_client_gener_value';
  $handler->display->display_options['filters']['field_client_gener_value']['table'] = 'node_data_field_client_gener';
  $handler->display->display_options['filters']['field_client_gener_value']['field'] = 'field_client_gener_value';
  $handler->display->display_options['filters']['field_client_gener_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_client_gener_value']['value'] = 'Corporate';
  $handler->display->display_options['filters']['field_client_gener_value']['case'] = 1;
  /* Filter: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['filters']['field_client_fn_value']['id'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['filters']['field_client_fn_value']['field'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['value'] = 'Kluane First Nation';
  $handler->display->display_options['filters']['field_client_fn_value']['case'] = 1;
  $handler->display->display_options['path'] = 'elders';

  /* Display: International Dashboard view */
  $handler = $view->new_display('page', 'International Dashboard view', 'page_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'International';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Country (field_client_country) */
  $handler->display->display_options['filters']['field_client_country_value']['id'] = 'field_client_country_value';
  $handler->display->display_options['filters']['field_client_country_value']['table'] = 'node_data_field_client_country';
  $handler->display->display_options['filters']['field_client_country_value']['field'] = 'field_client_country_value';
  $handler->display->display_options['filters']['field_client_country_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_client_country_value']['value'] = 'canada';
  $handler->display->display_options['filters']['field_client_country_value']['case'] = 0;
  /* Filter: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['filters']['field_client_fn_value']['id'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['filters']['field_client_fn_value']['field'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['value'] = 'Kluane First Nation';
  $handler->display->display_options['filters']['field_client_fn_value']['case'] = 1;
  $handler->display->display_options['path'] = 'international';

  /* Display: Yukon non-Burwash Dashboard View */
  $handler = $view->new_display('page', 'Yukon non-Burwash Dashboard View', 'page_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Canada';
  $handler->display->display_options['display_description'] = 'Clients living in Yukon but not in Burwash Landing.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: City (field_client_city) */
  $handler->display->display_options['filters']['field_client_city_value']['id'] = 'field_client_city_value';
  $handler->display->display_options['filters']['field_client_city_value']['table'] = 'node_data_field_client_city';
  $handler->display->display_options['filters']['field_client_city_value']['field'] = 'field_client_city_value';
  $handler->display->display_options['filters']['field_client_city_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_client_city_value']['value'] = 'Burwash Landing';
  $handler->display->display_options['filters']['field_client_city_value']['case'] = 1;
  /* Filter: Content: Country (field_client_country) */
  $handler->display->display_options['filters']['field_client_country_value']['id'] = 'field_client_country_value';
  $handler->display->display_options['filters']['field_client_country_value']['table'] = 'node_data_field_client_country';
  $handler->display->display_options['filters']['field_client_country_value']['field'] = 'field_client_country_value';
  $handler->display->display_options['filters']['field_client_country_value']['value'] = 'Canada';
  $handler->display->display_options['filters']['field_client_country_value']['case'] = 1;
  /* Filter: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['filters']['field_client_fn_value']['id'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['filters']['field_client_fn_value']['field'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['value'] = 'Kluane First Nation';
  $handler->display->display_options['filters']['field_client_fn_value']['case'] = 1;
  $handler->display->display_options['path'] = 'canada';

  /* Display: Burwash Landing Dashboard view */
  $handler = $view->new_display('page', 'Burwash Landing Dashboard view', 'page_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Burwash Landing';
  $handler->display->display_options['display_description'] = 'Citizens living in Burwash Landing.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Date of Birth (field_client_dob) */
  $handler->display->display_options['filters']['field_client_dob_value']['id'] = 'field_client_dob_value';
  $handler->display->display_options['filters']['field_client_dob_value']['table'] = 'node_data_field_client_dob';
  $handler->display->display_options['filters']['field_client_dob_value']['field'] = 'field_client_dob_value';
  $handler->display->display_options['filters']['field_client_dob_value']['date_fields'] = array(
    'node_data_field_client_dob.field_client_dob_value' => 'node_data_field_client_dob.field_client_dob_value',
  );
  $handler->display->display_options['filters']['field_client_dob_value']['date_method'] = 'OR';
  $handler->display->display_options['filters']['field_client_dob_value']['granularity'] = 'day';
  $handler->display->display_options['filters']['field_client_dob_value']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['field_client_dob_value']['default_date'] = '';
  $handler->display->display_options['filters']['field_client_dob_value']['default_to_date'] = '';
  $handler->display->display_options['filters']['field_client_dob_value']['year_range'] = '-120:+0';
  /* Filter: Content: City (field_client_city) */
  $handler->display->display_options['filters']['field_client_city_value']['id'] = 'field_client_city_value';
  $handler->display->display_options['filters']['field_client_city_value']['table'] = 'node_data_field_client_city';
  $handler->display->display_options['filters']['field_client_city_value']['field'] = 'field_client_city_value';
  $handler->display->display_options['filters']['field_client_city_value']['value'] = 'Burwash Landing';
  $handler->display->display_options['filters']['field_client_city_value']['case'] = 1;
  /* Filter: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['filters']['field_client_fn_value']['id'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['filters']['field_client_fn_value']['field'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['value'] = 'Kluane First Nation';
  $handler->display->display_options['filters']['field_client_fn_value']['case'] = 1;
  $handler->display->display_options['path'] = 'burwash';

  /* Display: Data export - All Citizens */
  $handler = $view->new_display('views_data_export', 'Data export - All Citizens', 'views_data_export_1');
  $handler->display->display_options['display_description'] = 'Export all citizens view for Finance Dept.';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Client Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Address (field_client_address) */
  $handler->display->display_options['fields']['field_client_address_value']['id'] = 'field_client_address_value';
  $handler->display->display_options['fields']['field_client_address_value']['table'] = 'node_data_field_client_address';
  $handler->display->display_options['fields']['field_client_address_value']['field'] = 'field_client_address_value';
  /* Field: Content: City (field_client_city) */
  $handler->display->display_options['fields']['field_client_city_value']['id'] = 'field_client_city_value';
  $handler->display->display_options['fields']['field_client_city_value']['table'] = 'node_data_field_client_city';
  $handler->display->display_options['fields']['field_client_city_value']['field'] = 'field_client_city_value';
  $handler->display->display_options['fields']['field_client_city_value']['label'] = 'City';
  $handler->display->display_options['fields']['field_client_city_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client_city_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client_city_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_city_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_client_city_value']['link_to_node'] = 0;
  /* Field: Content: Country (field_client_country) */
  $handler->display->display_options['fields']['field_client_country_value']['id'] = 'field_client_country_value';
  $handler->display->display_options['fields']['field_client_country_value']['table'] = 'node_data_field_client_country';
  $handler->display->display_options['fields']['field_client_country_value']['field'] = 'field_client_country_value';
  $handler->display->display_options['fields']['field_client_country_value']['label'] = 'Country';
  $handler->display->display_options['fields']['field_client_country_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client_country_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client_country_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_country_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_client_country_value']['link_to_node'] = 0;
  /* Field: Content: Postal Code/Zip Code (field_client_postal) */
  $handler->display->display_options['fields']['field_client_postal_value']['id'] = 'field_client_postal_value';
  $handler->display->display_options['fields']['field_client_postal_value']['table'] = 'node_data_field_client_postal';
  $handler->display->display_options['fields']['field_client_postal_value']['field'] = 'field_client_postal_value';
  $handler->display->display_options['fields']['field_client_postal_value']['label'] = 'Postal Code/Zip Code';
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client_postal_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client_postal_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_postal_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_client_postal_value']['link_to_node'] = 0;
  /* Field: Content: Province/Sate (field_client_province) */
  $handler->display->display_options['fields']['field_client_province_value']['id'] = 'field_client_province_value';
  $handler->display->display_options['fields']['field_client_province_value']['table'] = 'node_data_field_client_province';
  $handler->display->display_options['fields']['field_client_province_value']['field'] = 'field_client_province_value';
  $handler->display->display_options['fields']['field_client_province_value']['label'] = 'Province/Sate';
  $handler->display->display_options['fields']['field_client_province_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client_province_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client_province_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_province_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_client_province_value']['link_to_node'] = 0;
  $handler->display->display_options['path'] = 'all-clients-export';
  $handler->display->display_options['displays'] = array(
    'page_8' => 'page_8',
    'default' => 0,
    'page_1' => 0,
    'page_6' => 0,
    'page_7' => 0,
    'page_2' => 0,
    'page_5' => 0,
    'page_3' => 0,
    'page_4' => 0,
    'page_9' => 0,
    'page_10' => 0,
    'page_11' => 0,
    'page_12' => 0,
    'page_13' => 0,
    'page_14' => 0,
    'page_15' => 0,
    'page_16' => 0,
  );

  /* Display: Youth Citizens Dashboard View */
  $handler = $view->new_display('page', 'Youth Citizens Dashboard View', 'page_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Youth Citizens';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Youth are citizens aged 18 and younger.';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'land_use_client' => 'land_use_client',
  );
  /* Filter: Content: Gender (field_client_gener) */
  $handler->display->display_options['filters']['field_client_gener_value']['id'] = 'field_client_gener_value';
  $handler->display->display_options['filters']['field_client_gener_value']['table'] = 'node_data_field_client_gener';
  $handler->display->display_options['filters']['field_client_gener_value']['field'] = 'field_client_gener_value';
  $handler->display->display_options['filters']['field_client_gener_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_client_gener_value']['value'] = 'Corporate';
  $handler->display->display_options['filters']['field_client_gener_value']['case'] = 1;
  /* Filter: Content: Affiliation (field_client_fn) */
  $handler->display->display_options['filters']['field_client_fn_value']['id'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['table'] = 'node_data_field_client_fn';
  $handler->display->display_options['filters']['field_client_fn_value']['field'] = 'field_client_fn_value';
  $handler->display->display_options['filters']['field_client_fn_value']['value'] = 'Kluane First Nation';
  $handler->display->display_options['filters']['field_client_fn_value']['case'] = 1;
  /* Filter: Content: Age (field_client_age) */
  $handler->display->display_options['filters']['field_client_age_value']['id'] = 'field_client_age_value';
  $handler->display->display_options['filters']['field_client_age_value']['table'] = 'node_data_field_client_age';
  $handler->display->display_options['filters']['field_client_age_value']['field'] = 'field_client_age_value';
  $handler->display->display_options['filters']['field_client_age_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_client_age_value']['value']['value'] = '18';
  $handler->display->display_options['filters']['field_client_age_value']['allow_null'] = 1;
  $handler->display->display_options['path'] = 'youth';
  $translatables['client_summary'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Client Name'),
    t('People Clients Page'),
    t('Clients'),
    t('A normal View of clients who are people.'),
    t('PDF Page People Clients'),
    t('A PDF view of clients who are people.'),
    t('Client Last Name'),
    t('Client First Name'),
    t('Corporate Name'),
    t('Client Type'),
    t('First Nation Affiliation'),
    t('Corporate Clients Table'),
    t('Text area'),
    t('<h3>Corporate Clients</h3>'),
    t('Contact Name'),
    t('Affiliation'),
    t('Elders table view'),
    t('Elders'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Elders are citizens aged 60 and older.'),
    t('Adult citizens table view'),
    t('Adult Citizens'),
    t('Adults are citizens aged 19 and older.'),
    t('Youth citizens table view'),
    t('Youth Citizens'),
    t('Youth are citizens aged 18 and younger.'),
    t('Burwash Landing'),
    t('Citizens living in Burwash Landing.'),
    t('Yukon non-Burwash'),
    t('Canada'),
    t('Clients living in Yukon but not in Burwash Landing.'),
    t('International'),
    t('All citizens table view'),
    t('Kluane First Nation Citizens'),
    t('Name'),
    t('City'),
    t('Province'),
    t('Postal Code'),
    t('Country'),
    t('Page'),
    t('All clients table view'),
    t('Land Registry Client List'),
    t('Phone number'),
    t('Adult citizens dashboard view'),
    t('Elders table dashboard view'),
    t('International Dashboard view'),
    t('Yukon non-Burwash Dashboard View'),
    t('Burwash Landing Dashboard view'),
    t('Data export - All Citizens'),
    t('Export all citizens view for Finance Dept.'),
    t('Postal Code/Zip Code'),
    t('Province/Sate'),
    t('Youth Citizens Dashboard View'),
  );

  $views[$view->name] = $view;

  // Exported view: client_summary_pdftest
  $view = new view;
  $view->name = 'client_summary_pdftest';
  $view->description = 'A list of all clients.';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
    3 => 3,
    4 => 4,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'field_client_entity_value';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_client_corporate_name_value' => 'field_client_corporate_name_value',
    'field_client_entity_value' => 'field_client_entity_value',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_client_corporate_name_value' => array(
      'sortable' => 0,
      'align' => 'views-align-center',
      'separator' => '',
    ),
    'field_client_entity_value' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Client Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Client Type (field_client_entity) */
  $handler->display->display_options['fields']['field_client_entity_value']['id'] = 'field_client_entity_value';
  $handler->display->display_options['fields']['field_client_entity_value']['table'] = 'node_data_field_client_entity';
  $handler->display->display_options['fields']['field_client_entity_value']['field'] = 'field_client_entity_value';
  $handler->display->display_options['fields']['field_client_entity_value']['label'] = 'Client Type';
  $handler->display->display_options['fields']['field_client_entity_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_client_entity_value']['label_type'] = 'custom';
  /* Field: Content: Authorization Type (field_lua_authorizationtype) */
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['id'] = 'field_lua_authorizationtype_value';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['table'] = 'node_data_field_lua_authorizationtype';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['field'] = 'field_lua_authorizationtype_value';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['label'] = 'Authorization Type';
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_lua_authorizationtype_value']['label_type'] = 'custom';
  /* Field: Content: Start Date (field_lua_startdate) */
  $handler->display->display_options['fields']['field_lua_startdate_value']['id'] = 'field_lua_startdate_value';
  $handler->display->display_options['fields']['field_lua_startdate_value']['table'] = 'node_data_field_lua_startdate';
  $handler->display->display_options['fields']['field_lua_startdate_value']['field'] = 'field_lua_startdate_value';
  $handler->display->display_options['fields']['field_lua_startdate_value']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_lua_startdate_value']['label_type'] = 'custom';
  /* Field: Content: End date (field_lua_enddate) */
  $handler->display->display_options['fields']['field_lua_enddate_value']['id'] = 'field_lua_enddate_value';
  $handler->display->display_options['fields']['field_lua_enddate_value']['table'] = 'node_data_field_lua_enddate';
  $handler->display->display_options['fields']['field_lua_enddate_value']['field'] = 'field_lua_enddate_value';
  $handler->display->display_options['fields']['field_lua_enddate_value']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_lua_enddate_value']['label_type'] = 'custom';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'landuseauthorization' => 'landuseauthorization',
    'tkc_client_list' => 'tkc_client_list',
  );

  /* Display: PDF Page */
  $handler = $view->new_display('pdf', 'PDF Page', 'pdf_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'This is the title of the pdf';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'pdf_table';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 0,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 0,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '85',
      ),
    ),
    'field_lua_authorizationtype_value' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => 'C',
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => 'C',
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '45',
      ),
    ),
    'field_lua_startdate_value' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => 'C',
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => 'C',
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '',
      ),
    ),
    'field_lua_enddate_value' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => 'C',
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['position'] = array(
    'last_writing_position' => 1,
    'x' => '20',
    'y' => '50',
    'width' => '',
    'row_height' => '10',
  );
  $handler->display->display_options['path'] = 'testclientpdf';
  $handler->display->display_options['default_page_format'] = 'LETTER';
  $handler->display->display_options['default_page_orientation'] = 'L';
  $handler->display->display_options['leading_template'] = '0';
  $handler->display->display_options['template'] = 'KFN_PrintLogo_Template';
  $handler->display->display_options['succeed_template'] = '0';
  $translatables['client_summary_pdftest'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Client Name'),
    t('Client Type'),
    t('Authorization Type'),
    t('Start Date'),
    t('End Date'),
    t('PDF Page'),
    t('This is the title of the pdf'),
  );

  $views[$view->name] = $view;

  return $views;
}
