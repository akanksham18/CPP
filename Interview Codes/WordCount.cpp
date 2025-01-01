#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter String : ";
    getline(cin, str);

    int count = 0;
    string res = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ' && (i == str.length() - 1 || str[i + 1] == ' '))
        {
            res += str[i];
            if (res.length() > 1)
            {
                count++;
            }
            res = " ";
        }
    }

    cout << count;
}