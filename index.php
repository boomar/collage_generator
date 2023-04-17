<?php
//INITIAL - CHECK VARIABLES
include ('variables_check.inc');

//HTML
echo "<HTML>";
echo "<HEAD>
<TITLE>Make a broken window collage</TITLE>

<style>
.grid-container {
  display: grid;
  grid-template-columns: auto auto;
  background-color: #2196F3;
  padding: 10px;
}
.grid-item {
  background-color: rgba(255, 255, 255, 0.8);
  border: 1px solid rgba(0, 0, 0, 0.8);
  padding: 20px;
  font-size: 30px;
  text-align: center;
}
</style>
</HEAD>";

echo "<BODY>";

echo
"<div class="grid-container">
		<div class="grid-item" width:$page_width; height:$page_height;>";
		include ('pictures.inc');
		echo "</div>";"
  	<div class="grid-item">";
		include ('entry_form.inc');
		echo"</div>";"
</div>";

echo "</BODY>";
echo "</HTML>";

?>
