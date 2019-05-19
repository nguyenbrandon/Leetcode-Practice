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
