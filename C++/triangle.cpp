
/* Name: Jai Sinha

  Edited : 01 - 10 -2022 */


#include <bits/stdc++.h> 
int minimumPathSum(vector<vector<int>>& triangle, int n){
    vector<vector<int>> dp(n,vector<int> (n,0));
    vector<int> curr(n,0),front(n,0);
    for(int j=0;j<n;j++)
    front[j]=triangle[n-1][j]; // kyuki neeche front[j+1] compute ho rah
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
