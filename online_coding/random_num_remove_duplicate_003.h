//
// Created by joan on 19-8-3.
//

#ifndef OFFER_EXERCISE_RANDOM_NUM_REMOVE_DUPLICATE_003_H
#define OFFER_EXERCISE_RANDOM_NUM_REMOVE_DUPLICATE_003_H


#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(void)
{
    int num=0;
    while(cin >> num)
    {
        set<int> inArr;
        for(int i=0; i< num; i++)
        {
            int tmp;
            cin >> tmp;
            inArr.insert( tmp );
        }
        for(auto & item: inArr)
        {
            cout << item << endl;
        }
    }
}



//#include <iostream>
//using namespace std;
//int main() {
//    int N, n;
//    while (cin >> N) {
//        int a[1001] = { 0 };
//        while (N--) {
//            cin >> n;
//            a[n] = 1;
//        }
//        for (int i = 0; i < 1001; i++)
//            if (a[i])
//                cout << i << endl;
//    }
//    return 0;
//}


#endif //OFFER_EXERCISE_RANDOM_NUM_REMOVE_DUPLICATE_003_H
