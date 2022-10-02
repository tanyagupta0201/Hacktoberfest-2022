/*Name-:Kashish Verma
 Edited on -:02 October 2022 */

// C++ program for calculating total number of paths 
/*Consider an n×n grid whose
 squares may have traps. 
 It is not allowed to move to a square with a trap.
Your task is to calculate the number of paths from
 the upper-left square to the lower-right square. 
 You can only move right or down.

 solved using recursion with memoization 
*/ 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define double long double
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define print1(a) for(auto x:a)cout<<x.F<<" "<<x.S<<endl
const int M=1e9+7;
int f(vector<vector<int>>&vec,int i,int j,int n
    ,vector<vector<int>>&dp){
    if(i==n&j==n){
        if(vec[i][j]==2){
            return 0;
        }
        return 1;
    }
    if(i>n||j>n){
        return 0;
    }
    if(vec[i][j]==2){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j]%M;
    }
return dp[i][j]=(f(vec,i+1,j,n,dp)+f(vec,i,j+1,n,dp))%M;
 
 
}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
int a;
cin>>a;
vector<vector<int>>vec(a,vector<int>(a,0));
vector<vector<int>>dp(a,vector<int>(a,-1));
for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        char t;
        cin>>t;
        if(t=='.'){
            vec[i][j]=1;
        }
        else{
            vec[i][j]=2;
        }
    }
}
 
cout<<f(vec,0,0,a-1,dp);

 
    return 0;
}
/*

input
10
..........
..........
..........
..........
...

user output
48620



input
10
.*......*.
...*...*..
......*...
...*.*....
...


user output
344
*/