""" 
Given a positive integer num, return true if num is a perfect square or false otherwise.

A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.

You must not use any built-in library function, such as sqrt.
"""

"""Learnt: while loop and logic"""

class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        i = 0
        while i*i<=num:
            if i*i == num:
                return True
                break
            i=i+1
