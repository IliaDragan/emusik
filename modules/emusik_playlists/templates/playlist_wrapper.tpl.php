<?php
/**
 * @file
 * Template for playlist caontainer.
 */
?>
<div id="emusik-playlist-wrapper">
  <table class="emusik-playlist-content">
    <tr>
      <th colspan="2"><?php print t('Track'); ?></th>
      <th><?php print t('Artist'); ?></th>
      <th><?php print t('Link'); ?></th>
    </tr>
    <?php print $playlist_content; ?>
  </table>
</div>
