// ABC
// DEF
// GHI
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = 'A';
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }
}