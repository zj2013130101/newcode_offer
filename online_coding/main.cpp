#include <iostream>
#include <string>
#include <cctype>

/**
 * 牛客网：华为在线编程题
 */
using namespace std;


int main() {

    string line;
    int LowerToUpper = 'a' - 'A';
    while(getline(cin, line))
    {
        char inputChar;
        cin >> inputChar;

        inputChar = toupper(inputChar);

        int num=0;
        for(char& item: line)
        {
            item = toupper(item);
            if(item == inputChar)
            {
                num++;
            }
        }
        cout << num;
    }
    return 0;

}