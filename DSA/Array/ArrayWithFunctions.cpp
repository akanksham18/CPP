#include <iostream>
using namespace std;

int add(int n, int a[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int a[n];
    cout << "Enter the array elements of size " << n << " : ";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = add(n, a);
    cout << "Sum : " << ans;
}