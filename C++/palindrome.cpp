// Author name: Abhijit Mondal
// Date: 3/10/2022


// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string S)
{
	string P = S;
	reverse(P.begin(), P.end());
	if (S == P) {
		return "Yes";
	}
	else {
		return "No";
	}
}

// Driver Code
int main()
{
	string S = "ABCDCBA";
	cout << isPalindrome(S);

	return 0;
}
