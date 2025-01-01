#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter string : ";
    getline(cin, str);

    int frequency[256] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        frequency[str[i]]++;
    }

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " = " << frequency[str[i]] << endl;
    }
}