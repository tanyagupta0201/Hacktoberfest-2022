/*
Name : Jai Sinha
Date : 01 October 2022*/

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Base Cases.
    vector<vector<int>> dp(n, vector<int>(4, 0));
    dp[0][0]=max(points[0][1],points[0][2]);
    dp[0][1]=max(points[0][2],points[0][0]);
    dp[0][2]=max(points[0][1],points[0][0]);
    dp[0][3]=max(points[0][1],max(points[0][0],points[0][2]));
    for(int j=1;j<n;j++)
    {
    for(int i=0;i<=3;i++)
    {
        dp[j][i]=0;
        int maxi=0;
      for(int k=0;k<3;k++)
      {
        if (i != k)
            maxi = max(maxi,dp[j - 1][k]+points[j][k]);  //max element with points
      }
        dp[j][i]=maxi;
    }
   }
    return dp[n-1][3];  //last line of the dp table
}
