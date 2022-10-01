
/*
    Authors Name : Muahmmed Shiyadh
    Date Modified: 01 October, 2022


Problem Link: https://leetcode.com/problems/power-of-two/

Idea:
If a number is a power of 2, we can observe that it will always have just a single set bit in its binary representation.
So, we can just count number of set bits and determine if n is power of 2 or not from that.

There's a nice bit-trick that can be used to check if a number is power of 2 efficiently.
As already seen above, n will only have 1 set bit if it is power of 2.
Then, we can AND (&) n and n-1 and if the result is 0, it is power of 2.
This works because if n is power of 2 with ith bit set, then in n-1, i will become unset and all bits to right of i will become set.
Thus the result of AND will be 0.

Solution:
*/
    bool isPowerOfTwo(int n) {
        if(n&(n-1)==0) return true;
        else return false;
    }
