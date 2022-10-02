/*
    Authors Name : Adrian Ramadhan
    Date Modified: 2 Oktober, 2022
    Problem: https://www.codewars.com/kata/5502c9e7b3216ec63c0001aa
*/

// Categorize New Member Solution

function openOrSenior(data) {
  let member = [];
  for (let i = 0; i < data.length; i++) {
    if (data[i][0] > 54 && data[i][1] > 7) {
      member.push('Senior');
    } else {
      member.push('Open');
    }
  }
  return member;
}
