//
// Created by authetic on 2019/4/4.
//

/*
 * 将两个数相除，不能用乘除，取模，结果溢出返回INT_MAX~
 * exp(log(a) - log(b))，末尾要加上十位小数，注意
 * 移位异或去正负号的方法！
 */

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == 0 || dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        int sign = ((dividend >> 31) ^ (divisor >> 31)) == 0 ? 1 : -1;
        long a = abs((long)dividend);
        long b = abs((long)divisor);
        double c = exp(log(a) - log(b)) + 0.0000000001;
        return (int)(sign * c);
    }
};