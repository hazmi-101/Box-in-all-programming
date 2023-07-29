<?php

function kotak($o,$p){

$n1 = $p-1;
$a = "┏".str_repeat("━┳",$n1)."━┓";
$b = str_repeat("\n┣".str_repeat("━╋",$n1)."━┫",$o-1);
$c = "\n┗".str_repeat("━┻",$n1)."━┛";
return $a.$b.$c;
}
print kotak(10,7);
print "\n";
?>
