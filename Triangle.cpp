/* Name-:Jai Sinha
Edited on 1st October */


#include <bits/stdc++.h> 
int minimumPathSum(vector<vector<int>>& triangle, int n){
	// Write your code here.
    vector<vector<int>> dp(n,vector<int> (n,0));
    vector<int> curr(n,0),front(n,0);
    for(int j=0;j<n;j++)
    front[j]=triangle[n-1][j]; // because down front[j+1] is begin computed
    for(int i=n-2;i>=0;i--)
    {
        for(int j=i;j>=0;j--)
        {
            int a=triangle[i][j]+front[j];
            int b=triangle[i][j]+front[j+1];
            return curr[j]=min(a,b);
        }
        front=curr;
    }
    return front[0];
}
