#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter limit : ";
    cin >> n;

    int i = 1, sum = 0;

    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i++;
    // }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    cout << sum;
}