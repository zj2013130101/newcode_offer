//
// Created by joan on 19-7-19.
//

#ifndef OFFER_EXERCISE_PRINT_LIST_H
#define OFFER_EXERCISE_PRINT_LIST_H


class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> res;
        if(head == nullptr)
            return res;
        stack<int> s;
        ListNode* pos = head;
        while(pos != nullptr)
        {
            s.push(pos->val);
            pos = pos->next;
        }
        while(!s.empty())
        {
            res.push_back(s.top());
            s.pop();
        }
        return res;
    }
};



class Solution2 {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        deque<int> res;
        if(head == nullptr)
            return vector<int>(res.begin(), res.end());
        while(head!= nullptr)
        {
            res.push_front(head->val);
            head = head->next;
        }
        return vector<int>(res.begin(), res.end());
    }
};





#endif //OFFER_EXERCISE_PRINT_LIST_H
