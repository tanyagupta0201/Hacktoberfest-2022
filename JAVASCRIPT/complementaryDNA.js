/*
    Authors Name : Adrian Ramadhan
    Date Modified: 2 Oktober, 2022
    Problem: https://www.codewars.com/kata/554e4a2f232cdd87d9000038
*/

// Complementary DNA problem solution

function DNAStrand(dna) {
  let sequence = {
    A: 'T',
    T: 'A',
    G: 'C',
    C: 'G',
  };
  return dna.replace(/A|T|G|C/g, function (matched) {
    return sequence[matched];
  });
}
