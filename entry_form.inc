<?php

//FORM - CONTROL PANEL
echo "<div style= border:solid red 2px;"

echo
"<FORM ACTION='index.php' METHOD='GET'>";

echo"
<br />
<br />";

echo "Add some text
<br />";
echo"<input type='text' size='40' name='caption'>";

echo"
<br />
<br />";

echo"Choose a collage size ";
echo"<select name='picture_width'>
<option value='tiny'>tiny</option>
<option value='middlin'>middlin</option>
<option value='grand'>grand</option>
</select>";

echo"
<br />
<br />";

echo"<input type='submit' value='make the collage'>
</FORM>";

echo"</div>";
?>
