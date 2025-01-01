#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    string str;
    cout << "Enter string : ";
    getline(cin, str);

    string maxstr = "";
    string currstr = "";

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ')
        {
            currstr += str[i];
        }
        else
        {
            if (currstr.length() > maxstr.length())
            {
                maxstr = currstr;
            }
            currstr = "";
        }
    }

    if (currstr.length() > maxstr.length())
    {
        maxstr = currstr;
    }
    cout << maxstr;
}