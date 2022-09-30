
#include <bits/stdc++.h>
using namespace std;
int minSubsetSumDifference(vector<int>& arr, int n){
    int k=accumulate(arr.begin(),arr.end(),0);
    vector<vector<bool>> dp(n,vector<bool>(k+1,false));
    for(int i=0; i<n; i++){
        dp[i][0] = true;
    }
    if(arr[0]<=k)
        dp[0][arr[0]] = true;
    for(int ind = 1; ind<n; ind++){
        for(int target= 1; target<=k; target++){
            bool notTaken = dp[ind-1][target];
            bool taken = false;
                if(arr[ind]<=target)
                    taken = dp[ind-1][target-arr[ind]];
            dp[ind][target]= notTaken||taken;
        }
    }
    int maxi=1e8;
    for(int i=0;i<=k;i++)
    {
        if(dp[n-1][i]==true)
            maxi=min(maxi,abs(i-(k-i)));
}
    return maxi;
}
