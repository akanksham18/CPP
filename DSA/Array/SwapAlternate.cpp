#include <iostream>
using namespace std;

int main()
{
    // size of array
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    // array elements
    int a[n];
    cout << "Enter the elements of array of size " << n << " : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // swapping alternate elements
    for (int i = 0; i < n; i = i + 2)
    {
        if (i + 1 < n)
        {
            int temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }

    // printing array elements
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}