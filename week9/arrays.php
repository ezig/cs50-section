<?php

// arrays are associative (key, value pairs)
$array = ["Ezra" => "Zigmond", "David" => "Malan"];

echo "{$array['Ezra']}\n";
echo "{$array['David']}\n";

// but you can also use "normal" arrays like C
$array2 = [1, 2, 3];

echo "{$array2[1]}\n";

// iterating through an array without keys
$arr = array(1, "two", "three");
foreach ($arr as $value) {
	echo "Value: $value\n";
}

// but every array as implicit keys...
foreach ($arr as $key => $value) {
	echo "Index: $key Value: $value\n";
}

// example with explicit keys
$arr = ["1" => "one", "2" => "two", "3" => "three"];
foreach ($arr as $key => $value) {
	echo "Key: $key. Value: $value\n";
}

?>