//
// Created by joan on 19-7-29.
//

#ifndef OFFER_EXERCISE_FIBONACCI_NUM_010_H
#define OFFER_EXERCISE_FIBONACCI_NUM_010_H



/**
 * 递归的做法，效率不好。问题：存在很多重叠子问题的重复计算
 *  解决办法：采用循环，将中间子问题的结果保存下来，参与后面的计算
 */

class Solution1 {
public:
    int Fibonacci(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
};




/**
 * 循环，保存中间子问题的结果
 */

class Solution{
public:
    int Fibonacci(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        int littleNum = 0;
        int bigNum = 1;
        int result = 0;
        for(int i=2; i <= n ; i++)
        {
            result = littleNum + bigNum;
            littleNum = bigNum;
            bigNum = result;
        }
        return result;
    }
};


class Solution2 {
public:
    int Fibonacci(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        int littleNum = 0;
        int bigNum = 1;
        int result = 0;
        while( n > 2)
        {
            result = bigNum + littleNum;
            littleNum = bigNum;
            bigNum = result;
            n--;
        }
        return result;
    }
};


#endif //OFFER_EXERCISE_FIBONACCI_NUM_010_H
