// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        int c = 1;
        // print first triangle
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        // print stars
        for (int m = 1; m <= (n - i) * 2; m++)
        {
            cout << "* ";
        }
        // print second traingle
        for (int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}