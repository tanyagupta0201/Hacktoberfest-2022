//Program to reverse sentence using stack

#include <iostream>
#include<stack>

using namespace std;

void reversesentence(string s){
    stack<string> st;                      //we created a stack of string data type
    
    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=' ' && i<s.length()){
            word+=s[i];                  //here we are taking individual words
            i++;
        }
        st.push(word);                   //pushing on to the stack
    }
    
    while(!st.empty()){
        cout<<st.top()<<" ";  //As Stack uses FIFO(first in first out) the word pushed last will be printed first and so on
        st.pop();
    }
    cout<<endl;
}


int main()
{
   string s;
  cout<<"Enter sentence you want to reverse: "<<endl;
  getline(cin,s);            //taking sentence as input from the user using getline funtion which reads line of text
  cout<<"The reversed sentence is: "<<endl;
  reversesentence(s);

    return 0;
}


