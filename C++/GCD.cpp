/*  Author : Rajat Rathore
    Date modified : 1-10-2022  */

#include<iostream>
using namespace std;

int main(){
    // Numbers that you are interested to find gcd .
    int m , n;
    cin >> m >> n;
    while(m % n != 0){   
        int nextm = n;
        int nextn = m % n;
        m = nextm;
        n = nextn;
    } 
    cout << "gcd of given two numbers is " << n << endl;
}