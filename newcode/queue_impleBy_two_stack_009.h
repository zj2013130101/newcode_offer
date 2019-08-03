//
// Created by joan on 19-7-19.
//

#ifndef OFFER_EXERCISE_QUEUE_IMPLEBY_TWO_STACK_009_H
#define OFFER_EXERCISE_QUEUE_IMPLEBY_TWO_STACK_009_H


/**
 * 用两个堆栈实现一个队列
 *  思路：stack1执行队列的入队操作，stack2执行队列的出队操作。
 *      当执行入队操作时，将stack2的所有元素都push到stack1，然后执行当前节点入队操作；
 *      当执行出队操作时，将stack2的所有元素都push到stack2，然后执行出队操作；
 */

class Solution
{
public:
    void push(int node) {
        while(stack2.size())
        {
            stack1.push(stack2.top());
            stack2.pop();
        }
        stack1.push(node);
    }

    int pop() {
        while(stack1.size())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
        int res = stack2.top();
        stack2.pop();
        return res;
    }

private:
    stack<int> stack1;    //push op
    stack<int> stack2;    //pop op
};



/**
 * 用两个堆栈实现一个队列
 *  思路2(改进)：stack1执行队列的入队操作，stack2执行队列的出队操作。
 *      当执行入队操作时，直接将当前节点push到stack1，执行入队操作；
 *      当执行出队操作时，首先判断上次stack2中的元素是否已经pop完，如果没有直接pop，执行出队操作；
 *                     如果stack2为空，则将stack1的所有元素都push到stack2，然后pop执行出队操作；
 */

class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if(stack2.empty())
        {
            while(stack1.size())
            {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        int res = stack2.top();
        stack2.pop();
        return res;
    }

private:
    stack<int> stack1;    //push op
    stack<int> stack2;    //pop op
};



#endif //OFFER_EXERCISE_QUEUE_IMPLEBY_TWO_STACK_009_H
