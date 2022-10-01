/*
  Author: Parth
  Date Updated: 1 Oct 2022
*/
#include<iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the number to be searched: ";
	cin>>m;
	int index=-1;
	for(int i=0;i<n;i++){
		if(arr[i]==m){
			index = i;
			break;
		}
	}
	if(index==-1){
		cout<<"Number not found";
	}
	else{
		cout<<"Number found at index "<<index;
	}
}
