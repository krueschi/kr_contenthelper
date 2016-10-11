# KR contenthelper

## Description

kr_contenthelper is a features module feature for Drupal CMS to bundle up site basics. Currently implemented are:

- image presets
- date formats (strongarm variable)

## Dependency

Because of the included functions and presets this feature depends on:

- image (drupal core module),
  [imagefield_focus](https://www.drupal.org/project/imagefield_focus),
  [imagecache_actions](https://www.drupal.org/project/imagecache_actions) (for some presets that will be converted to png and transformed to a circular shape)
- [strongarm](https://www.drupal.org/project/strongarm) with
  [ctools](https://www.drupal.org/project/ctools)
