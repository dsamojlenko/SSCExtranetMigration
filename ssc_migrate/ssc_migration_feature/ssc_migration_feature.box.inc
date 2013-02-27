<?php
/**
 * @file
 * ssc_migration_feature.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ssc_migration_feature_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'bilingual_slideshow';
  $box->plugin_key = 'wetkit_box';
  $box->title = '';
  $box->description = 'Bilingual Slideshow';
  $box->options = array(
    'en-title' => '',
    'en-body' => array(
      'value' => '<div class="wet-boew-tabbedinterface tabs-style-7 auto-play animate-slow cycle">  
	<ul class="tabs">
                  <li><a href="#tabs1_0">SSC marks Data Privacy Day</a></li>
                  <li><a href="#tabs1_1">Kevin Radford blogs about regional participation</a></li>
                  <li><a href="#tabs1_2">Public Service Award of Excellence nominations</a></li>          
</ul>


<div class="tabs-panel">
<div id="tabs1_0" class="">
<section>
<img class="slider image-style-slider" src="sites/default/files/media/dpd_en.jpg" width="730" height="250" alt="" />
<div class="tabs-content-pad">
<p>
<a href="/en/news/events/dataprivacyday2013">Christine Lavergne, Chief Privacy Officer on Data Privacy Day, highlights the importance of valuing and protecting personal information.</a>
</p>
</div>
</section>
</div>



<div class="tabs-panel">
<div id="tabs1_1" class="">
<section>
<img class="slider image-style-slider" src="sites/default/files/media/kevin_blog_banner_en.jpg" width="730" height="250" alt="" />
<div class="tabs-content-pad">
<p>
<a href="/en/blog/kevin-radford/regional-participation">This week, our Operations Branch Senior Assistant Deputy Minister asks us to consider regional realities.</a>
</p>
</div>
</section>
</div>



<div class="tabs-panel">
<div id="tabs1_2" class="">
<section>
<img class="slider image-style-slider" src="/sites/default/files/media/psae_en.jpg" width="730" height="250" alt="" />
<div class="tabs-content-pad">
<p>
<a href="/en/news/communiques/2013-01-21-2">Take advantage of this opportunity to nominate your employees, colleagues or superiors for the Public Service Award of Excellence 2013.</a>
</p>
</div>
</section>
</div>

</div>',
      'format' => 'wetkit_html_text',
    ),
    'fr-title' => '',
    'fr-body' => array(
      'value' => '<div class="wet-boew-tabbedinterface tabs-style-7 auto-play animate-slow cycle">  
	<ul class="tabs">
                  <li><a href="#tabs1_0">SPC souligne la Journée de la protection des données</a></li>
                  <li><a href="#tabs1_1">Kevin Radford blogue au sujet de la participation régionale</a></li>
                  <li><a href="#tabs1_2">Mises en candidature pour le Prix d’excellence de la fonction publique</a></li>
	</ul>

<div class="tabs-panel">
<div id="tabs1_0" class="">
<section>
<img class="slider image-style-slider" src="/sites/default/files/media/dpd_fr.jpg" width="730" height="250" alt="" />

<div class="tabs-content-pad">
<p>
<a href="/fr/nouvelles/evenements/protectiondesdonnees-2013">Christine Lavergne, chef de la protection des renseignements personnels, souligne l’importance de valoriser et de protéger les renseignements personnels.</a>
</p>
</div>
</section>
</div>


<div class="tabs-panel">
<div id="tabs1_1" class="">
<section>
<img class="slider image-style-slider" src="/sites/default/files/media/kevin_blog_banner_fr.jpg" width="730" height="250" alt="" />

<div class="tabs-content-pad">
<p>
<a href="/fr/blogue/kevin-radford/participation-regionale">Cette semaine, le sous-ministre adjoint principal de la Direction générale des opérations nous demande de songer aux réalités régionales.</a>
</p>
</div>
</section>
</div>



<div class="tabs-panel">
<div id="tabs1_2" class="">
<section>
<img class="slider image-style-slider" src="/sites/default/files/media/psae_fr.jpg" width="730" height="250" alt="" />

<div class="tabs-content-pad">
<p>
<a href="/fr/nouvelles/communiques/2013-01-21-2">Profitez de cette occasion pour proposer la candidature de vos employés, collègues ou supérieurs pour le Prix d’excellence de la fonction publique 2013.</a>
</p>
</div>
</section>
</div>

</div>',
      'format' => 'wetkit_html_text',
    ),
    'additional_classes' => '',
  );
  $export['bilingual_slideshow'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'features';
  $box->plugin_key = 'wetkit_box';
  $box->title = 'Features';
  $box->description = 'Features (Home Page)';
  $box->options = array(
    'en-title' => 'Features',
    'en-body' => array(
      'value' => '<div id="cn-gc-features-inner">
<ul>
<li><a href="http://extranet.ssc.gc.ca/en/letstalk/coffee_with_the_president_and_coo"><img src="/sites/default/files/media/coffee_button_en.jpg" alt="Coffee with the President and the Chief Operating Officer"></a></li>
<li><a href="http://ssc-spc.gc.ca/"><img src="/sites/default/files/media/ssc_internet_e.jpg" alt="SSC\'s Internet"></a></li>
</ul>
</div>',
      'format' => 'wetkit_wysiwyg_text',
    ),
    'fr-title' => 'En vedette',
    'fr-body' => array(
      'value' => '<div id="cn-gc-features-inner">
<ul>
<li><a href="http://extranet.ssc.gc.ca/fr/parlonsen/cafe_avec_la_presidente_et_cde"><img src="/sites/default/files/media/coffee_button_fr.jpg" alt="Café avec la présidente et le chef de l\'exploitation"></a></li>
<li><a href="http://ssc-spc.gc.ca/"><img src="/sites/default/files/media/ssc_internet_f.jpg" alt="Internet de SPC"></a></li>
</ul>
</div>',
      'format' => 'wetkit_wysiwyg_text',
    ),
    'additional_classes' => '',
  );
  $export['features'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'iconnect';
  $box->plugin_key = 'wetkit_box';
  $box->title = 'iconnect';
  $box->description = 'iconnect';
  $box->options = array(
    'en-title' => 'iConnect',
    'en-body' => array(
      'value' => '<H4>&nbsp;<a href="/en/news/iConnect"><em>iConnect</em> Newsletter</a> - <a href="/en/news/iConnect/december-2012">December 2012</a></H4>
<ul>
<li><a href="/en/news/iConnect/december-2012/message-president">Message from the President and COO</a></li>
<li><a href="/en/news/iConnect/december-2012/maurice-chenier">The CIO community – A conversation with Maurice Chénier</a></li>
<li><a href="/en/news/iConnect/december-2012/it-infrastructure-roundtables">IT Infrastructure Roundtable</a></li>
<li><a href="/en/news/iConnect/december-2012/gtec">GTEC – partner, employee and industry engagement</a></li>
<li><a href="/en/news/iConnect/december-2012/gateway-mobility">Gateway to Mobility</a></li>
<li><a href="/en/news/iConnect/december-2012/gcwcc">GCWCC – engaging with the community</a></li>
<li><a href="/en/news/iConnect/december-2012/agora">Agora – engaged and in gear on new ideas</a></li>
<li><a href="/en/news/iConnect/december-2012/employee-initiative">SSC supports employee initiative</a></li>
<li><a href="/en/news/iConnect/december-2012/human-resources-highlights">Get answers to your HR questions</a></li>

</ul>',
      'format' => 'wetkit_html_text',
    ),
    'fr-title' => 'iConnect',
    'fr-body' => array(
      'value' => '<H4>&nbsp;<a href="/fr/nouvelles/iConnect/">Bulletin de nouvelles <em>iConnect</em></a> - <a href="/fr/nouvelles/iConnect/decembre-2012">Décembre 2012</a></H4>
  <ul>
<li><a href="/fr/nouvelles/iConnect/decembre-2012/message-presidente">Message de la présidente et du chef de l’exploitation</a></li>
<li><a href="/fr/nouvelles/iConnect/decembre-2012/maurice-chenier">La communauté des DPI – Entretien avec Maurice Chénier</a></li>
<li><a href="/fr/nouvelles/iConnect/decembre-2012/table-ronde-infrastructure-ti">Table ronde sur l’infrastructure de la technologie de l’information (TRITI)</a></li>
<li><a href="/fr/nouvelles/iConnect/decembre-2012/gtec">GTEC : des partenaires, des employés et une industrie mobilisés</a></li>
<li><a href="/fr/nouvelles/iConnect/decembre-2012/passerelle-mobilite">Passerelle de la mobilité</a></li>
<li><a href="/fr/nouvelles/iConnect/decembre-2012/ccmtgc">CCMTGC : s\'engager dans la collectivité</a></li>
<li><a href="/fr/nouvelles/iConnect/decembre-2012/agora">Agora – engagé et ouvert aux nouvelles idées</a></li>
<li><a href="/fr/nouvelles/iConnect/decembre-2012/initiatives-employes">SPC appuie les initiatives de ses employés</a></li>
<li><a href="/fr/nouvelles/iConnect/decembre-2012/faits-saillants-ressources-humaines">Obtenez des réponses à vos questions en matière de RH</a></li>

</ul>',
      'format' => 'wetkit_html_text',
    ),
    'additional_classes' => '',
  );
  $export['iconnect'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'iconnect_image_biling';
  $box->plugin_key = 'wetkit_box';
  $box->title = '';
  $box->description = 'Bilingual iConnect Banner Image';
  $box->options = array(
    'en-title' => '',
    'en-body' => array(
      'value' => '<P><IMG alt="" src="/sites/default/files/media/images/iconnect-banner_e.jpg"></P>',
      'format' => 'wetkit_wysiwyg_text',
    ),
    'fr-title' => '',
    'fr-body' => array(
      'value' => '<P><IMG alt="" src="/sites/default/files/media/images/iconnect-banner_f.jpg"></P>',
      'format' => 'wetkit_wysiwyg_text',
    ),
    'additional_classes' => '',
  );
  $export['iconnect_image_biling'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'latest_news_box';
  $box->plugin_key = 'wetkit_box';
  $box->title = 'Latest News';
  $box->description = 'Latest News Box';
  $box->options = array(
    'en-title' => 'Latest News',
    'en-body' => array(
      'value' => '<UL class="listStyleIndexPage">

<LI><A href="/en/news/communiques/2013-02-04">IM-IT Community Recognition Awards 2013 – Call for Nominations - February 04, 2013</A></LI>
<LI><A href="/en/news/communiques/2013-01-29">Town hall session to be held at Place du Portage - January 29, 2013 </A></LI>
<LI><A href="/en/news/events/dataprivacyday2013">Data Privacy Day 2013 - January 28, 2013</A></LI>
<LI><A href="/en/news/communiques/2013-01-25">Kevin Radford blogs about regional participation - January 25, 2013</A></LI>
<LI><A href="/en/news/communiques/2013-01-21">Minister Ambrose hosts consultations with Alberta’s Tech Industry - January 21, 2013</A></LI>
<LI><A href="/en/news/communiques/2013-01-21-2">Public Service Award of Excellence: 2013 Call for Nominations - January 21, 2013</A></LI>
<LI><A href="/en/news/communiques/2013-01-15">Coffee with the President and the Chief Operating Officer - January 15, 2013</A></LI>

</UL>',
      'format' => 'wetkit_html_text',
    ),
    'fr-title' => 'Dernières nouvelles',
    'fr-body' => array(
      'value' => '<UL class="listStyleIndexPage">

<LI><A href="/fr/nouvelles/communiques/2013-02-04">Appel de mises en candidature – Prix de mérite de la GI/TI 2013 - Le 4 février 2013</A></LI>
<LI><A href="/fr/nouvelles/communiques/2013-01-29">Séance de discussion ouverte à venir à la Place du Portage - Le 29 Janvier 2013</A></LI>
<LI><A href="/fr/nouvelles/evenements/protectiondesdonnees-2013">Journée de la protection des données - Le 28 janvier 2013</A></LI>
<LI><A href="/fr/nouvelles/communiques/2013-01-25">Kevin Radford blogue au sujet de la participation régionale - Le 25 janvier 2013</A></LI>
<LI><A href="/fr/nouvelles/communiques/2013-01-21">La ministre Ambrose tient des consultations avec le secteur des TIC de l’Alberta - Le 21 janvier 2013</A></LI>
<LI><A href="/fr/nouvelles/communiques/2013-01-21-2">Appel de mises en candidature: Prix d’excellence de la fonction publique 2013 - Le 21 janvier 2013</A></LI>
<LI><A href="/fr/nouvelles/communiques/2013-01-15">Café avec la présidente et le chef de l\'exploitation - Le 15 janvier 2013</A></LI>

</UL>',
      'format' => 'wetkit_html_text',
    ),
    'additional_classes' => '',
  );
  $export['latest_news_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'photo_gallery';
  $box->plugin_key = 'wetkit_box';
  $box->title = 'Photo Gallery';
  $box->description = 'Photo Gallery';
  $box->options = array(
    'en-title' => 'Photo Gallery',
    'en-body' => array(
      'value' => '<ul>
<li><a href="/en/resourcecentre/photogallery/jubilee">Queen Elizabeth II Diamond Jubilee Medal Ceremony</a></li>
<li><a href="/en/resourcecentre/photogallery/datacentre">Data Centre Consolidation Leadership Planning Session</a></li>
<li><a href="/en/resourcecentre/photogallery/industryday">Email Transformation Initiative – Industry Day</a></li>
<li><a href="/en/resourcecentre/photogallery/gtec2011">2011 Government Technology Exhibition and Conference (GTEC)</a></li>
<li><a href="/en/news/events/npsw-2012/photo-contest">NPSW Lean and Green! Photo Contest</a></li>
<li><a href="/en/resourcecentre/photogallery">More...</a></li></ul>',
      'format' => 'wetkit_html_text',
    ),
    'fr-title' => 'Galerie de photos',
    'fr-body' => array(
      'value' => '<ul>
<li><a href="/fr/centrederessources/galeriedephotos/jubile">Cérémonie de remise de la Médaille du jubilé de diamant de la reine Elizabeth II</a></li>
<li><a href="/fr/centrederessources/galeriedephotos/regroupement">Séance de planification sur l’Initiative de regroupement des centres de données</a></li>
<li><a href="/fr/centrederessources/galeriedephotos/industrie">Initiative de transformation des services de courriel – Journée de l’industrie</a></li>
<li><a href="/fr/centrederessources/galeriedephotos/gtec2011">Conférence et exposition sur la technologie dans l\'administration gouvernementale (GTEC)</a></li>
<li><a href="/fr/nouvelles/evenements/snfp-2012/concours-photographie">SNFP Écono et écolo</a></li>
<li><a href="/fr/centrederessources/galeriedephotos">Plus...</a></li>
</ul>',
      'format' => 'wetkit_html_text',
    ),
    'additional_classes' => '',
  );
  $export['photo_gallery'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'quick_access';
  $box->plugin_key = 'wetkit_box';
  $box->title = 'Quick Access';
  $box->description = 'Quick Access 2';
  $box->options = array(
    'en-title' => 'Quick Access',
    'en-body' => array(
      'value' => '<ul><li><a href="/en/aboutus/orgchart">Organizational Chart</a></li><li><a href="/en/resourcecentre/forms">Forms</a></li>
<li><a href="/en/resourcecentre/processes">Processes</a></li>
<li><a href="https://psoft.agr.gc.ca/psp/peoplesoft8/?cmd=login" target="_blank">PeopleSoft - Sign In</a></li>
<li><a href="en/corporateIdentity">Corporate Identity</a></li>
<li><A href="http://ssc.gc.ca/pages/ibp-pai-2012-2013-eng.html">Integrated Business Plan 2012 – 2013</a></li>
<li><a href="http://publiservice.gc.ca/menu_e.html">Publiservice</a></li>
</ul>',
      'format' => 'wetkit_html_text',
    ),
    'fr-title' => 'Accès rapide',
    'fr-body' => array(
      'value' => '<ul><li><a href="/fr/apropos/organigramme">Organigramme</a></li><li><a href="/fr/centrederessources/formulaires">Formulaires</a></li>
<li><a href="/fr/centrederessources/processus">Processus</a></li>
<li><a href="https://psoft.agr.gc.ca/psp/peoplesoft8/?cmd=login&languageCd=CFR" target="_blank">PeopleSoft - Connexion</a></li>
<li><a href="fr/identitecorporative">Identité visuelle</a></li>
<li><a href="http://ssc.gc.ca/pages/ibp-pai-2012-2013-fra.html">Plan d\'affaires intégrées 2012 – 2013</a></li>
<li><a href="http://publiservice.gc.ca/menu_f.html">Publiservice</a></li>
</ul>',
      'format' => 'wetkit_html_text',
    ),
    'additional_classes' => '',
  );
  $export['quick_access'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'video_gallery';
  $box->plugin_key = 'wetkit_box';
  $box->title = 'Video Gallery';
  $box->description = 'Video Gallery - Links to videos';
  $box->options = array(
    'en-title' => 'Video Gallery',
    'en-body' => array(
      'value' => '<UL>
<LI><A href="/en/content/employee-greeting-video">Employee Greeting Video</A></LI>
<LI><A href="/en/news/events/npsw-2012/presidentvideo">NPSW - Video Message from our President</A></LI>
<LI><A href="/en/news/events/dpi-2012/presentations/video">DPI Highlights from keynote address</A></LI>
<LI><A href="/en/resourcecentre/videogallery">More...</A></LI></UL>

',
      'format' => 'wetkit_html_text',
    ),
    'fr-title' => 'Galerie de vidéos',
    'fr-body' => array(
      'value' => '<UL>
<LI><A href="/fr/content/video-accueil-des-employes">Vidéo d’accueil des employés</A></LI>
<LI><A href="/fr/nouvelles/evenements/snfp-2012/videopresidente">SNFP&nbsp;- Message vidéo de notre présidente</A></LI>
<LI><A href="/fr/nouvelles/evenements/dpi-2012/presentations/video">Discours DPI vidéo de notre présidente</A></LI>
<LI><A href="fr/centrederessources/galerievideo">Plus...</A></LI></UL>
',
      'format' => 'wetkit_html_text',
    ),
    'additional_classes' => '',
  );
  $export['video_gallery'] = $box;

  return $export;
}
