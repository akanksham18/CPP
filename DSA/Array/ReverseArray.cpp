#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int a[n];
    cout << "Enter the elements of array of size " << n << " : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        for (int i = start; i < end; i++)
        {
            int temp = a[start];
            a[start] = a[end];
            a[end] = temp;
            start++;
            end--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}