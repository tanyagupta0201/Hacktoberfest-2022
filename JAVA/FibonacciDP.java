/*

    Code: Fibonacci using Dynamic Programming (JAVA)
    Name: Nikhil Sharma
    Date of Modification: 1 October, 2022
    
*/

import java.util.*;

public class FibonnaciDP {
  
    /*
    
    In recursion same function having similar value may be called multiple times
    so to reduce space and time we can just store them in array dp
    this is what is called : memoization (dynamic allocation)

    */
  
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number to find its fibonacci value : "); //taking user input
        int n = sc.nextInt();

        //create array for memoization;
        int dp[] = new int[n+1];

        int fibMemoized = fiboDp(n,dp);
        System.out.println("Fibo value of "  + n + " : " + fibMemoized);
        sc.close();
    }

    static int fiboDp(int n,int dp[]){
      //normal recursion
        if(n==0 || n==1) return n;

      /*
      
      Time Complexity :
      O(n) [exponential]
      Here every Fib(n) will be called only once, because next time the value will be retrieved from the qb.
      Thus, it will take O(1) per call, hence n*O(1) = O(n)
      
      */
      
      /*
      
      SPACE COMPLEXITY :
      O(n) [linear]
      Here we are using an additional qb[] array to store the results,
      which will add to the runtime stack space complexity.
      Thus overall space complexity is O(n+n) which is the same as O(n)  
       
      */
      
        //if answer is found return
        if(dp[n]!=0) return dp[n];

        //storing every value
        int x = fiboDp(n-1,dp);
        int y = fiboDp(n-2,dp);
        int ans = x + y;

        //storing values in dp array
        dp[n] = ans;

        return fiboDp(n-1,dp) + fiboDp(n-2,dp);
    }
}
