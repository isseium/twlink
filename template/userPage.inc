<?php require('header.inc');?>

<h2><img src="http://img.tweetimag.es/i/<?php echo urlencode($view['user']); ?>"/>
  <a href="?action=user&user=<?php echo urlencode($view['user']); ?>"><?php echo esc($view['user']);?></a>
</h2>
<div class="center">
  <p>
    <form method="post">
      <input type="text" name="tag" />
      <input type="submit" value="タグ登録" />
      <input type="hidden" name="action" value="link" />
      <input type="hidden" name="target" value="<?php echo esc($view['user']); ?>" />
    </form>
  </p>
  
  <?php foreach($view['data'] as $v){?>
  <div class="<?php
if(empty($v[1])){
echo 'tag-piece-min';
}else{
echo 'tag-piece';
}
?>">
    <h2><a href="?action=tag&tag=<?php echo urlencode($v[0]); ?>"><?php echo esc($v[0]); ?></a></h2>
    <div class="desc"><?php echo esc($v[1]); ?></div>
  </div>
  <?php
       }
       ?>
  <br class="clbr" />
</div>
<?php require('footer.inc');?>
