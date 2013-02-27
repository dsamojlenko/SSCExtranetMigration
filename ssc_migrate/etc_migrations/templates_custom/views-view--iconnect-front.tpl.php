<?php
/**
 * @file
 * Adativetheme implementation to display a block.
 *
 * The block template in Adaptivetheme is a little different to most other themes.
 * Instead of hard coding its markup Adaptivetheme generates most of it in
 * adaptivetheme_process_block(), conditionally printing outer and inner wrappers.
 *
 * This allows the core theme to have just one template instead of five.
 *
 * You can override this in your sub-theme with a normal block suggestion and use
 * a standard block template if you prefer, or use your own themeName_process_block()
 * function to control the markup. For example a typical navigation tempate might look
 * like this:
 *
 * @code
 * <nav id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
 *   <div class="block-inner clearfix">
 *     <?php print render($title_prefix); ?>
 *     <?php if ($block->subject): ?>
 *       <h2<?php print $title_attributes; ?>><?php print $block->subject; ?></h2>
 *     <?php endif; ?>
 *     <?php print render($title_suffix); ?>
 *     <div<?php print $content_attributes; ?>>
 *       <?php print $content ?>
 *     </div>
 *   </div>
 * </nav>
 * @endcode
 *
 * Adativetheme supplied variables:
 * - $outer_prefix: Holds a conditional element such as nav, section or div and
 *                  includes the block id, classes and attributes.
 * - $outer_suffix: Closing element.
 * - $inner_prefix: Inner div with .block-inner and .clearfix classes.
 * - $inner_suffix: Closing div.
 * - $title: Holds the block->subject.
 * - $content_processed: Pre-wrapped in div and attributes, but for some
 *   blocks these are stripped away, e.g. menu bar and main content.
 * - $is_mobile: Bool, requires the Browscap module to return TRUE for mobile
 *   devices. Use to test for a mobile context.
 *
 * Available variables:
 * - $block->subject: Block title.
 * - $content: Block content.
 * - $block->module: Module that generated the block.
 * - $block->delta: An ID for the block, unique within each module.
 * - $block->region: The block region embedding the current block.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - block: The current template type, i.e., "theming hook".
 *   - block-[module]: The module generating the block. For example, the user
 *     module is responsible for handling the default user navigation block. In
 *     that case the class would be 'block-user'.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Helper variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $block_zebra: Outputs 'odd' and 'even' dependent on each block region.
 * - $zebra: Same output as $block_zebra but independent of any block region.
 * - $block_id: Counter dependent on each block region.
 * - $id: Same output as $block_id but independent of any block region.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 * - $block_html_id: A valid HTML ID and guaranteed unique.
 *
 * @see template_preprocess()
 * @see template_preprocess_block()
 * @see template_process()
 * @see adaptivetheme_preprocess_block()
 * @see adaptivetheme_process_block()
 */
global $language;
?>

