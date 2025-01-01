#include <iostream>
using namespace std;
int main()
{
    int a[] = {2, 4, 5, 6, 7, 8};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}