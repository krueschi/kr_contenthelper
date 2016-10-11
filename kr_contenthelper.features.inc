<?php
/**
 * @file
 * kr_contenthelper.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kr_contenthelper_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function kr_contenthelper_image_default_styles() {
  $styles = array();

  // Exported image style: kr_admin.
  $styles['kr_admin'] = array(
    'label' => 'KR Admin (100x100)',
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
      18 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: kr_circle.
  $styles['kr_circle'] = array(
    'label' => 'KR Circle (260x260)',
    'effects' => array(
      4 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 90,
        ),
        'weight' => -10,
      ),
      5 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 260,
          'height' => 260,
          'strength' => 'high',
        ),
        'weight' => -9,
      ),
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 260,
          'height' => 260,
        ),
        'weight' => -8,
      ),
      3 => array(
        'name' => 'canvasactions_roundedcorners',
        'data' => array(
          'radius' => 130,
          'independent_corners_set' => array(
            'independent_corners' => 0,
            'radii' => array(
              'tl' => 30,
              'tr' => 130,
              'bl' => 30,
              'br' => 130,
            ),
          ),
        ),
        'weight' => -7,
      ),
    ),
  );

  // Exported image style: kr_circle_small.
  $styles['kr_circle_small'] = array(
    'label' => 'KR Circle small (120x120)',
    'effects' => array(
      8 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 90,
        ),
        'weight' => -10,
      ),
      9 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 120,
          'strength' => 'high',
        ),
        'weight' => -9,
      ),
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 120,
        ),
        'weight' => -8,
      ),
      11 => array(
        'name' => 'canvasactions_roundedcorners',
        'data' => array(
          'radius' => 60,
          'independent_corners_set' => array(
            'independent_corners' => 0,
            'radii' => array(
              'tl' => 30,
              'tr' => 130,
              'bl' => 30,
              'br' => 130,
            ),
          ),
        ),
        'weight' => -7,
      ),
    ),
  );

  // Exported image style: kr_default.
  $styles['kr_default'] = array(
    'label' => 'KR Default (640x360)',
    'effects' => array(
      29 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 360,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
      30 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 360,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: kr_full_view.
  $styles['kr_full_view'] = array(
    'label' => 'KR Full view (1200x1200)',
    'effects' => array(
      31 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => 1200,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kr_hero.
  $styles['kr_hero'] = array(
    'label' => 'KR Hero (960x320)',
    'effects' => array(
      19 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 320,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 320,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: kr_hero_small.
  $styles['kr_hero_small'] = array(
    'label' => 'KR Hero small (550x220)',
    'effects' => array(
      25 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 550,
          'height' => 220,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
      26 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 550,
          'height' => 220,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: kr_hero_tiny.
  $styles['kr_hero_tiny'] = array(
    'label' => 'KR Hero tiny (320x140)',
    'effects' => array(
      27 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 160,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
      28 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 160,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: kr_small.
  $styles['kr_small'] = array(
    'label' => 'KR Small (350x180)',
    'effects' => array(
      23 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 180,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
      24 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 180,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: kr_square.
  $styles['kr_square'] = array(
    'label' => 'KR Square (350x350)',
    'effects' => array(
      21 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 350,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
      22 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 350,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: kr_square_small.
  $styles['kr_square_small'] = array(
    'label' => 'KR Square small (180x180)',
    'effects' => array(
      6 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 180,
          'height' => 180,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 180,
          'height' => 180,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
