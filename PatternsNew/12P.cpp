// A B C
// A B C
// A B C

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows ";
    cin >> n;
    char ch = 'A';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch;
            ch++;
        }
        ch = 'A';
        cout << endl;
    }
}