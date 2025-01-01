#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;
    char c = 'A';

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}