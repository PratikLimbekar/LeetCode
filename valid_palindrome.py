"""
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.
"""

#LEarnt: string manipulation
#Actual way of solving: 2 pointers

class Solution:
    def isPalindrome(self, s: str) -> bool:
        a = []
        for i in s:
            if i.isalpha() or i.isnumeric():
                a.append(i.lower())
        for i in range(0, len(a)):
            if a[i] != a[-(i+1)]:
                return False
        return True
