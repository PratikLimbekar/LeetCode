/*Problem: Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.*/

/*Learnt: String Iteration*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int last = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                length++;
            }
            else {
                if (length != 0) {
                    last = length;
                    cout << last << endl;
                }
                length = 0;
            }
        }
        if (length != 0) {
            return length;
        }
        return last;
    }
};
