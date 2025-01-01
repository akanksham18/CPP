#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter string : ";
    getline(cin, str);
    string result;
    for (int i = 0; i < str.size(); i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            result += str[i];
        }
    }
    cout << result;
}