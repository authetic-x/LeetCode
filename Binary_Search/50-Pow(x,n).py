'''
实现类似于Pow函数的功能
递归就行了
注意：python3要用//，它会返回向下取整的整数
    而/返回的是float型！
'''

class Solution(object):
    def myPow(self, x, n):
        if (n < 0):
            return 1.0 / self.myPow(x, -n)
        if (n == 0):
            return 1.0
        v = self.myPow(x, n // 2)
        return v * v * (x if n%2 == 1 else 1)