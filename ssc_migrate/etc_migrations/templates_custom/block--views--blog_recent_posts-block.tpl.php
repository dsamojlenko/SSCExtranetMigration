<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?> module-menu-section"<?php print $attributes; ?>>

  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php print $content; ?>

</div><!-- /.block -->
