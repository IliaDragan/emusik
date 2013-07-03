<?php
/**
 * @file
 * Single playlist item template.
 *
 * Available variables:
 *   $i
 *   $title
 *   $artist
 *   $bibzoom(soundcloud)
 *   $wimp
 *   $spotify
 */

?>
<tr class="emusik-playlist-item">
  <td><?php print $i; ?></td>
  <td><?php print $title; ?></td>
  <td><?php print $artist; ?></td>
  <td>
    <?php
    print !empty($bibzoom) ? l('', $bibzoom, array('attributes' => array('class' => array('soundcloud'), 'target'=>'_blank'), 'absolute' => TRUE)) : '';
    print !empty($wimp) ? l('', $wimp, array('attributes' => array('class' => array('wimp'), 'target'=>'_blank'), 'absolute' => TRUE)) : '';
    print !empty($spotify) ? l('', $spotify, array('attributes' => array('class' => array('spotify'), 'target'=>'_blank'), 'absolute' => TRUE)) : '';
    print !empty($bibliotek) ? l('', $bibliotek, array('attributes' => array('class' => array('bibliotek'), 'target'=>'_blank'), 'absolute' => TRUE)) : '';
    print !empty($youtube) ? l('', $youtube, array('attributes' => array('class' => array('youtube'), 'target'=>'_blank'), 'absolute' => TRUE)) : '';
    ?>
  </td>
</tr>
