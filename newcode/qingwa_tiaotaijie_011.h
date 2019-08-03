//
// Created by joan on 19-7-29.
//

#ifndef OFFER_EXERCISE_QIGNWA_TIAOTAIJIE_011_H
#define OFFER_EXERCISE_QIGNWA_TIAOTAIJIE_011_H



/**
 * 青蛙跳台阶问题：一只青蛙一次可以跳上1级台阶，也可以跳上2级。
 * 求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。
 *
 *
 * 青蛙跳台阶思路：(1)第一次跳１阶，此时跳法数目等于剩下的n-1阶台阶的跳法数目：f(n-1)
 *              (2)第二次跳２阶，此时跳法数目等于剩下的ｎ-2阶台阶的跳法数目：f(n-2)
 *              ｎ阶台阶的跳法数目：f(n) = f(n-1) + f(n-2)
 *
 * 类似于斐波拉切数列
 */


class solution{
    int jumpFloor(int number)
    {
        if(number==0)
            return 0;
        if(number==1)
            return 1;
        if(number==2)
            return 2;
        int littleNum = 1;
        int bigNum = 2;
        int result;
        while( (number--) >= 3 )
        {
            result = littleNum + bigNum;
            littleNum = bigNum;
            bigNum = result;
        }
        return result;
    }
};



#endif //OFFER_EXERCISE_QIGNWA_TIAOTAIJIE_011_H
