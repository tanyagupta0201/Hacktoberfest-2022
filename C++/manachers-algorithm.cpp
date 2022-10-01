//Author name : Mohit Kumar Goyal
//Modify date : 1st october




// C++ solution for Longest Palindromic Substring (Manacher's Algorithm)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// A function to print a substring.
void printSubstring(string str, int left, int right){
    for (int i = left; i <= right; i++)
        cout << str[i];
}

// Implementation of Manacher's Algorithm
void longestPalSubstring(string s){
    /*
        If length of given string is n then its length after
        inserting n+1 "#", one "@", and one "$" will be
        (n) + (n+1) + (1) + (1) = 2n+3
    */
    int strLen = 2 * s.length() + 3;
    char* sChars = new char[strLen];

    /*
        Inserting special characters to ignore special cases
        at the beginning and end of the array
        "abc" -> @ # a # b # c # $
        "" -> @#$
        "a" -> @ # a # $
    */
    sChars[0] = '@';
    sChars[strLen - 1] = '$';
    int t = 1;

    for (char c : s){
        sChars[t++] = '#';
        sChars[t++] = c;
    }
    sChars[t] = '#';

    int maxLen = 0;
    int start = 0;
    int maxRight = 0;
    int center = 0;
    int* p = new int[strLen]; // i's radius, which doesn't include i

    for(int i = 1; i < strLen - 1; i++){
        if (i < maxRight){
            p[i] = min(maxRight - i, p[2 * center - i]);
        }

        // Expanding along the center
        while (sChars[i + p[i] + 1] == sChars[i - p[i] - 1]){
            p[i]++;
        }

        // Updating center and its bound
        if (i + p[i] > maxRight){
            center = i;
            maxRight = i + p[i];
        }

        // Updating ans
        if (p[i] > maxLen){
            start = (i - p[i] - 1) / 2;
            maxLen = p[i];
        }
    }

    // Printing the longest palindromic substring
    cout << "The Longest Palindromic Substring is: ";
    printSubstring(s, start, start + maxLen - 1);
}

// Driver Code
int main(){
    string str = "daabddfddbegtd";

    longestPalSubstring(str);
    return 0;
}