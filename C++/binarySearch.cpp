/*
    Contributed By : Shubham
    Date Modified: 01, October , 2022
    github id : https://github.com/im-shubham
    linkedinId : https://www.linkedin.com/in/shubhamvig/
*/

#include<bits/stdc++.h>
using namespace std;

// BinarySearch implementation
int binarySearch(vector<int> &v, int element_toFind){
    sort(v.begin(),v.end()); //    First Sort the vector/array if it's not already sorted because binary search can only be
    // implemented on monotonic function

    int low =0 , high = v.size()-1; // Search space is whole vector size initially

    while(high - low >1){
        int mid = low +( (high-low) >> 1);   // mid = (low +high)/2 in efficient way using right shift operator...
        if(v[mid]<element_toFind){
            low = mid+1;   // if element_toFind is greater than v[mid] then transfer the low to mid+1
        }else{
            high = mid;
        }


    }
    if(v[low] ==element_toFind ){
        return low;
    }else if(v[high] == element_toFind){
        return high;
    }else{
        return -1;
    }
}

int main(){

    vector<int> v = {2,3,4,7,8,9,12,14,16,17};

    cout<< binarySearch(v,15)<<endl;
    cout<< binarySearch(v,12)<<endl;
    cout<< binarySearch(v,2)<<endl;




    return 0;
}