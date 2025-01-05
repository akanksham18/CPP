// 1 1 1 1
//   2 2 2
//     3 3
//       4

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;
    int c = 1;
    for (int i = n; i >= 1; i--)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << c;
        }
        c++;
        cout << endl;
    }
}