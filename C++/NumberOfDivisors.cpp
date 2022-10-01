/*
    Authors Name : Anamika Pandey
    Date Modified: 2 October,2022
*/


#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,count=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                if(i%3==0)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;

}
