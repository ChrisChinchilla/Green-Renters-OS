<?php
/**
 * @file
 * gr_social_block.box.inc
 */

/**
 * Implements hook_default_box().
 */
function gr_social_block_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'social_buttons';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Social Buttons';
  $box->options = array(
    'body' => array(
      'value' => '<div class="fb-like" data-action="like" data-href="http://facebook.com/greenrenters" data-layout="standard" data-share="true" data-show-faces="true" data-width="75">&nbsp;</div>


<a href="https://twitter.com/greenrenters" class="twitter-follow-button" data-show-count="false">Follow @greenrenters</a>
<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?\'http\':\'https\';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+\'://platform.twitter.com/widgets.js\';fjs.parentNode.insertBefore(js,fjs);}}(document, \'script\', \'twitter-wjs\');</script>',
      'format' => 'anything',
    ),
    'additional_classes' => '',
  );
  $export['social_buttons'] = $box;

  return $export;
}
