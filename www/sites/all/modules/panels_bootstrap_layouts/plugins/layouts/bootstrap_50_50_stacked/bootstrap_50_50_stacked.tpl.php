<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="">
    <?php print $content['top']; ?>
  </div>
  
  <div class="col-lg-8 col-md-8 col-sm-8 col-xs-12">
    <?php print $content['left']; ?>
  </div>  

  <div class="col-lg-4 col-md-4 col-sm-4 col-xs-12">    
    <?php print $content['right']; ?>
  </div>
  
  <div class="">
    <?php print $content['bottom']; ?>
  </div>
</div>
