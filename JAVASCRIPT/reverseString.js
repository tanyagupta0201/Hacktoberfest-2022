/*
Author's Name: Madhu Saini
Date Modified: 2 October, 2022
*/

// 1)
function reverseString(str) {
    // split() method to return a new array
    var splitString = str.split(""); // var splitString = "hello".split("");
    // ["h", "e", "l", "l", "o"]
 
    // reverse() method to reverse the new created array
    var reverseArray = splitString.reverse(); // var reverseArray = ["h", "e", "l", "l", "o"].reverse();
    // ["o", "l", "l", "e", "h"]
 
    // join() method to join all elements of the array into a string
    var joinArray = reverseArray.join(""); // var joinArray = ["o", "l", "l", "e", "h"].join("");
    // "olleh"
    
    // Return the reversed string
    return joinArray; // "olleh"
} 
console.log(reverseString("hello"));


// 2)
function reverseString2(str) {
    return str.split("").reverse().join("");
}
console.log(reverseString2("hello"));


// 3) 
function reverseString3(str) {
    return (str === '') ? '' : reverseString(str.substr(1)) + str.charAt(0);
  }
  console.log(reverseString3("hello"));
