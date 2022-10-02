#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

vector<int> twoSum(int* ar1, int* ar2, int n, int m)
{
    vector<int> sum;
    int j = m-1, i = n-1;
    int s = 0,c = 0;
    int g;
    int k = max(n,m) - 1;
    int res[k];
    while(k>=0)
    {
        s = c;
        if(i>=0)
            s = s + ar1[i];
        if(j>=0)
            s = s + ar2[j];
        c = s/10;        
        g = s%10;
        res[k] = g;
        j--;
        k--;
        i--;
    }
    if(c!=0)
    {
        cout<<c<<"";
    }
    for (int i = 0; i < max(n,m); i++)
    {
        sum.push_back(res[i]);
    }
    return sum;
}
int main()
{
int n, m;
cin>>n>>m;
int ar1[n];
int ar2[m];
for (int i = 0; i < n; i++)
{
    cin>>ar1[i];
}
for (int i = 0; i < m; i++)
{
    cin>>ar2[i];
}
cout<<"\n  ";
for (int i = 0; i < n; i++)
{
    cout<<ar1[i]<<" ";
}
cout<<"\n+ ";
for (int i = 0; i < abs(n-m); i++)
{
    cout<<"  ";
}

for (int i = 0; i < m; i++)
{
    cout<<ar2[i]<<" ";
}
cout<<endl;
for (int i = 0; i < max(n,m) + 1 ; i++)
{
    cout<<"--";
}
cout<<endl;
vector<int> v = twoSum(ar1,ar2,n,m);
cout<<" ";
for(auto &i : v)
    cout<<i<<" ";
getch();
return 0;
}