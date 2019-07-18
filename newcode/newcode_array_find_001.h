//
// Created by joan on 19-7-5.
//

#ifndef OFFER_EXERCISE_NEWCODE_ARRAY_FIND_001_H
#define OFFER_EXERCISE_NEWCODE_ARRAY_FIND_001_H


class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int lineLen = array[0].size();
        cout << lineLen << endl;
        int colLen = array.size();
        cout << colLen << endl;


        for(int i = 0; i < colLen; i++)
        {
            int lineStart = 0;
            int lineEnd = lineLen - 1;
            int midLine = 0;

            while( lineStart <= lineEnd )
            {
                midLine = (lineStart + lineEnd) /2;
                if( midLine < lineLen && target < array[i][midLine])
                {
                    lineEnd = midLine - 1;
                }else if( midLine < lineLen && target > array[i][midLine]){
                    lineStart = midLine + 1;
                }else if(target == array[i][midLine]) {
                    return true;
                }
                cout << "midLine : " << midLine << endl;
                cout << "lineStart : " << lineStart << endl;
            }
            cout << "line : " << i << endl;
        }

        return false;

    }
};

//
//int main(char *argc, char * argv[])
//{
//    /* newcode */
////    vector<vector<int> > input1 = { {0 , 1, 2, 3}, {5, 7, 9, 10} , {8, 9, 11, 13}};
////    bool isFind1 = Solution().Find(10, input1);
////    cout << "isFind1 : " << isFind1 << endl;
//
////    vector<vector<int>> input2 = {{1,2,8,9}, {2,4,9,12}, {4,7,10,13}, {6,8,11,15}};
////    bool isFind2 = Solution().Find(16, input2);
////    cout << "isFind2 : " << isFind2 << endl;
//
//}


#endif //OFFER_EXERCISE_NEWCODE_ARRAY_FIND_001_H
