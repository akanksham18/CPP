// 1 2 3 4
//   2 3 4
//     3 4
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
        int c = n - i + 1;
        for (int j = 1; j <= i; j++)
        {
            cout << c;
            c++;
        }
        cout << endl;
    }
}