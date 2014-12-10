<?php
/**
 * @file
 * civicrm_intergration.box.inc
 */

/**
 * Implements hook_default_box().
 */
function civicrm_intergration_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'member_block';
  $box->plugin_key = 'simple';
  $box->title = 'Show your Appreciation';
  $box->description = 'Membership Block';
  $box->options = array(
    'body' => array(
      'value' => '<p>We are supplying a lot of useful materials free for you to use in your activities. We would like to keep our servers running and pay our developers and writers something for their time.</p><p>If you appreciate our resources, you can become a lifetime member for a one off fee. It&#39;s mostly a trust and appreciation payment but you will also be able to access some extra files and resources as a thank you.<span style="font-size: 13.0080003738403px; line-height: 1.538em;">&nbsp;We have put in a lot of time and effort over the years and hope that you feel that it is worth something.</span></p><p><a href="/civicrm/contribute/transact?reset=1&amp;id=1">Sign up here</a>, <a href="/user">login</a> and you will be able to access them Immediately. If you were previously a member with us, <a href="/user">create a new account</a> and you will be upgraded to a new lifetime member.</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['member_block'] = $box;

  return $export;
}
