<?php
    $id = $_GET["id"];

    if(is_null($id)){
        die("Post not found");
    }
?>

<?php if($user): ?>
<div>
    <?php if(!$favorite): ?>
        <form method="POST">
            <input type="hidden" name="form" value="add">

            <button type="submit>Add to favorites</button>
        </form>
    <?php else: ?>
        <form method="POST">
            <input type="hidden" 
</div>