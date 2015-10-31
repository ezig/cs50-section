<?php 
	$a = 1 + 1;
	echo "1 + 1 is $a\n";
	$typea = gettype($a);
	echo "$typea\n";

	$b = "1" + "1";
	echo "\"1\" + \"1\" is $b\n";
	$typeb = gettype($b);
	echo "$typeb\n";

	$c = "1" + 1;
	echo "\"1\" + 1 is $c\n";
	$typec = gettype($c);
	echo "$typec\n"; 

	$d = '1' + '1';
	echo "'1' + '1' is $d\n";
	$typed = gettype($d);
	echo "$typed\n"; 
?>