<div class="ssc-block iconnect">
	<div class="ssc-block-container">
		<div class="iconnect-container">

			<?php if($language->language == 'en') { ?>
				<img src="/sites/default/files/media/images/iconnect-banner_e.jpg" />
			<?php } else { ?>
				<img src="/sites/default/files/media/images/iconnect-banner_f.jpg" />
			<?php } ?>

			<div class="container"><h4>&nbsp;
					
				
				<?php										
					//Declare an array containing the French equivalence of month names... PHP has a function that outputs the English month names.
					$frenchMonthNames = array("01"=>"Janvier","02"=>"F&eacute;vrier","03"=>"Mars","04"=>"Avril","05"=>"Mai","06"=>"Juin","07"=>"Juillet","08"=>"Ao&ucirc;t","09"=>"Septembre","10"=>"Octobre","11"=>"Novembre","12"=>"D&eacute;cembre");
					
					//Setting up the date ranges ensuring that the year changes accordingly and that incrementing or decrementing a month does not result in 13 or 0 (range between 1 to 12).
					//The largest date in the range.
					if (date("m") == 12) {
						$maxMonth = '01';
						$maxYear = date("Y")+1;
					} else {
						$maxMonth = date("m")+1;
						$maxYear = date("Y");
					}
					//The smallest date in the range.
					if (date("m") == 1) {
						$minMonth = '12';
						$minYear = date("Y")-1;
					} else {
						$minMonth = date("m")-1;
						$minYear = date("Y");
					}
					
					//Ensuring that months before October display with a leading zero; required for date formatting.
					if ($minMonth < 10) {
						$minMonth = '0' . $minMonth;
					}
					if ($maxMonth < 10) {
						$maxMonth = '0' . $maxMonth;
					}
					
					//Declaration of date variables (in strings) all having the day set to 1 as the important elements are month and year.
					$minDate = $minYear . '-' . $minMonth . '-01'; //Smallest date in the range.
					$currDate = date("Y-m") . '-01'; 			   //Current date.
					$maxDate = $maxYear . '-' . $maxMonth . '-01'; //Largest date in the range.
					
					//Retreiving the number of records existing of the iConnect content type published within the date range. 
					$numAvail = db_query('SELECT count(relDate.entity_id) FROM {field_data_field_release_date} relDate INNER JOIN {node} n ON relDate.entity_id = n.nid WHERE n.type = :typeName AND status = 1 AND relDate.field_release_date_value >= :currDate AND relDate.field_release_date_value < :maxDate AND n.language = :lang', array(':typeName' => 'iconnect', ':currDate' => $currDate, ':maxDate' => $maxDate, ':lang' => $language->language))->fetchField();
					
					//Output the link to most recent version of the iConnect newsletter in both Official Languages.
					if ($numAvail <> 0) { //there are available iConnect items for the current month and current month's year
						if($language->language == 'en') {
							?><a href="/en/news/iconnect/<?php print strtolower(date("F")); ?>-<?php print date("Y"); ?>"><?php print date("F") . " " . date("Y") ?></a><?php
						} else {
							?><a href="/fr/nouvelles/iconnect/<?php print str_replace("&eacute;", 'e', str_replace("&ucirc;", 'u', strtolower($frenchMonthNames[date("m")]))); ?>-<?php print date("Y");?>"><?php print $frenchMonthNames[date("m")] . " " . date("Y") ?></a><?php
						}
					} else { //there are no available iConnect items for the current month, so show the previous month and previous month's year
						if($language->language == 'en') {
							?><a href="/en/news/iconnect/<?php print strtolower(date("F", strtotime($minDate . "00:00:00"))); ?>-<?php print date("Y", strtotime($minDate . "00:00:00")); ?>"><?php print date("F", strtotime($minDate . "00:00:00")) . " " . date("Y", strtotime($minDate . "00:00:00")) ?></a><?php
						} else {
							?><a href="/fr/nouvelles/iconnect/<?php print str_replace("&ucirc;" ,'u', str_replace("&eacute;", 'e', strtolower($frenchMonthNames[date("m", strtotime($minDate . "00:00:00"))]))); ?>-<?php print date("Y", strtotime($minDate . "00:00:00"));?>"><?php print $frenchMonthNames[date("m", strtotime($minDate . "00:00:00"))] . " " . date("Y", strtotime($minDate . "00:00:00")) ?></a><?php
						}
					}
				?>
				
				
				
				
				</h4>
				<?php if ($rows): ?>
					<div class="view-content">
					  <?php print $rows; ?>
					</div>
				<?php elseif ($empty): ?>
					<div class="view-empty">
				<?php print $empty; ?>
					</div>
				<?php endif; ?>

				<div class="iconnect-buttons">
					<?php if($language->language == 'en') { ?>
						<a href="en/news/iConnect">Previous Issues</a>&nbsp;<a href="en/news/iConnect/subguid">Tell us your stories</a>
					<?php } else { ?>
						<a href="fr/nouvelles/iConnect">&Eacute;ditions pr&eacute;c&eacute;dentes</a>&nbsp;<a href="fr/nouvelles/iConnect/dirarticles">Partagez vos nouvelles</a>
					<?php } ?>
				</div>
			</div>
		</div>
	</div>
</div>
