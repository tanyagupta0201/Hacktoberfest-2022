/*
Author's name : Priyanshi Rai
Date modified : 2-october-2022
*/
//Program to find love percentage

prompt("Enter 1st name :- ");
prompt("Enter 2nd name :- ");
function loveCalculator(){
    var num=Math.random();
    num=Math.floor(num*100);
    return alert("Your Love percentage is :- " +num + '%');
}
loveCalculator();
