#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    string str;
    cout << "Enter string : ";
    cin >> str;

    int frequency[256] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        frequency[str[i]]++;
    }

    for (int i = 0; i < str.length(); i++)
    {
        if (frequency[str[i]] == 1)
        {
            cout << str[i] << " ";
        }
    }
}