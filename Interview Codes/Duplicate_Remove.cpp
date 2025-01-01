#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter string : ";
    getline(cin, str);
    bool seen[256] = {0};
    string res = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (seen[str[i]] == false)
        {
            res += str[i];
            seen[str[i]] = true;
        }
    }
    cout << res;
}