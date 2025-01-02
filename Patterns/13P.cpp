//     *
//    * *
//   *   *
//  *     *
// * * * * *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        if (i == 1 || i == n)
        {
            for (int k = 1; k <= n - i; k++)
            {
                cout << " ";
            }

            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int k = 1; k <= n - i; k++)
            {
                cout << " ";
            }
            for (int j = 1; j <= 2; j++)
            {
                cout << "* ";
            }
        }

        cout << endl;
    }
}