// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int c = i;
        for (int j = 1; j <= i; j++)
        {
            cout << c;
            c--;
        }
        cout << endl;
    }
}