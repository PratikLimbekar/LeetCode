/*Problem: Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
  */

/*Learnt: String Manipulation and touched upon Sliding Window technique*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int a = needle.length();
        int b = haystack.length();
        if (a > b) {
            return -1;
        }
        for (int i = 0; i < b; i++) {
            if (i+a <= b) {
                string substr = haystack.substr(i,a);
                if (substr == needle) {
                    return i;
                }
            }
        }
    return -1;
    }
};
