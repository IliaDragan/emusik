<?php
/**
 * @file
 * Search header (facet groups) template.
 */
?>
<div class="region-content">
  <div class="grid-3 alpha">&nbsp;</div>
  <div class="grid-9 omega">
    <div class="mkdru-facet-section">
      <div class="mkdru-facet-groups">
        <a href="/search/meta/<?php echo $search_query ?>#query=<?php echo $search_query ?>&amp;limit_Type=album%7Ctrack%7Cartist&amp;facet_group=streaming"><?php echo t('Streaming Services') ?> (<span class="mkdru-facet-group-amount streaming">0</span>)</a>
        <a href="/search/meta/<?php echo $search_query ?>#query=<?php echo $search_query ?>&amp;limit_Type=video&amp;facet_group=videos"><?php echo t('Videos') ?> (<span class="mkdru-facet-group-amount videos">0</span>)</a>
        <a href="/search/meta/<?php echo $search_query ?>#query=<?php echo $search_query ?>&amp;limit_Type=text&amp;facet_group=books"><?php echo t('Books and sheet music') ?> (<span class="mkdru-facet-group-amount books">0</span>)</a>
        <a href="/search/meta/<?php echo $search_query ?>" class="active"><?php echo t('Editorial') ?> (<span class="mkdru-facet-group-amount editorial">0</span>)</a>
      </div>
    </div>
  </div></div>
