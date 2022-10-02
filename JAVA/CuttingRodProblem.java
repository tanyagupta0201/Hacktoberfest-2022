/*
Code: Cutting Rod Problem
Name: Abhishek Dharmik
Date of Modification: 02 October, 2022

Explanation:

Given a rod of length n inches and an array of prices that includes prices
of all pieces of size smaller than n. Determine the maximum value obtainable
by cutting up the rod and selling the pieces. For example, if the length of
the rod is 8 and the values of different pieces are given as the following,
then the maximum obtainable value is 22 (by cutting in two pieces of lengths 2 and 6) 

length   | 1   2   3   4   5   6   7   8  
-----------------------------------------
price    | 1   5   8   9  10  17  17  20

And if the prices are as following, then the maximum obtainable value is 24
(by cutting in eight pieces of length 1) 

length   | 1   2   3   4   5   6   7   8  
-----------------------------------------
price    | 3   5   8   9  10  17  17  20

*/

public class CuttingRodProblem {    
/*
        Dynamic Programming Approach Iterative Solution
        Time Complexity: O(n2)
        Auxiliary Space: O(n2)
*/

    public static void main(String[] args) {
        int prices[] = new int[] { 1, 5, 8, 9, 10, 17, 17, 20 };
        int n = prices.length; 
        System.out.println("Maximum obtained value is " + cutRod(prices, n));
    }

    public static int cutRod(int prices[], int n) {
        int mat[][] = new int[n + 1][n + 1];
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                if (i == 0 || j == 0) {
                    mat[i][j] = 0;
                }
                else {
                    if (i == 1) {
                        mat[i][j] = j * prices[i - 1];
                    } else {
                        if (i > j) {
                            mat[i][j] = mat[i - 1][j];
                        } else {
                            mat[i][j] = Math.max(prices[i - 1] + mat[i][j - i], mat[i - 1][j]);
                        }
                    }
                }
            }
        }
 
        return mat[n][n];
    }
}
