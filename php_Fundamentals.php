<?php //beginning of php code

echo "Hello World!\n"; //prints Hello World to the screen
print "Hello World!\n"; //also prints Hello World to the screen, but can be used in more complex expressions

$Boolean = true; //boolean variable, can be true or false
echo $Boolean."\n"; //prints 1, which is the boolean value of true
$a = 5; //integer variable
$b = 3.14; //float variable
$c = 0x0F; // hexadecimal integer variable, equivalent to 15 in decimal
$d = null; // null variable, represents a variable with no value
$e = 1_234_567; // integer variable with underscores for readability, equivalent to 1234567 in decimal in PHP 7.4 and later
echo $a."\n"; //prints "." is used to concatenate strings and variables
var_dump($a); // var_dump is used to display the type and value of a variable
echo $b."\n"; // prints 3.14, the value of the float variable
var_dump($b); // var_dump is used to display the type and value of a variable
echo $c."\n"; // prints 15, the decimal value of the hexadecimal variable
echo $d."null\n"; // prints nothing, as the null variable has no value
echo $e."\n"; // prints 1234567, the value of the integer variable with underscores
$greeting = "Hello World!"; //string variable
echo $greeting."\n"; //prints Hello World!
echo "The value of a is: ".$a."\n"; // prints the value of a, which is 5
// Arrays
$numbers = [1, 2, 3, 4, 5]; // indexed array
echo $numbers[0]."\n"; // prints 1, the first element of the array
$numbers[4] = 9; // changes the value of the 5th element to 9
unset($numbers[1]); // removes the 2nd element of the array
print_r($numbers); // print_r is used to print the contents of an array
echo count($numbers)."\n"; // prints the number of elements in the array
print count($numbers)."\n"; // also prints the number of elements in the array
// Associative array
$person = ["name" => "John", "age" => 30, "city" => "New York"]; // associative array
echo $person["name"]."\n"; // prints John, the value of the "name" key
$person["age"] = 31; // changes the value of the "age" key to 31
print_r($person);
echo count($person),"\n"; // prints the number of key-value pairs in the associative array
?>