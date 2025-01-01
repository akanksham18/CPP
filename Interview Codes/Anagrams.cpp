#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    string str1, str2;
    cout << "Enter string 1: ";
    cin >> str1;
    cout << "Enter string 2: ";
    cin >> str2;

    unordered_map<char, int> mp1, mp2;

    for (char ch : str1)
    {
        mp1[ch]++;
    }
    for (char ch : str2)
    {
        mp2[ch]++;
    }

    if (mp1 == mp2)
    {
        cout << "Anagrams";
    }
    else
    {
        cout << "NOT Anagrams";
    }
}