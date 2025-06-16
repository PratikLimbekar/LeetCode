"""Given an integer n, return true if it is a power of three. Otherwise, return false.

An integer n is a power of three, if there exists an integer x such that n == 3x."""

#Learnt: logic

class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        i = 0
        while 3**i <= n:
            if 3**i == n:
                return True
            i=i+1
