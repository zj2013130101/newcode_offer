//
// Created by lx on 19-8-3.
//

#ifndef OFFER_EXERCISE_WANGYI_ONLINE_CODING_H
#define OFFER_EXERCISE_WANGYI_ONLINE_CODING_H



/**
 * 网易在线编程题１和3答案
 */

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main(void)
//{
//    int stuNum=0;
//    while(cin >> stuNum)
//    {
//        vector<int> scoreArr;
//        vector<int> tmpArr;
//        for(int i=0; i< stuNum; i++)
//        {
//            int score=0;
//            cin >> score;
//            scoreArr.push_back(score);
//            tmpArr.push_back(score);
//        }
//        sort(tmpArr.begin(), tmpArr.end());
//
//        int qureyNum=0;
//        cin >> qureyNum;
//        while(qureyNum--)
//        {
//            int stuId=0;
//            cin >> stuId;
//            int lowerScoreCount=0;
//            for(int i=0; i< tmpArr.size() && tmpArr[i] <= scoreArr[stuId-1]; i++)
//            {
//                lowerScoreCount++;
//            }
//            double result = (static_cast<double>(lowerScoreCount-1)/ static_cast<double>(stuNum)) * static_cast<double>(100);
//            printf("%6f", result);
//        }
//    }
//}


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
    int qureyNum;
    while(cin >> qureyNum)
    {
        vector<int> numSet;
        for(int i=0; i< qureyNum ; i++)
        {
            int op=0;
            int num=0;
            cin >> op >> num;
            if(op == 1)
            {
                numSet.push_back(num);
            }else if(op == 2)
            {
                if(num==0)
                {
                    int i=0;
                    for(auto & item : numSet)
                    {
                        if(item == 0)
                        {
                            cout << "YES\n";
                            break;
                        }
                        i++;
                    }
                    if(i >= numSet.size())
                    {
                        cout << "NO\n";
                    }
                }else if(find(numSet.begin(), numSet.end(), num) != numSet.end()){
                    cout << "YES\n";
                }
                else{
                    int tmp=1;
                    int flag=1;
                    while(tmp <= num)
                    {
                        if(tmp&num)
                        {
                            auto itr = find_if(numSet.begin(), numSet.end(), [&](int item){
                                return item/tmp == 0;
                            });
                            if(itr==numSet.end())
                            {
                                flag=0;
                                break;
                            }
                        }
                        tmp *=2;
                    }
                    if(flag)
                        cout << "YES\n";
                    else
                        cout << "NO\n";
                }

            }
        }
    }
    return 0;
}




#endif //OFFER_EXERCISE_WANGYI_ONLINE_CODING_H
