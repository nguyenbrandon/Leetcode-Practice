#Given a 32-bit signed integer, reverse digits of an integer.
#Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: 
#[−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed 
#integer overflows.
class Solution:
    def reverse(self, x):
        y = str(x)
        if x < 0:
            ans = int('-' + str(y[:0:-1]))
        else:
            ans = int(str(y[::-1]))
            
        if ans > 2147483648 or ans < -2147483648:
            return 0
        else:
            return ans
