/*
    Authors Name: Prakhar Agarwal
    Date Modified: 1 October, 2022
*/

include <iostream>
using namespace std;

void reverse(int n){
  if(n<10){
    cout<<n;
    return;
  }
  else{
    cout<<n%10;
    reverse(n/10);
  }
}
int main() {
  int n=123456789;
  reverse(n);
  return 0;
}