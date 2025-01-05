#include <iostream>
using namespace std;
int main()
{
    int a[1000];
    for (int i = 0; i < 1000; i++)
    {
        a[i] = 1;
        cout << a[i] << " ";
    }
    cout << a[2000];
}