<?php
/**
 * @file
 * green_renters_workshops.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function green_renters_workshops_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 7,
  'title' => 'Running a sustainable home office',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f08006f5-273d-491a-b731-28f351b11a91',
  'type' => 'workshop',
  'language' => 'und',
  'created' => 1417543315,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '137e5e8f-15de-4b62-b720-b48bae2f037c',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This Workshop took our standard energy saving in the home workshop and adds a plethora of extra tips, tricks and tidbits for running a sustainable Home Office, helping you, your home office and everyone around you.</p><p>Topics covered included:</p><ul><li>Energy saving and utilities</li><li>Food and meal planning</li><li>Second hand computers and affordable software</li><li>How to go paper free</li><li>Reducing travel with virtual meetings</li><li><span style="line-height: 1.538em;">Sharing your space</span></li><li>Utilising local resources</li></ul>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>This Workshop took our standard energy saving in the home workshop and adds a plethora of extra tips, tricks and tidbits for running a sustainable Home Office, helping you, your home office and everyone around you.</p>
<p>Topics covered included:</p>
<ul><li>Energy saving and utilities</li>
<li>Food and meal planning</li>
<li>Second hand computers and affordable software</li>
<li>How to go paper free</li>
<li>Reducing travel with virtual meetings</li>
<li>Sharing your space</li>
<li>Utilising local resources</li>
</ul>',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_aims' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="font-size: 13px; line-height: 20.0063037872314px;">The aims of this workshop were to provide strategies for small business and home office workers to make their work environment more sustainable.&nbsp;</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>The aims of this workshop were to provide strategies for small business and home office workers to make their work environment more sustainable. </p>
',
      ),
    ),
  ),
  'field_audience' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The intended audience was freelancers, small business and home office workers. They are a cohort which often are unseen as they work from home, often in the evenings and weekends.&nbsp;</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>The intended audience was freelancers, small business and home office workers. They are a cohort which often are unseen as they work from home, often in the evenings and weekends. </p>
',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15796522050,
        'uri' => 'flickr://u/127210359@N08/p/15796522050',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '67df8a75-0eff-4366-b362-50becdf15335',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15061889742,
        'uri' => 'flickr://u/127210359@N08/p/15061889742',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '126c4d94-c6f6-4a39-bc80-2abf7996a807',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
    ),
  ),
  'field_private_files' => array(),
  'field_public_files' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.dropbox.com/sh/a9swwipq59e8yp5/AADxSnNZh7p2ozfuCqnT034ua?dl=0',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_reflections' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This was a workshop we only delivered once. It was developed as a result of a request and we had a lot of interest by small business organisations in hosting the workshop, especially for people working from home but not much interest from workers in attending. We facilitated this workshop for a small business and also a coworking space. I guess i would describe it as a work in progress rather than a definitive document. When we create a new workshop, early workshops are very much about gauging feedback, providing a space for workshop participants to share their thoughts and experiences rather than merely a presentation. This enables us to refine and reshape a workshop to be as relevant as possible.</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>This was a workshop we only delivered once. It was developed as a result of a request and we had a lot of interest by small business organisations in hosting the workshop, especially for people working from home but not much interest from workers in attending. We facilitated this workshop for a small business and also a coworking space. I guess i would describe it as a work in progress rather than a definitive document. When we create a new workshop, early workshops are very much about gauging feedback, providing a space for workshop participants to share their thoughts and experiences rather than merely a presentation. This enables us to refine and reshape a workshop to be as relevant as possible.</p>
',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_temp_image_url' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'catelawrence',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-12-03 05:01:55 +1100',
);
  $nodes[] = array(
  'uid' => 7,
  'title' => 'Workshops',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '738c6198-1c60-4b6b-8148-d5fcb56ea30c',
  'type' => 'article',
  'language' => 'und',
  'created' => 1417101472,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '28779447-0aa7-4f0b-8d6c-9fd0c291f503',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>Community workshops&nbsp;</h2><p>We by and large did workshops offered free to community members through local councils, libraries and community centres. Most of these, the marketing and venue was organised by the faciliator, we turned out, taught the workshops and went home. Some we organised as part of grant run projects, others we initiated ourselves as stand alone events.&nbsp;</p><h2>Niche audience workshops</h2><p>These were workshops that we did for specific audiences. For example, a series of workshops in different rooming houses in St Kilda. Workshops at an aged care facility. Workshops for people from particular cultural groups. Corporate workshops as part of green training, AGMs and shareholder events.&nbsp;</p><h2>Pop up workshops</h2><p>A pop up workshop is a seemingly impromptu workshop which appears at a somewhat unlikely place. These were commonly as part of a bigger event (such as a sustainability event, market, festival or series). We did many of these across a number of states over the years. They were usually outside and required trudging a large amount of equipment to a public space. Some examples included:</p><ul><li>World Vegan Day Brisbane</li><li>Sustainable Living Festival, Melbourne</li><li>Dodds Street Pop up weekend</li><li>Mornington Craft Market</li><li>Spring Fling, Melbourne</li><li>Treading Lightly, Hobart</li><li>Forte Living Festival, Melbourne</li></ul><p><strong>Why do a pop up workshop?</strong></p><p>A workshop can be a means of teaching a topic but it can also be a great means to engage and promote your organisation. I actually think that a workshop is a far more effective way of engaging with community over a stall. We constantly got asked to do stalls for various sustainability events. I contend that unless you have a very visual based issue or product to promote, it is very easy for people to walk past a stall, or grab a brochure and not really engage. Don&#39;t get me wrong, we met thousands of renters (and rental landlords) over the years through stalls, but we also have I also think that sustainability (in whatever capacity) workshops need to be embedded into regular cultural events, particularly those run by local councils. If the purpose of a stall or workshop is to engage new cohorts of people to an issue or cause, then you&#39;re best service positioning yourself in spaces beyond those of your traditional audience. We did pop up workshops in all kinds of spaces including bars, community space, outdoors, shopping centres, bookshops, cafes and pubs. Perhaps one of the strangest was in a tent next to a reptile stall! &nbsp;They were a great way to engage with a diverse range of people who may not come along to a traditional sustainability event. After the first few years we were less inclined to engage with pure sustainability events as they were very much a case of preaching to the converted with stalls being primarily commercial and the same faces attending each year.&nbsp;</p><h2>Masterclasses&nbsp;</h2><p>We conducted a series of four different workshops which we taught in commercial kitchens over a two year period. These workshops were:</p><ul><li>Jams, pickling and preserves masterclass</li><li>Make your own edible gifts</li><li>Tofu, nuts and plants based class (vegan)</li><li>Vegan roast masterclass</li></ul><p>These workshops originally started as a concept after meeting with the Melbourne Food and Wine Festival. They were interested in what we did and the way we wanted to make food an accessible part of sustainability. &nbsp;We did our first (Jams, pickles and preserves) at CERES. The cost of venue hire and entry into the&nbsp;Melbourne Food and WIne Festival 2013&nbsp;(along with the usual costs of ingredients, transport, materials etc) meant that we only made a small profit. However, when we changed venues, and opted out of expensive advertising we were able to make the masterclasses a good profit maker. We charged substantially more for the masterclasses than other classes, usually around $130. These workshops were of 5 hour duration and including morning tea, lunch hands on cooking and teaching, full instructions, supervision and of course hand outs and recipes. People would often come along with friends, make friends or even as part of a date which I thought was lovely.</p><p>We received a lot of criticism from one or two renters for offering these workshops but the reality was that out of the 200 plus workshops we offered each year, we only did three or four masterclasses. The proceeds of these meant that we were able to pay a presenter when we were asked by a community run group or not for profit to provide a workshop but they were unable to pay. We actually think it&#39;s important to pay a presenter for their time, knowledge and the work that goes into a workshop which includes shopping for supplies, packing equipment, writing and printing handouts (these changed depending on topic and season), getting to a premises early to set up, presenting/teaching a workshop, then packing up. This meant that we could do free workshops for a refugee group, community organisation or small not for profit and cover the costs of materials, printing and pay the presenter.</p><h2>Marketing workshops</h2><p>Our workshops were often listed in&nbsp;The Saturday Age&nbsp;and&nbsp;Sunday Age&nbsp;and in publications like&nbsp;Melbourne Weekly, Broadsheet&nbsp;and other online news. When we did workshops in conjunction with MFWF this meant a listed in their Festival guide and workshops would sell out very quickly. With other masterclasses, we tried listing with a (paid) sustainable food series promotion in The Age Good Food Month 2013 but got not one booking as a result. By contrast, in 2014 a listing of our roast class in The Age meant dozens of enquiries. Unfortunately through a typo the wrong phone number had been listed in the MFWF printed guide and a poor elderly lady got dozens of enthusiastic vegans called her. We felt terrible! We also had our workshops listed on a range of &#39;what on&#39; websites, ours and others newsletters and blogs, our website of course and Facebook. We tried flyers but found them to be difficult to control in regard to whether they were being picked up, and whether it lead to a person attending a workshop. Listing in Community newspapers were particularly popular with older people and we had good luck with promoting our workshops during radio interviews. &nbsp;Over time, Facebook became a vital source of marketing. Boosted facebook posts meant that our posts promoting workshops were seen by the friends of those who already liked us. Targeted Facebook advertisements based on location and interests were also a great way of getting us noticed. It&#39;s worth noting however that this worked because our audience was already using Facebook.&nbsp;</p><p>&nbsp;</p><p>It&#39;s worth noting that our workshops were correct at the time they were developed. When we worked in different states we would update each workshop with relevant state based information where practical. We&#39;d also change links and connect with local government resources. Think of these as the bare bones of a presentation rather than the presentation.</p><p>&nbsp;</p><h2>City vs rural</h2><p>&nbsp;</p><p><span>We tried really hard to do workshops in rural areas. We&#39;d talk to councils, community centres and neighbourhood houses. Sometimes they were widely attended but I&#39;d have to say our most common cancelled workshops (due to no one booking in to attend) were in rural areas.&nbsp;</span></p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <h2>Community workshops </h2>
<p>We by and large did workshops offered free to community members through local councils, libraries and community centres. Most of these, the marketing and venue was organised by the faciliator, we turned out, taught the workshops and went home. Some we organised as part of grant run projects, others we initiated ourselves as stand alone events. </p>
<h2>Niche audience workshops</h2>
<p>These were workshops that we did for specific audiences. For example, a series of workshops in different rooming houses in St Kilda. Workshops at an aged care facility. Workshops for people from particular cultural groups. Corporate workshops as part of green training, AGMs and shareholder events. </p>
<h2>Pop up workshops</h2>
<p>A pop up workshop is a seemingly impromptu workshop which appears at a somewhat unlikely place. These were commonly as part of a bigger event (such as a sustainability event, market, festival or series). We did many of these across a number of states over the years. They were usually outside and required trudging a large amount of equipment to a public space. Some examples included:</p>
<ul><li>World Vegan Day Brisbane</li>
<li>Sustainable Living Festival, Melbourne</li>
<li>Dodds Street Pop up weekend</li>
<li>Mornington Craft Market</li>
<li>Spring Fling, Melbourne</li>
<li>Treading Lightly, Hobart</li>
<li>Forte Living Festival, Melbourne</li>
</ul><p><strong>Why do a pop up workshop?</strong></p>
<p>A workshop can be a means of teaching a topic but it can also be a great means to engage and promote your organisation. I actually think that a workshop is a far more effective way of engaging with community over a stall. We constantly got asked to do stalls for various sustainability events. I contend that unless you have a very visual based issue or product to promote, it is very easy for people to walk past a stall, or grab a brochure and not really engage. Don\'t get me wrong, we met thousands of renters (and rental landlords) over the years through stalls, but we also have I also think that sustainability (in whatever capacity) workshops need to be embedded into regular cultural events, particularly those run by local councils. If the purpose of a stall or workshop is to engage new cohorts of people to an issue or cause, then you\'re best service positioning yourself in spaces beyond those of your traditional audience. We did pop up workshops in all kinds of spaces including bars, community space, outdoors, shopping centres, bookshops, cafes and pubs. Perhaps one of the strangest was in a tent next to a reptile stall!  They were a great way to engage with a diverse range of people who may not come along to a traditional sustainability event. After the first few years we were less inclined to engage with pure sustainability events as they were very much a case of preaching to the converted with stalls being primarily commercial and the same faces attending each year. </p>
<h2>Masterclasses </h2>
<p>We conducted a series of four different workshops which we taught in commercial kitchens over a two year period. These workshops were:</p>
<ul><li>Jams, pickling and preserves masterclass</li>
<li>Make your own edible gifts</li>
<li>Tofu, nuts and plants based class (vegan)</li>
<li>Vegan roast masterclass</li>
</ul><p>These workshops originally started as a concept after meeting with the Melbourne Food and Wine Festival. They were interested in what we did and the way we wanted to make food an accessible part of sustainability.  We did our first (Jams, pickles and preserves) at CERES. The cost of venue hire and entry into the Melbourne Food and WIne Festival 2013 (along with the usual costs of ingredients, transport, materials etc) meant that we only made a small profit. However, when we changed venues, and opted out of expensive advertising we were able to make the masterclasses a good profit maker. We charged substantially more for the masterclasses than other classes, usually around $130. These workshops were of 5 hour duration and including morning tea, lunch hands on cooking and teaching, full instructions, supervision and of course hand outs and recipes. People would often come along with friends, make friends or even as part of a date which I thought was lovely.</p>
<p>We received a lot of criticism from one or two renters for offering these workshops but the reality was that out of the 200 plus workshops we offered each year, we only did three or four masterclasses. The proceeds of these meant that we were able to pay a presenter when we were asked by a community run group or not for profit to provide a workshop but they were unable to pay. We actually think it\'s important to pay a presenter for their time, knowledge and the work that goes into a workshop which includes shopping for supplies, packing equipment, writing and printing handouts (these changed depending on topic and season), getting to a premises early to set up, presenting/teaching a workshop, then packing up. This meant that we could do free workshops for a refugee group, community organisation or small not for profit and cover the costs of materials, printing and pay the presenter.</p>
<h2>Marketing workshops</h2>
<p>Our workshops were often listed in The Saturday Age and Sunday Age and in publications like Melbourne Weekly, Broadsheet and other online news. When we did workshops in conjunction with MFWF this meant a listed in their Festival guide and workshops would sell out very quickly. With other masterclasses, we tried listing with a (paid) sustainable food series promotion in The Age Good Food Month 2013 but got not one booking as a result. By contrast, in 2014 a listing of our roast class in The Age meant dozens of enquiries. Unfortunately through a typo the wrong phone number had been listed in the MFWF printed guide and a poor elderly lady got dozens of enthusiastic vegans called her. We felt terrible! We also had our workshops listed on a range of \'what on\' websites, ours and others newsletters and blogs, our website of course and Facebook. We tried flyers but found them to be difficult to control in regard to whether they were being picked up, and whether it lead to a person attending a workshop. Listing in Community newspapers were particularly popular with older people and we had good luck with promoting our workshops during radio interviews.  Over time, Facebook became a vital source of marketing. Boosted facebook posts meant that our posts promoting workshops were seen by the friends of those who already liked us. Targeted Facebook advertisements based on location and interests were also a great way of getting us noticed. It\'s worth noting however that this worked because our audience was already using Facebook. </p>
<p> </p>
<p>It\'s worth noting that our workshops were correct at the time they were developed. When we worked in different states we would update each workshop with relevant state based information where practical. We\'d also change links and connect with local government resources. Think of these as the bare bones of a presentation rather than the presentation.</p>
<p> </p>
<h2>City vs rural</h2>
<p> </p>
<p>We tried really hard to do workshops in rural areas. We\'d talk to councils, community centres and neighbourhood houses. Sometimes they were widely attended but I\'d have to say our most common cancelled workshops (due to no one booking in to attend) were in rural areas. </p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 2,
        'uuid' => '0f4e6fe9-e5a3-4c60-acff-7fd0f51b03cd',
      ),
    ),
  ),
  'field_temp_image_url' => array(),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 14874406699,
        'uri' => 'flickr://u/127210359@N08/p/14874406699',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '25674e92-98bc-4d53-94f3-4c8f87399523',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 15798015769,
        'uri' => 'flickr://u/127210359@N08/p/15798015769',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'ee31fe91-4032-495f-8c3b-5713f7c87bbb',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      2 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 14873982440,
        'uri' => 'flickr://u/127210359@N08/p/14873982440',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '95aefc56-5dc8-4986-86e5-d38b2de3b7d0',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      3 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 14874450480,
        'uri' => 'flickr://u/127210359@N08/p/14874450480',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'f510b0e2-1818-4dd0-8062-6c0a2d87404e',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'catelawrence',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-11-28 02:17:52 +1100',
);
  $nodes[] = array(
  'uid' => 7,
  'title' => 'Edible gifts masterclass',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '490dae10-d720-4063-8abc-cb74ea442b21',
  'type' => 'workshop',
  'language' => 'und',
  'created' => 1417543800,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '43480997-e89d-41e0-81b0-8fd6b8404b2b',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Festive occasions often call for gifts and this workshop provided participants with the opportunity to make their own edible gifts instead of buying presents.&nbsp;</p><p>Recipes included :</p><ul><li>Cordials&nbsp;</li><li>Jams, chutneys and sauces</li><li>Pickles and fermented foods</li><li>Biscuits, spice mixes and sweet stuf</li></ul>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>Festive occasions often call for gifts and this workshop provided participants with the opportunity to make their own edible gifts instead of buying presents. </p>
<p>Recipes included :</p>
<ul><li>Cordials </li>
<li>Jams, chutneys and sauces</li>
<li>Pickles and fermented foods</li>
<li>Biscuits, spice mixes and sweet stuf</li>
</ul>',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_aims' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="line-height: 1.538em;">At the Edible Gifts Masterclass participants learnt to make their own food which could be used as gifts for christmas, birthdays and other festive seasons. &nbsp;This hands-on workshop will provided participants with the skills and materials to make their own fruit cordials, jams and sauces, pickles and fermented products, and spice mixes. It&#39;s the ultimate workshop to start making gifts instead of buying commercial, mass produced products.&nbsp;</span></p>',
        'format' => 'full_html',
        'safe_value' => ' <p>At the Edible Gifts Masterclass participants learnt to make their own food which could be used as gifts for christmas, birthdays and other festive seasons.  This hands-on workshop will provided participants with the skills and materials to make their own fruit cordials, jams and sauces, pickles and fermented products, and spice mixes. It\'s the ultimate workshop to start making gifts instead of buying commercial, mass produced products. </p>
 ',
      ),
    ),
  ),
  'field_audience' => array(),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15973996901,
        'uri' => 'flickr://u/127210359@N08/p/15973996901',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '204a409a-2188-45dd-9fd5-9d21621f9d61',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15080377946,
        'uri' => 'flickr://u/127210359@N08/p/15080377946',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'a674c8da-1ee1-4f51-9e64-94759d573b08',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      2 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 14916837328,
        'uri' => 'flickr://u/127210359@N08/p/14916837328',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'fc1e41b6-2570-4f10-a34a-ece77ed9fb1a',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      3 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 14916711639,
        'uri' => 'flickr://u/127210359@N08/p/14916711639',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '94ba7d97-faef-4082-a986-adf3dc11c8bd',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
    ),
  ),
  'field_private_files' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.dropbox.com/sh/rhp6phefckybnns/AADBlLwF4H3c6-EF_PHzBOUAa?dl=0',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_public_files' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.dropbox.com/sh/s82op299ts7bpcj/AAB-56LQq1ziF3ael3i6di-_a?dl=0',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_reflections' => array(
    'und' => array(
      0 => array(
        'value' => '<p>We conducted a series of different workshops which we taught in commercial kitchens over a two year period.&nbsp;</p><p>These workshops originally started as a concept after meeting with the Melbourne Food and Wine Festival. They were interested in what we did and the way we wanted to make food an accessible part of sustainability. &nbsp;We did our first (Jams, pickles and preserves) at CERES. The cost of venue hire and entry into the&nbsp;Melbourne Food and WIne Festival 2013&nbsp;(along with the usual costs of ingredients, transport, materials etc) meant that we only made a small profit. However, when we changed venues, and opted out of expensive advertising we were able to make the masterclasses a good profit maker. We charged substantially more for the masterclasses than other classes, usually around $130. These workshops were of 5 hour duration and including morning tea, lunch hands on cooking and teaching, full instructions, supervision and of course hand outs and recipes. People would often come along with friends, make friends or even as part of a date which I thought was lovely. I really enjoyed doing these classes. I only ran the edible gifts class once but I did enjoy it.&nbsp;</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>We conducted a series of different workshops which we taught in commercial kitchens over a two year period. These workshops originally started as a concept after meeting with the Melbourne Food and Wine Festival. They were interested in what we did and the way we wanted to make food an accessible part of sustainability.  We did our first (Jams, pickles and preserves) at CERES. The cost of venue hire and entry into the Melbourne Food and WIne Festival 2013 (along with the usual costs of ingredients, transport, materials etc) meant that we only made a small profit. However, when we changed venues, and opted out of expensive advertising we were able to make the masterclasses a good profit maker. We charged substantially more for the masterclasses than other classes, usually around $130. These workshops were of 5 hour duration and including morning tea, lunch hands on cooking and teaching, full instructions, supervision and of course hand outs and recipes. People would often come along with friends, make friends or even as part of a date which I thought was lovely. I really enjoyed doing these classes. I only ran the edible gifts class once but I did enjoy it. </p>
',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_temp_image_url' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'catelawrence',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-12-03 05:10:00 +1100',
);
  $nodes[] = array(
  'uid' => 7,
  'title' => 'Container and small space gardening 101',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8b027f44-c638-471b-94da-0a7144a07a4d',
  'type' => 'workshop',
  'language' => 'und',
  'created' => 1417542712,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6da70b03-8556-43a7-8fa8-ac973e38e96c',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="line-height: 1.538em;">For renter gardeners, there is nothing more disheartening than putting a lot of work into a rented garden, and having to leave it all behind. Container gardening allows you to grow whatever you want and bring it with you wherever you go. This workshop covered the basics of growing plants and focus on ideas to make the job easier, including tips on watering, what to grow, and how to get started.</span></p>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>For renter gardeners, there is nothing more disheartening than putting a lot of work into a rented garden, and having to leave it all behind. Container gardening allows you to grow whatever you want and bring it with you wherever you go. This workshop covered the basics of growing plants and focus on ideas to make the job easier, including tips on watering, what to grow, and how to get started.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_aims' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="font-size: 13px; line-height: 20.0063037872314px;">We started the container gardening workshops are a means to demonstrate that containing gardening was a way to have a abundant garden of herbs, vegetables, flowers, trees and succulents even if you did not have the luxury of a large back or front yard or lived in a small apartment. We&#39;d include a range of topics including sprouting seeds, growing from cuttings, the challenges of balcony gardening, seasonal planting, growing in different types of pots, composting, natural pesticides and more.&nbsp;</span></p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>We started the container gardening workshops are a means to demonstrate that containing gardening was a way to have a abundant garden of herbs, vegetables, flowers, trees and succulents even if you did not have the luxury of a large back or front yard or lived in a small apartment. We\'d include a range of topics including sprouting seeds, growing from cuttings, the challenges of balcony gardening, seasonal planting, growing in different types of pots, composting, natural pesticides and more. </p>
',
      ),
    ),
  ),
  'field_audience' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Our audience was generally beginner gardeners who were looking for fool proof strategies. We also delivered the workshop in a couple of aged care facilities and corporate offices. We wanted to make gardening fun, relevant and very accessible to all.&nbsp;</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>Our audience was generally beginner gardeners who were looking for fool proof strategies. We also delivered the workshop in a couple of aged care facilities and corporate offices. We wanted to make gardening fun, relevant and very accessible to all. </p>
',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15790144227,
        'uri' => 'flickr://u/127210359@N08/p/15790144227',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'a75e5b7f-d6cc-4d8a-b995-c074975ec346',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15973907931,
        'uri' => 'flickr://u/127210359@N08/p/15973907931',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'e2166db4-c083-4544-adf9-8d331dc251e7',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      2 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15788595480,
        'uri' => 'flickr://u/127210359@N08/p/15788595480',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'f3a3e48c-ab36-4f56-ad78-34ebd4e159e2',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      3 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15789861749,
        'uri' => 'flickr://u/127210359@N08/p/15789861749',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '7ed180db-2d53-41f3-8e5f-9986c944f8a5',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      4 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15790144687,
        'uri' => 'flickr://u/127210359@N08/p/15790144687',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'de53b6f9-3741-464b-9ac9-007436dd5d45',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
    ),
  ),
  'field_private_files' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.dropbox.com/sh/k6ijnm2pre2j1y4/AABeLvJNim0hwMI81SQklQema?dl=0',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_public_files' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.dropbox.com/sh/oyvbwsmgxuql8xl/AAA_iKglKTRKwHcl9jHQLqaxa?dl=0',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_reflections' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The best parts of this workshop were always the hands on elements: working with cuttings, seedlings, seeds and sprouts. Giving people a chance to feel mature compost or some compost worms in their own hands. We&#39;d even make a simple macrame plant hanger out of twine. &nbsp;Whilst we had Stu Burns, <a href="http://www.gardendoctorconsulting.com.au/garden-doctor-planting-calendar/blog/">The Garden Doctor </a>(renter, &nbsp;horticulturalist and academic), involved in writing and delivering most of our gardening workshops, we also wanted to take gardening out of the hands of experts and talk to people about what they tried in their garden, what they liked to grow, what had worked and what had failed. Giving people a space to tell their stories without being overshadowed by people with acres of gardens and years of experience was an important part of this workshop.&nbsp;</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>The best parts of this workshop were always the hands on elements: working with cuttings, seedlings, seeds and sprouts. Giving people a chance to feel mature compost or some compost worms in their own hands. We\'d even make a simple macrame plant hanger out of twine.  Whilst we had Stu Burns, <a href="http://www.gardendoctorconsulting.com.au/garden-doctor-planting-calendar/blog/">The Garden Doctor </a>(renter,  horticulturalist and academic), involved in writing and delivering most of our gardening workshops, we also wanted to take gardening out of the hands of experts and talk to people about what they tried in their garden, what they liked to grow, what had worked and what had failed. Giving people a space to tell their stories without being overshadowed by people with acres of gardens and years of experience was an important part of this workshop. </p>
',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_temp_image_url' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'catelawrence',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-12-03 04:51:52 +1100',
);
  $nodes[] = array(
  'uid' => 7,
  'title' => 'Cordials and ginger beer',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6dde2992-3bb6-4d04-ab75-228db6e1ac52',
  'type' => 'workshop',
  'language' => 'und',
  'created' => 1417543069,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '84b082c5-849f-4b3e-8285-2fd821eea665',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Seasonal fruits and herbs have long recognised for their flavours and health-giving benefits. In this fun hands on workshop, participants learnt to make homemade lemonade, gingerbeer and other tasty drinks which are great for parties, gifts or for the pantry.</p><p style="font-size: 13px; line-height: 20.0063037872314px;">&nbsp;</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>Seasonal fruits and herbs have long recognised for their flavours and health-giving benefits. In this fun hands on workshop, participants learnt to make homemade lemonade, gingerbeer and other tasty drinks which are great for parties, gifts or for the pantry.</p>
<p> </p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_aims' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="font-size: 13px; line-height: 20.0063037872314px;">We aimed to demonstrate that making beverages like cordial and ginger beer from scratch was easy, fun and healthy. You could include your favourite fruits and even herbs and plants for something with a twist.&nbsp;</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>We aimed to demonstrate that making beverages like cordial and ginger beer from scratch was easy, fun and healthy. You could include your favourite fruits and even herbs and plants for something with a twist. </p>
',
      ),
    ),
  ),
  'field_audience' => array(
    'und' => array(
      0 => array(
        'value' => '<p>We got a really varied audience to these workshops. Everyone loved sampling cordials and ginger beer and learning to make their own. We did lots of pop up events of this workshop and got a really good response.&nbsp;</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>We got a really varied audience to these workshops. Everyone loved sampling cordials and ginger beer and learning to make their own. We did lots of pop up events of this workshop and got a really good response. </p>
',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15975311222,
        'uri' => 'flickr://u/127210359@N08/p/15975311222',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'b313fabf-b01a-49a5-bc65-363d5a81b486',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15975311292,
        'uri' => 'flickr://u/127210359@N08/p/15975311292',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '9dc64b92-7ead-47b8-9626-c8ea068e2e52',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      2 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15973996901,
        'uri' => 'flickr://u/127210359@N08/p/15973996901',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '204a409a-2188-45dd-9fd5-9d21621f9d61',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      3 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15950204516,
        'uri' => 'flickr://u/127210359@N08/p/15950204516',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'bb4ccc23-e33b-4ae0-b909-fd81f782219e',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
    ),
  ),
  'field_private_files' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.dropbox.com/sh/iv3utc7bxpyz85j/AADdpCDPCL4ayyhJjCwlHBq2a?dl=0',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_public_files' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.dropbox.com/sh/knif633at9xdjto/AACeClG5ju_r43ehgLA9Qyxaa?dl=0',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_reflections' => array(
    'und' => array(
      0 => array(
        'value' => '<p>&nbsp;</p><p>I really enjoyed doing these workshops. The only down side was that they required advance preparation ( I pretty much had ginger beer on the go all year around, not exactly a bad thing) and alot of materials had to be carried to outdoor venues including stove tops, pots and pans, strainers, jars, bottles, ingredients etc. This could be a challenge at times!</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p> I really enjoyed doing these workshops. The only down side was that they required advance preparation ( I pretty much had ginger beer on the go all year around, not exactly a bad thing) and alot of materials had to be carried to outdoor venues including stove tops, pots and pans, strainers, jars, bottles, ingredients etc. This could be a challenge at times!</p>
',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_temp_image_url' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'catelawrence',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-12-03 04:57:49 +1100',
);
  $nodes[] = array(
  'uid' => 7,
  'title' => 'Preparing your home for summer',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8f11fb5f-f418-4452-bfbd-9cb10099d59c',
  'type' => 'workshop',
  'language' => 'und',
  'created' => 1417543535,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9443e3db-c1c7-4ab4-bb15-71b8dd9982dd',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>In this workshop, we explored practical strategies and ideas to create temporary/semi-permanent solutions to keep a rental home cooler through the hot summer with the aim to reduce the heat of summer in a house or apartment.</p><p>This workshop included:</p><ul><li>Installing low cost internal and/or external shading for your rental home</li><li>DIY fly screens and insulation</li><li>Green shading and temperate planting</li><li>Cooling recipes for tasty beverages and ice blocks (with tastings included!)</li></ul>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>In this workshop, we explored practical strategies and ideas to create temporary/semi-permanent solutions to keep a rental home cooler through the hot summer with the aim to reduce the heat of summer in a house or apartment.</p>
<p>This workshop included:</p>
<ul><li>Installing low cost internal and/or external shading for your rental home</li>
<li>DIY fly screens and insulation</li>
<li>Green shading and temperate planting</li>
<li>Cooling recipes for tasty beverages and ice blocks (with tastings included!)</li>
</ul>',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_aims' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="font-size: 13px; line-height: 20.0063037872314px;">The aims of this workshop were to present the audience with practical tips and strategies on preparing for an Australian summer. From the house to the garden we&#39;d demonstrate ways of making one&#39;s home more comfortable and garden more drought resistant.&nbsp;</span></p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>The aims of this workshop were to present the audience with practical tips and strategies on preparing for an Australian summer. From the house to the garden we\'d demonstrate ways of making one\'s home more comfortable and garden more drought resistant. </p>
',
      ),
    ),
  ),
  'field_audience' => array(
    'und' => array(
      0 => array(
        'value' => '<p>&nbsp;</p><p>The audience was broad and as we presented this workshop at public events where many people were home owners, we added some information about insulation. People were really keen to talk about the pros and cons of different cooling systems &nbsp;and gardening strategies, especially during heat waves.&nbsp;</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p> The audience was broad and as we presented this workshop at public events where many people were home owners, we added some information about insulation. People were really keen to talk about the pros and cons of different cooling systems  and gardening strategies, especially during heat waves. </p>
',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15061102905,
        'uri' => 'flickr://u/127210359@N08/p/15061102905',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '2697557e-5b1a-48bb-82e4-47434aef168c',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15950204516,
        'uri' => 'flickr://u/127210359@N08/p/15950204516',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'bb4ccc23-e33b-4ae0-b909-fd81f782219e',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      2 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15037752606,
        'uri' => 'flickr://u/127210359@N08/p/15037752606',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '6aad6c81-f516-4867-9985-8daeb3de8ba2',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
    ),
  ),
  'field_private_files' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.dropbox.com/sh/eloxiu93tj1z4rc/AABIWxyHFgTb0ThkGvaJRhENa?dl=0',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_public_files' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.dropbox.com/sh/b8cfvq5b8s36ssx/AACUF5MK699uuK63m_pBeshMa?dl=0',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_reflections' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This was a fairly new workshop and one I would very much like to have spent more time presenting it as it was such an interesting topic! The Australian summer can be hell for people living in poorly insulated rental properties with inadequate window coverings and without an effective cooling system.&nbsp;</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>This was a fairly new workshop and one I would very much like to have spent more time presenting it as it was such an interesting topic! The Australian summer can be hell for people living in poorly insulated rental properties with inadequate window coverings and without an effective cooling system. </p>
',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_temp_image_url' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'catelawrence',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-12-03 05:05:35 +1100',
);
  $nodes[] = array(
  'uid' => 7,
  'title' => 'Love leftovers, reduce food waste',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4fa6c66f-eb8f-46dd-88bd-bc6a23c5ea59',
  'type' => 'workshop',
  'language' => 'und',
  'created' => 1417541425,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b9c53fda-31bc-46e8-ab95-7b6522075407',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="font-size: 13px; line-height: 20.0063037872314px;">Many of us find ourselves throwing away uneaten food.This&nbsp;workshop looked at portion sizes, ways of storing food and&nbsp;how to make the most of your fridge, freezer and pantry. If<br />like many people you are confused by &ldquo;best before, use by,&nbsp;display until and sell by&rdquo; dates then the workshops helps explain the difference, as well as giving partipants the opportunity&nbsp;to discuss ways to use leftovers and share recipes.</p><p style="font-size: 13px; line-height: 20.0063037872314px;">&nbsp;</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>Many of us find ourselves throwing away uneaten food.This workshop looked at portion sizes, ways of storing food and how to make the most of your fridge, freezer and pantry. Iflike many people you are confused by “best before, use by, display until and sell by” dates then the workshops helps explain the difference, as well as giving partipants the opportunity to discuss ways to use leftovers and share recipes.</p>
<p> </p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_aims' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="font-size: 13px; line-height: 20.0063037872314px;"><span style="line-height: 20.0063037872314px;">The aims of this workshop were to look at practical strategies to reduce house hold waste. We&#39;d use a presentation, a quiz, and an interactive cooking demonstration to make food waste something that everyone could be responsible for.&nbsp;</span></p><p style="font-size: 13px; line-height: 20.0063037872314px;">&nbsp;</p><p style="font-size: 13px; line-height: 20.0063037872314px;">&nbsp;</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>The aims of this workshop were to look at practical strategies to reduce house hold waste. We\'d use a presentation, a quiz, and an interactive cooking demonstration to make food waste something that everyone could be responsible for.   </p>
',
      ),
    ),
  ),
  'field_audience' => array(
    'und' => array(
      0 => array(
        'value' => '<p>We had a diverse audience for this workshop including mothers, older people, students, people on low incomes and a range of cultural groups.&nbsp;</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>We had a diverse audience for this workshop including mothers, older people, students, people on low incomes and a range of cultural groups. </p>
',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15106053915,
        'uri' => 'flickr://u/127210359@N08/p/15106053915',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'be074b2b-bd92-4c8c-a12f-1a61b92f74b3',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
    ),
  ),
  'field_private_files' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.dropbox.com/sh/6wecn8pf80oyq1r/AABzl2bSlldqGwTM9sKm3i8-a?dl=0',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_public_files' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.dropbox.com/sh/rheqoo58gr7edq6/AAC-bj6FXSJTi-qjPluPgu7Ra?dl=0',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_reflections' => array(
    'und' => array(
      0 => array(
        'value' => '<p>We presented this workshop many times, in part due to grants which were flying around to do with reducing household food waste, in part due to landfill becoming more of a problem for waste providers and in part due to the issue of food insecurity in the lives of low income providers. We were very aware of making it not too much about stats and relevant to a rental audience who may have the challenge of a small kitchen and inadequate fridge and freezer and of course a limited food budget. We also worked with a number of cultural groups where large families increased a household food budget and the complexities of cooking were increased. I also enjoyed teaching this workshop to mothers and children, many of of who had not had all that much opportunity to cook a meal together. I also had the opportunity to teach this workshop to older tenants in an extended capacity over 12 weeks which was extremely rewarding.</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>We presented this workshop many times, in part due to grants which were flying around to do with reducing household food waste, in part due to landfill becoming more of a problem for waste providers and in part due to the issue of food insecurity in the lives of low income providers. We were very aware of making it not too much about stats and relevant to a rental audience who may have the challenge of a small kitchen and inadequate fridge and freezer and of course a limited food budget. We also worked with a number of cultural groups where large families increased a household food budget and the complexities of cooking were increased. I also enjoyed teaching this workshop to mothers and children, many of of who had not had all that much opportunity to cook a meal together. I also had the opportunity to teach this workshop to older tenants in an extended capacity over 12 weeks which was extremely rewarding.</p>
',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_temp_image_url' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'catelawrence',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-12-03 04:30:25 +1100',
);
  $nodes[] = array(
  'uid' => 7,
  'title' => 'Living sustainably in rental accommodation',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1fc9bff0-bd97-4d13-b0bc-3763d9d23613',
  'type' => 'workshop',
  'language' => 'und',
  'created' => 1417542844,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c90b1b03-ecab-486f-a114-f233e32b7899',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Being a renter means particular challenges when making your home sustainable. This workshop offered a room by room tour through the average rental property looking at simple time and cost effective ideas that will help make a property more energy efficient, sustainable and save you money.</p><p>We included:</p><p>Draught proofing<br />Ways to reduce your energy consumption and utility bills<br />Small space gardening and composting<br />Your rights and responsibilities as a renter<br />Dealing with landlords and property managers<br />Solo living, sharehouse and other rental challenges<br />Building community amongst renters</p><p>We also looked at general changes, ideas and advice for greening your lifestyle.</p><p style="font-size: 13px; line-height: 20.0063037872314px;">&nbsp;</p><p style="font-size: 13px; line-height: 20.0063037872314px;">&nbsp;</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>Being a renter means particular challenges when making your home sustainable. This workshop offered a room by room tour through the average rental property looking at simple time and cost effective ideas that will help make a property more energy efficient, sustainable and save you money.</p>
<p>We included:</p>
<p>Draught proofingWays to reduce your energy consumption and utility billsSmall space gardening and compostingYour rights and responsibilities as a renterDealing with landlords and property managersSolo living, sharehouse and other rental challengesBuilding community amongst renters</p>
<p>We also looked at general changes, ideas and advice for greening your lifestyle.</p>
<p> </p>
<p> </p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_aims' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="font-size: 13px; line-height: 20.0063037872314px;">The aim of this workshop was to provide a space for renters to talk about home sustainability and focus on what was practical in the challenges of being a renter. We&#39;d go through a typical property room by room but also look at some of the broader issues and talk about the needs of renter as a cohort that was largely overlooked in the sustainability movement.&nbsp;</span></p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>The aim of this workshop was to provide a space for renters to talk about home sustainability and focus on what was practical in the challenges of being a renter. We\'d go through a typical property room by room but also look at some of the broader issues and talk about the needs of renter as a cohort that was largely overlooked in the sustainability movement. </p>
',
      ),
    ),
  ),
  'field_audience' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This workshop was deliberately by renters for renters. We would at times get &nbsp;&#39;mum and dad&#39; property owners and the odd real estate agent coming along but the bigger issue for these landlords that we could see was always that the shortage in affordable rental accommodation (a landlord&#39;s market) meant that their properties would always be desirable and their was no&nbsp;financial&nbsp;incentive for them to make their rental properties sustainable.&nbsp;</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>This workshop was deliberately by renters for renters. We would at times get  \'mum and dad\' property owners and the odd real estate agent coming along but the bigger issue for these landlords that we could see was always that the shortage in affordable rental accommodation (a landlord\'s market) meant that their properties would always be desirable and their was no financial incentive for them to make their rental properties sustainable. </p>
',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 14865351367,
        'uri' => 'flickr://u/127210359@N08/p/14865351367',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '70f84f0f-2027-405e-92d5-bf78662bf8c1',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15037752606,
        'uri' => 'flickr://u/127210359@N08/p/15037752606',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '6aad6c81-f516-4867-9985-8daeb3de8ba2',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      2 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15059214121,
        'uri' => 'flickr://u/127210359@N08/p/15059214121',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '3392cac5-3af0-4bf4-9a44-4290cd5cc9f9',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      3 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 14873986550,
        'uri' => 'flickr://u/127210359@N08/p/14873986550',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '8ff14210-893f-4e4e-80f1-be77cfd68b55',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
    ),
  ),
  'field_private_files' => array(),
  'field_public_files' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.dropbox.com/sh/w5ctgcoqiutgff9/AACkTku9wc7wV1Kj2Bku1Auja?dl=0',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_reflections' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This was the first workshop we ever presented all those years ago. We changed it gradually over time but it was as much about providing a space for renters to share their realities as a renter as it was about sustainable living per se. Many renters that came along were relieved to finally be on someone&#39;s agenda and this single workshop was an impetus for many years of action...</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>This was the first workshop we ever presented all those years ago. We changed it gradually over time but it was as much about providing a space for renters to share their realities as a renter as it was about sustainable living per se. Many renters that came along were relieved to finally be on someone\'s agenda and this single workshop was an impetus for many years of action...</p>
',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_temp_image_url' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'catelawrence',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-12-03 04:54:04 +1100',
);
  $nodes[] = array(
  'uid' => 7,
  'title' => 'DIY Natural Cleaning',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '13ae0186-95c0-4872-b4b9-c6757ba49a79',
  'type' => 'workshop',
  'language' => 'und',
  'created' => 1417542565,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ece02f57-0feb-4e2d-83e0-7a9a1a95c309',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This workshop took a look at natural products and methods that keep a house clean and fresh without the toxic side effects experienced with some commercial products. These methods will also save you money. Particular emphasis is placed on DIY products and workshop participants were given the chance to make some cleaning products, recipes and a goody bag of products to take home.</p><p style="margin-top: 0px; margin-bottom: 1.2em; color: rgb(59, 59, 59); font-family: Georgia, \'Times New Roman\', Times, serif; font-size: 15px; line-height: 22.4910011291504px;">&nbsp;</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>This workshop took a look at natural products and methods that keep a house clean and fresh without the toxic side effects experienced with some commercial products. These methods will also save you money. Particular emphasis is placed on DIY products and workshop participants were given the chance to make some cleaning products, recipes and a goody bag of products to take home.</p>
<p> </p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_aims' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="margin-top: 0px; margin-bottom: 1.2em; color: rgb(59, 59, 59); font-family: Georgia, \'Times New Roman\', Times, serif; font-size: 15px; line-height: 22.4910011291504px;">The aims of this workshop were to teach people about the benefits of natural cleaning over convention cleaning which can involve harsh chemicals. We did this through teaching people to make their own cleaning productions in a hands on workshop.</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>The aims of this workshop were to teach people about the benefits of natural cleaning over convention cleaning which can involve harsh chemicals. We did this through teaching people to make their own cleaning productions in a hands on workshop.</p>
',
      ),
    ),
  ),
  'field_audience' => array(
    'und' => array(
      0 => array(
        'value' => '<p>We had a really varied audience to this workshop, everything from uni students to older people, corporates, people in rooming houses and social housing to rural folks.</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>We had a really varied audience to this workshop, everything from uni students to older people, corporates, people in rooming houses and social housing to rural folks.</p>
',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15788909250,
        'uri' => 'flickr://u/127210359@N08/p/15788909250',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'a4cea709-9104-4f3d-ae1d-fbc4bef36d8e',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15790191599,
        'uri' => 'flickr://u/127210359@N08/p/15790191599',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'c8905f7b-0547-4473-9fea-c983874a1f3e',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      2 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15788817368,
        'uri' => 'flickr://u/127210359@N08/p/15788817368',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '26f3f0a2-b743-417c-a484-2d4cc27933c0',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
    ),
  ),
  'field_private_files' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.dropbox.com/sh/jucb1itzevmvg9y/AADccsDiIaI0PdQyw0K6fYpta?dl=0',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_public_files' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.dropbox.com/sh/hde6png9q4bqoog/AABXJNDNH71Xu3qOBGQLY7GRa?dl=0',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_reflections' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This was a great workshop to teach and present as I always felt as if I was learning knowledge as much as sharing knowledge. All the recipes were developed through trying them out at home and very much a case of trial and error. When we started these workshops, people would ask for information which we didn&#39;t know (like how to clean a car-I&#39;ve never owned a car) and if I didn&#39;t know it, I would look it up, try some recipes out and present back to the group (whether through additional recipes or resources). It was a great way to shape the workshop in line with what people wanted to learn and increase my own knowledge. We also had a lot of interest in the &#39;no soap&#39; laundry resources, we did consider stocking these in the Green Renters shop but the requirement to buy 100 unit lots (without definite orders of people wanting to buy them) made this prohibitive.&nbsp;</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>This was a great workshop to teach and present as I always felt as if I was learning knowledge as much as sharing knowledge. All the recipes were developed through trying them out at home and very much a case of trial and error. When we started these workshops, people would ask for information which we didn\'t know (like how to clean a car-I\'ve never owned a car) and if I didn\'t know it, I would look it up, try some recipes out and present back to the group (whether through additional recipes or resources). It was a great way to shape the workshop in line with what people wanted to learn and increase my own knowledge. We also had a lot of interest in the \'no soap\' laundry resources, we did consider stocking these in the Green Renters shop but the requirement to buy 100 unit lots (without definite orders of people wanting to buy them) made this prohibitive. </p>
',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_temp_image_url' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'catelawrence',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-12-03 04:49:25 +1100',
);
  $nodes[] = array(
  'uid' => 7,
  'title' => 'Save energy, save money',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ba8a4f1d-173d-4fd0-a4ca-a29669a830ba',
  'type' => 'workshop',
  'language' => 'und',
  'created' => 1417542267,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ee778662-c828-453b-97bb-66312d2d7a7e',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="font-size: 13px; line-height: 20.0063037872314px;">This workshop explored how renters can save energy and&nbsp;reduce their utility bills. Participants learnt how to read utility bills,<br />find out which appliances are the biggest energy suckers,&nbsp;how to make their appliances work more efficiently and&nbsp;how to resolve issues with energy providers. Participants could expect an energy reduction of up to 30% on their&nbsp;utility bills as a result of making changes in their homes that we discussed in detail.&nbsp;</p><p style="font-size: 13px; line-height: 20.0063037872314px;">&nbsp;</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>This workshop explored how renters can save energy and reduce their utility bills. Participants learnt how to read utility bills,find out which appliances are the biggest energy suckers, how to make their appliances work more efficiently and how to resolve issues with energy providers. Participants could expect an energy reduction of up to 30% on their utility bills as a result of making changes in their homes that we discussed in detail. </p>
<p> </p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_aims' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="font-size: 13px; line-height: 20.0063037872314px;">This was one of our most popular workshops, primarily facilitated in Melbourne and Sydney and several rural areas. We wanted to equip renters with practical tools and strategies which would enable them to &nbsp;determine their energy consumption and strategies to reduce consumption in their home and thus their energy bills. We also spent some time in the workshop talking about self advocacy and particular how to read a utilities bill, what might be the causes of a high energy bill and how to seek recourse. In a time when many attendees felt that energy interest was all about solar and their was nothing for them, we had a great opportunity to talk to renters from a diverse range of communities.&nbsp;</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>This was one of our most popular workshops, primarily facilitated in Melbourne and Sydney and several rural areas. We wanted to equip renters with practical tools and strategies which would enable them to  determine their energy consumption and strategies to reduce consumption in their home and thus their energy bills. We also spent some time in the workshop talking about self advocacy and particular how to read a utilities bill, what might be the causes of a high energy bill and how to seek recourse. In a time when many attendees felt that energy interest was all about solar and their was nothing for them, we had a great opportunity to talk to renters from a diverse range of communities. </p>
',
      ),
    ),
  ),
  'field_audience' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This workshop was very much by renters and for renters. We felt that renters were very much excluded from discourse about home energy saving due to the public discourse being primarily about the consumption of home solar panels and this was a great way to give people practical strategies that they could instigate from their return home. We delivered this workshop to renters from diverse cultural backgrounds, often with interpreters, and also people in a range of municipalities and dwelliings.&nbsp;</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>This workshop was very much by renters and for renters. We felt that renters were very much excluded from discourse about home energy saving due to the public discourse being primarily about the consumption of home solar panels and this was a great way to give people practical strategies that they could instigate from their return home. We delivered this workshop to renters from diverse cultural backgrounds, often with interpreters, and also people in a range of municipalities and dwelliings. </p>
',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15104044202,
        'uri' => 'flickr://u/127210359@N08/p/15104044202',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '9fa757ce-2eaa-42f4-83e2-db4cc74be489',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 14917763600,
        'uri' => 'flickr://u/127210359@N08/p/14917763600',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '0b6a19fb-f1de-423b-9cc3-8cc5f75813da',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      2 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 14916714459,
        'uri' => 'flickr://u/127210359@N08/p/14916714459',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'f4a31ed9-7d9c-43c1-8467-a1fc0da7287e',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
    ),
  ),
  'field_private_files' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.dropbox.com/sh/q3tqce90n7eucz7/AAAFUZZZa4GNfRVNGbErKcQ-a?dl=0',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_public_files' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.dropbox.com/sh/i45qe6wc9epi8so/AABwnuaSvyPK-fCx_8qeOX81a?dl=',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_reflections' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This was a rewarding workshop. We built it from tried and tested strategies that we had tried in our own rental property and created a space for renters to be part of the discourse about home energy reduction. We heard so many stories about people who&nbsp;</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>This was a rewarding workshop. We built it from tried and tested strategies that we had tried in our own rental property and created a space for renters to be part of the discourse about home energy reduction. We heard so many stories about people who </p>
',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_temp_image_url' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'catelawrence',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-12-03 04:44:27 +1100',
);
  $nodes[] = array(
  'uid' => 7,
  'title' => 'How to green your apartment',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b0edb43b-16ae-4d02-8c02-03930f3e32a6',
  'type' => 'workshop',
  'language' => 'und',
  'created' => 1417543223,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f0b9d351-cf53-41e3-a84d-3ea3c325c5f5',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="font-size: 13px; line-height: 20.0063037872314px;">Renters face particular challenges to sustainable living when living in an apartment. In this workshop, we addressed these challenges and discuss ways that apartment dwellers can make their homes and lifestyles more sustainable. Thes einclude:</p><ul><li style="font-size: 13px; line-height: 20.0063037872314px;">your rights as a renter</li><li style="font-size: 13px; line-height: 20.0063037872314px;"><span style="line-height: 20.0063037872314px;">draught proofing</span></li><li style="font-size: 13px; line-height: 20.0063037872314px;">green products</li><li style="font-size: 13px; line-height: 20.0063037872314px;">strategies for communal living and communal spaces</li><li style="font-size: 13px; line-height: 20.0063037872314px;">small space and balcony gardening</li><li style="font-size: 13px; line-height: 20.0063037872314px;">collaborative consumption and building community</li></ul><p style="font-size: 13px; line-height: 20.0063037872314px;">&nbsp;</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>Renters face particular challenges to sustainable living when living in an apartment. In this workshop, we addressed these challenges and discuss ways that apartment dwellers can make their homes and lifestyles more sustainable. Thes einclude:</p>
<ul><li>your rights as a renter</li>
<li>draught proofing</li>
<li>green products</li>
<li>strategies for communal living and communal spaces</li>
<li>small space and balcony gardening</li>
<li>collaborative consumption and building community</li>
</ul><p> </p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_aims' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="font-size: 13px; line-height: 20.0063037872314px;">This workshop looked at the particular challenges experienced by rental apartment dwellers in living green from the challenges of strata/body corporate to a lack of space for activities like drying clothing outside and gardening. We also looked ways that renters could build community within their building, with practical examples of places we had visited.&nbsp;</span></p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>This workshop looked at the particular challenges experienced by rental apartment dwellers in living green from the challenges of strata/body corporate to a lack of space for activities like drying clothing outside and gardening. We also looked ways that renters could build community within their building, with practical examples of places we had visited. </p>
',
      ),
    ),
  ),
  'field_audience' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Our intended audience was renters as opposed to &nbsp;landlords yet at times we&#39;d have landlords attend with interest. There are a number of governmental supported schemes which look at rental properties in terms of making communal areas more sustainable through free sustainability audits in these spaces (including lobbies, hallways, garages) but no financial impetus for landlords (or owners also living in strata) to make these changes.&nbsp;</p><p>&nbsp;</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>Our intended audience was renters as opposed to  landlords yet at times we\'d have landlords attend with interest. There are a number of governmental supported schemes which look at rental properties in terms of making communal areas more sustainable through free sustainability audits in these spaces (including lobbies, hallways, garages) but no financial impetus for landlords (or owners also living in strata) to make these changes.  </p>
',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 14919423607,
        'uri' => 'flickr://u/127210359@N08/p/14919423607',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '7f80eb5a-9011-470e-bacf-7b2c096ed08c',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 14916880740,
        'uri' => 'flickr://u/127210359@N08/p/14916880740',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '9f6ba1a7-d515-4d06-b643-c993b1c8dd9d',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      2 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15103287425,
        'uri' => 'flickr://u/127210359@N08/p/15103287425',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '31be9f0e-f10b-4a59-98a7-1ab0980bb753',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
      3 => array(
        'fid' => NULL,
        'uid' => 7,
        'filename' => 15102923732,
        'uri' => 'flickr://u/127210359@N08/p/15102923732',
        'filemime' => 'image/jpeg',
        'filesize' => 0,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '482383f1-003c-47fd-a738-fcdd44f3d296',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => NULL,
        'height' => NULL,
        'uuid_features_file_data' => '',
      ),
    ),
  ),
  'field_private_files' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.dropbox.com/sh/o7027oyn6nwa6d0/AAAU_EC5WaqRcIU_dcg0UGeVa?dl=0',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_public_files' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.dropbox.com/sh/3u6u2diashl7zs4/AAA8hxD9L5gBdIyg2ZYMfaS0a?dl=0',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_reflections' => array(
    'und' => array(
      0 => array(
        'value' => '<p>We decided to develop this workshop as a consequence of presenting our &#39;living sustainably in rental accommodation&#39; workshop to audiences and finding that a lot of people were renting apartments and dealing with specific challenges like body corporate/strata and elements of communal living which they found challenging. We only presented it a few times but found it an interesting challenge.&nbsp;</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>We decided to develop this workshop as a consequence of presenting our \'living sustainably in rental accommodation\' workshop to audiences and finding that a lot of people were renting apartments and dealing with specific challenges like body corporate/strata and elements of communal living which they found challenging. We only presented it a few times but found it an interesting challenge. </p>
',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_temp_image_url' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'catelawrence',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-12-03 05:00:23 +1100',
);
  return $nodes;
}
