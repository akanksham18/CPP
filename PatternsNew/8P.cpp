// 1
// 2 3
// 3 4 5
// 4 5 6 7

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows ";
    cin >> n;
    int c = 1;

    for (int i = 1; i <= n; i++)
    {
        int c = i;
        for (int j = 1; j <= i; j++)
        {
            cout << c;
            c++;
        }
        cout << endl;
    }
}