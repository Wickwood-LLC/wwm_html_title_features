<?php
/**
 * @file
 * wwm_html_title_features.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function wwm_html_title_features_ckeditor_profile_defaults() {
  $data = array(
    'Title' => array(
      'name' => 'Title',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Source\',\'Bold\',\'Underline\',\'Italic\',\'Subscript\',\'Superscript\',\'SpecialChar\',\'Abbr\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'theme',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => 'config.keystrokes = [[ 13 /*Enter*/, \'doNothing\'], [ CKEDITOR.SHIFT + 13 /*Shift-Enter*/, \'doNothing\']];
config.removePlugins = \'elementspath\';
config.resize_enabled = false;
config.specialChars = [
	\'!\', \'&quot;\', \'#\', \'$\', \'%\', \'&amp;\', "\'", \'(\', \')\', \'*\', \'+\', \'-\', \'.\', \'/\',
	\':\', \';\',
	\'&lt;\', \'=\', \'&gt;\', \'?\', \'@\',
	\'[\', \']\', \'^\', \'_\', \'`\',
	\'{\', \'|\', \'}\', \'~\',
	\'&euro;\', \'&lsquo;\', \'&rsquo;\', \'&ldquo;\', \'&rdquo;\', \'&ndash;\', \'&mdash;\', \'&iexcl;\', \'&cent;\', \'&pound;\',
	\'&curren;\', \'&yen;\', \'&brvbar;\', \'&sect;\', \'&uml;\', \'&copy;\', \'&ordf;\', \'&laquo;\', \'&not;\', \'&reg;\', \'&macr;\',
	\'&sup2;\', \'&sup3;\', \'&acute;\', \'&micro;\', \'&para;\', \'&middot;\', \'&cedil;\', \'&sup1;\', \'&ordm;\', \'&raquo;\',
	\'&frac14;\', \'&frac12;\', \'&frac34;\', \'&iquest;\', \'&Agrave;\', \'&Aacute;\', \'&Acirc;\', \'&Atilde;\', \'&Auml;\', \'&Aring;\',
	\'&AElig;\', \'&Ccedil;\', \'&Egrave;\', \'&Eacute;\', \'&Ecirc;\', \'&Euml;\', \'&Igrave;\', \'&Iacute;\', \'&Icirc;\', \'&Iuml;\',
	\'&ETH;\', \'&Ntilde;\', \'&Ograve;\', \'&Oacute;\', \'&Ocirc;\', \'&Otilde;\', \'&Ouml;\', \'&times;\', \'&Oslash;\', \'&Ugrave;\',
	\'&Uacute;\', \'&Ucirc;\', \'&Uuml;\', \'&Yacute;\', \'&THORN;\', \'&szlig;\', \'&agrave;\', \'&aacute;\', \'&acirc;\', \'&atilde;\',
	\'&auml;\', \'&aring;\', \'&aelig;\', \'&ccedil;\', \'&egrave;\', \'&eacute;\', \'&ecirc;\', \'&euml;\', \'&igrave;\', \'&iacute;\',
	\'&icirc;\', \'&iuml;\', \'&eth;\', \'&ntilde;\', \'&ograve;\', \'&oacute;\', \'&ocirc;\', \'&otilde;\', \'&ouml;\', \'&divide;\',
	\'&oslash;\', \'&ugrave;\', \'&uacute;\', \'&ucirc;\', \'&uuml;\', \'&yacute;\', \'&thorn;\', \'&yuml;\', \'&OElig;\', \'&oelig;\',
	\'&#372;\', \'&#374\', \'&#373\', \'&#375;\', \'&sbquo;\', \'&#8219;\', \'&bdquo;\', \'&hellip;\', \'&trade;\', \'&#9658;\', \'&bull;\',
	\'&rarr;\', \'&rArr;\', \'&hArr;\', \'&diams;\', \'&asymp;\',
	[\'&deg;\', \'Degree\'], [\'&prime;\', \'Prime\'], [\'&Prime;\', \'Double prime\']
];',
        'loadPlugins' => array(
          'abbr' => array(
            'name' => 'abbr',
            'desc' => 'Plugin file: abbr',
            'path' => '%plugin_dir_extra%abbr/',
            'buttons' => array(
              'Abbr' => array(
                'label' => 'Abbr',
                'icon' => 'icons/abbr.png',
              ),
            ),
            'default' => 'f',
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'picture_ckeditor' => array(
            'name' => 'picture_ckeditor',
            'desc' => 'Support responsive images with the Picture module.',
            'buttons' => FALSE,
            'path' => '%base_path%sites/all/modules/picture/ckeditor/plugins/',
            'default' => 't',
          ),
        ),
      ),
      'input_formats' => array(
        'title' => 'Title',
      ),
    ),
  );
  return $data;
}
