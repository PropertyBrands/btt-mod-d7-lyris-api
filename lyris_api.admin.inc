<?php
/**
 * Lyris API configuration page callback
 */
function lyris_api_admin_settings_form($form, &$form_state) {
  $form['lyris_api_password'] = array(
    '#type' => 'textfield',
    '#title' => t('Lyris API Password'),
    '#default_value' => variable_get('lyris_api_password', ''),
  );

  $form['lyris_api_endpoint'] = array(
    '#type' => 'textfield',
    '#title' => t('Lyris API Endpoint'),
    '#default_value' => variable_get('lyris_api_endpoint', ''),
  );

  $form['lyris_api_site_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Lyris Site ID'),
    '#default_value' => variable_get('lyris_api_site_id', ''),
  );

  return system_settings_form($form);
}