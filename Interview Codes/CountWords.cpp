#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter string : ";
    getline(cin, str);

    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ' && (i == str.length() - 1 || str[i + 1] == ' '))
        {
            count++;
        }
    }
    cout << count;
}