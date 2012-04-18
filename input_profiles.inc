<?php

function awdrupal_input_format_wysiwyg() {
  return array(
      'format' => 'wysiwyg',
      'name' => 'Wysiwyg',
      'weight' => 0,
      'filters' => array(
        // HTML filter.
        'filter_html' => array(
          'weight' => 1,
          'status' => 1,
          'settings' => array(
            'allowed_html' => "<a> <em> <strong> <ul> <ol> <li> <p> <br> <hr>",
            'filter_html_help' => 1,
            'filter_html_nofollow' => 0,
          ),
        ),

        // HTML corrector filter.
        'filter_htmlcorrector' => array(
          'weight' => 2,
          'status' => 1,
        ),

        // Pathologic
        'pathologic' => array(
          'weight' => 3,
          'status' => 1,
          'settings' => array(
            'local_paths' => '/',
            'absolute' => 1,
          ),
        ),
      ),
    );
}


function awdrupal_input_format_full_html() {
  return array(
      'format' => 'full_html',
      'name' => 'Full HTML',
      'weight' => 1,
      'filters' => array(

        // URL filter.
        'filter_url' => array(
          'weight' => 0,
          'status' => 1,
          'settings' => array(
            'allowed_html' => "<a> <em> <strong> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <br> <hr>",
            'filter_html_help' => 1,
            'filter_html_nofollow' => 0,
          ),
        ),

        // Line break filter.
        'filter_autop' => array(
          'weight' => 1,
          'status' => 1,
        ),

        // HTML corrector filter.
        'filter_htmlcorrector' => array(
          'weight' => 2,
          'status' => 1,
        ),

        // HTML Filter URL
        'filter_url' => array(
          'weight' => 3,
          'status' => 1,
          'settings' => array(
            'filter_url_length' => 72,
          ),
        ),

        // Pathologic
        'pathologic' => array(
          'weight' => 4,
          'status' => 1,
          'settings' => array(
            'local_paths' => '/',
            'absolute' => 1,
          ),
        ),
      ),
    );
}


function awdrupal_input_ckeditor_basic_wysiwyg() {
  return array(
    'filters' => array (
      'filter_htmlcorrector' => 1,
      'filter_html' => 1,
    ),
    'textformat_filters' => 't',
    'ss' => '2',
    'default' => 't',
    'show_toggle' => 'f',
    'skin' => 'kama',
    'uicolor' => 'default',
    'uicolor_textarea' => '<p>
        Click the <strong>UI Color Picker</strong> button to set your color preferences.</p>
  ',
    'uicolor_user' => 'default',
    'toolbar' => '[
    [\'Bold\',\'Italic\',\'Underline\',\'NumberedList\',\'BulletedList\',\'Indent\',\'Outdent\',\'Link\',\'Unlink\',\'linkit\',\'Image\',\'Anchor\',\'SpecialChar\',\'-\',\'Cut\',\'Copy\',\'Paste\',\'-\',\'Undo\',\'Redo\',\'RemoveFormat\']
  ]',
    'expand' => 't',
    'width' => '100%',
    'lang' => 'en',
    'auto_lang' => 't',
    'language_direction' => 'default',
    'enter_mode' => 'p',
    'shift_enter_mode' => 'br',
    'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
    'custom_formatting' => 't',
    'formatting' => array (
      'custom_formatting_options' => array (
        'indent' => 'indent',
        'breakBeforeOpen' => 'breakBeforeOpen',
        'breakAfterOpen' => 'breakAfterOpen',
        'breakAfterClose' => 'breakAfterClose',
        'breakBeforeClose' => 0,
        'pre_indent' => 0,
      ),
    ),
    'css_mode' => 'none',
    'css_path' => '',
    'css_style' => 'theme',
    'styles_path' => '',
    'filebrowser' => 'imce',
    'filebrowser_image' => '',
    'filebrowser_flash' => '',
    'UserFilesPath' => '%f/content/wysiwyg',
    'UserFilesAbsolutePath' => '%d%b/',
    'ckeditor_load_method' => 'ckeditor.js',
    'ckeditor_load_time_out' => '0',
    'forcePasteAsPlainText' => 't',
    'html_entities' => 't',
    'scayt_autoStartup' => 'f',
    'theme_config_js' => 'f',
    'js_conf' => '',
    'loadPlugins' => array (
      'imce' => array (
        'name' => 'imce',
        'desc' => 'Plugin for inserting files from imce without image dialog',
        'path' => '%base_path%%plugin_dir%imce/',
        'buttons' =>
        array (
          'IMCE' =>
          array (
            'label' => 'IMCE',
            'icon' => 'images/icon.png',
          ),
        ),
        'default' => 'f',
      ),
      'linkit' =>
      array (
        'name' => 'linkit',
        'desc' => 'Support for Linkit module',
        'path' => '%base_path%sites/all/modules/contrib/linkit/editors/ckeditor/',
        'buttons' =>
        array (
          'linkit' =>
          array (
            'label' => 'Linkit',
            'icon' => 'linkit.png',
          ),
        ),
      ),
    ),
  );

}


function awdrupal_input_imce_webmaster($roles) {

  $imce = array();
  $imce['imce_profiles'] = array(1 =>
    array (
      'name' => 'Webmaster',
      'usertab' => 0,
      'filesize' => '0',
      'quota' => '0',
      'tuquota' => '0',
      'extensions' => '*',
      'dimensions' => '1200x1200',
      'filenum' => '0',
      'directories' =>
      array (
        0 =>
        array (
          'name' => 'content/wysiwyg/images',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
        ),
        1 =>
        array (
          'name' => 'content/wysiwyg/files',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 0,
          'delete' => 1,
          'resize' => 0,
        ),
      ),
      'thumbnails' =>
      array (
        0 =>
        array (
          'name' => 'Small',
          'dimensions' => '90x90',
          'prefix' => 'small_',
          'suffix' => '',
        ),
        1 =>
        array (
          'name' => 'Medium',
          'dimensions' => '120x120',
          'prefix' => 'medium_',
          'suffix' => '',
        ),
        2 =>
        array (
          'name' => 'Large',
          'dimensions' => '180x180',
          'prefix' => 'large_',
          'suffix' => '',
        ),
      ),
    ),
  );

  // Default config : do not allow access to IMCE to the default Drupal Roles
  $i = count($roles);
  $imce['imce_roles_profiles'] = array(
    DRUPAL_ANONYMOUS_RID => array(
      'weight' => $i,
      'public_pid' => 0,
    ),
    DRUPAL_AUTHENTICATED_RID => array(
      'weight' => $i+1,
      'public_pid' => 0,
    ),
  );

  foreach ($roles as $role) {
    $imce['imce_roles_profiles'][$role->rid] =  array(
      'weight' => '0',
      'public_pid' => '1',
    );
  }

  $imce['imce_settings_absurls'] = TRUE;
  $imce['imce_settings_disable_private'] = TRUE;
  $imce['imce_settings_replace'] = '0';
  $imce['imce_settings_textarea'] = '0';
  $imce['imce_settings_thumb_method'] = 'scale';

  return $imce;
}
