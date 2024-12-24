#include <iostream>
using namespace std;
int main()
{
    string a;
    cout << "Enter string ";
    getline(cin, a);

    string curr = "";
    string max = "";

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != '.')
        {
            curr += a[i];
        }
        else
        {
            if (curr.length() > max.length())
            {
                max = curr;
            }
            curr = "";
        }
    }

    if (curr.length() > max.length())
    {
        max = curr;
    }
    cout << max;
}