//
// Created by joan on 19-8-3.
//

#ifndef OFFER_EXERCISE_COUNTING_CHAR_NUM_002_H
#define OFFER_EXERCISE_COUNTING_CHAR_NUM_002_H



#include<iostream>
#include<string>

using namespace std;




int main()
{
    string line;
    int LowerToUpper = 'a' - 'A';
    while(getline(cin, line))
    {
        char inputChar;
        cin >> inputChar;
        if(inputChar >= 'a' && inputChar <= 'z')
        {
            inputChar -=  LowerToUpper;
        }
        int num=0;
        for(char& item: line)
        {
            if(item >= 'a' && item <= 'z')
            {
                item -= LowerToUpper;
            }
            if(item == inputChar)
            {
                num++;
            }
        }
        if(line.empty())
        {
            continue;
        }
        cout << num << endl;
    }
    return 0;
}




//#include <iostream>
//#include <string>
//#include <cctype>
//
//using namespace std;
//
//
//int main() {
//
//    string line;
//    int LowerToUpper = 'a' - 'A';
//    while(getline(cin, line))
//    {
//        char inputChar;
//        cin >> inputChar;
//
//        inputChar = toupper(inputChar);
//
//        int num=0;
//        for(char& item: line)
//        {
//            item = toupper(item);
//            if(item == inputChar)
//            {
//                num++;
//            }
//        }
//        cout << num;
//    }
//    return 0;
//
//}


#endif //OFFER_EXERCISE_COUNTING_CHAR_NUM_002_H
