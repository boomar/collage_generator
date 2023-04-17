<?php

//FIRST VISIT
if(empty($_GET['caption']))
{
$images_dir = 'windows';
$caption = 'Add your own text';
$picture_width = 'middlin';
$font_size = '1em';
$page_width = '800';
$page_height = '500';
}

else
{
	//VARIABLES - USER INPUT VIA THE FORM
	//which picture directory?
	$images_dir = 'windows';

	$caption = $_GET['caption'];

	//picture width
	$picture_width = $_GET['picture_width'];

}

?>
