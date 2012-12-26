<?php
/**
 * @file
 * Single playlist item template.
 *
 * Available variables:
 *   $i
 *   $title
 *   $artist
 *   $links
 */

?>
<tr class="emusik-playlist-item">
  <td><?php print $i; ?></td>
  <td><?php print $title; ?></td>
  <td><?php print $artist; ?></td>
  <td>
    <?php
    print !empty($bibzoom) ? l('', $bibzoom, array('attributes' => array('class' => array('bibzoom')), 'absolute' => TRUE)) : '';
    print !empty($wimp) ? l('', $wimp, array('attributes' => array('class' => array('wimp')), 'absolute' => TRUE)) : '';
    print !empty($spotify) ? l('', $spotify, array('attributes' => array('class' => array('spotify')), 'absolute' => TRUE)) : '';
    ?>
  </td>
</tr>
