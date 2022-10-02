/*
    Author's Name: Shreyas Kamath
    Date Modified: 02-10-2022
*/

#include <iostream>
using namespace std;

int FindPeakElement(int a[],int k){
    int s=0,e,m;
    e=k-1;
    while(s<e){
        m=s+(e-s)/2;
        if(a[m]<a[m+1]){
            s=m+1;

        }
        else{
            e=m;
        }
       
    }
     return s;
}


int main(){
    int a[7]={1,2,1,3,5,6,4};
    int c=FindPeakElement(a,7);
    cout<<c;
}