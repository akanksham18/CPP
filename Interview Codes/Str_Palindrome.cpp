#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "ENter string : ";
    cin >> str;
    string revstr;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        revstr += str[i];
    }

    if (str == revstr)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "NOT Palindrome";
    }
}