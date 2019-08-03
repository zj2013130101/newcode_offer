//
// Created by joan on 19-7-29.
//

#ifndef OFFER_EXERCISE_QINGWA_TIAOTAIJIE2_012_H
#define OFFER_EXERCISE_QINGWA_TIAOTAIJIE2_012_H


/**
 * 青蛙跳台阶问题２：一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。
 * 求该青蛙跳上一个n级的台阶总共有多少种跳法。
 *
 * 青蛙跳台阶思路：(1)第一次跳１阶，此时跳法数目等于剩下的n-1阶台阶的跳法数目：f(n-1)
 *              (2)第二次跳２阶，此时跳法数目等于剩下的ｎ-2阶台阶的跳法数目：f(n-2)
 *              .
 *              .
 *              .
 *
 *              ｎ阶台阶的跳法数目：f(n) = f(n-1) + f(n-2) + ... + f(1);
 *              f(1) = 1;
 *
 */

class Solution {
public:
    int jumpFloorII(int number) {
        if(number==1)
            return 1;
        int result = 0;
        int fMinusOne = 1;
        vector<int> midVal;
        for(int i=1; i <= number; i++)
        {
            midVal.push_back(fMinusOne);
            result = sumOfVec(midVal);
            fMinusOne = result;
        }
        return result;
    }

    int sumOfVec(vector<int>& arr)
    {
        int sum=0;
        for(auto& elem : arr)
        {
            sum+= elem;
        }
        return sum;
    }
};









#endif //OFFER_EXERCISE_QINGWA_TIAOTAIJIE2_012_H
