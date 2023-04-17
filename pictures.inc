<?php


//PICTURES
//list all pictures in the directory
if ($handle = opendir($images_dir))
  {
  //This is the correct way to loop over the directory.
  while (false !== ($file = readdir($handle)))
    {
  if ($file != "." && $file != ".." && $file != ".DS_Store" )
      {
    //put all files into an array
    $pic_array[] = $file;
      }
    }
    closedir($handle);
  }

//count number of pictures in the array
$pic_array_length= count($pic_array);
//echo $pic_array_length;

//take each picture out of the array
foreach ($pic_array as $pic)
{
  $pic = $images_dir.'/'.$pic;

  //get the original image sizes
  $pic_size_array = getimagesize($pic);
  $pic_width = $pic_size_array[0];
  $pic_height = $pic_size_array[1];

  //from the FORM - user input - working out pic sizes
  if ($picture_width == 'tiny')
  {
  $pic_width = ($pic_width/4);
  $pic_height = ($pic_height/4);
  $font_size = '0.6em';
  $page_width = '600';
  $page_height = '400';
  }
  else if ($picture_width == 'middlin')
  {
  $pic_width = $pic_width;
  $pic_height = $pic_height;
  $font_size = '1em';
  $page_width = '800';
  $page_height = '500';
  }
  else if ($picture_width == 'grand')
  {
  $pic_width = ($pic_width*2);
  $pic_height = ($pic_height);
  $font_size = '2em';
  $page_width = '1000';
  $page_height = '600';
  }


  for ($i=0; $i<=20; $i++)
  {
    // positioned at random
    //top indent- random
    $topindent = rand ($pic_height, ($page_height-$pic_height)).'px';

    //left indent - random
    $leftindent = rand (0, ($page_width - $pic_width)).'px';

    //pic width
    $width = rand ($i, ($pic_width/2)).'px';

    //put picture into a div, with opacity

    $opacity = (rand(1, 100)/100);
    //echo $opacity;

    echo
    "<div id ='$i' style='position:absolute; border: 2px gold solid; position:absolute; top:$topindent; left:$leftindent; opacity: $opacity;'><img src='$pic' width=$width></div>";

    //CAPTION
    echo "<div id ='$i' style='position:absolute; width:$width; top:$topindent; left:$leftindent; font-family: arial,sans-serif; background-color:blue; font-size:$font_size; color:gold;'>";
    echo $caption;
    echo "</div>";
  }
}

?>
