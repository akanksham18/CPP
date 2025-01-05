// D
// C D
// B C D
// A B C D

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'D' - i + 1;
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }
}