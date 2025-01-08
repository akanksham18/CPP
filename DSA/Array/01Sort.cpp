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

    int i = 0, j = n - 1;

    while (i < j)
    {
        while (a[i] == 0 && i < j)
        {
            i++;
        }
        while (a[j] == 1 && i < j)
        {
            j--;
        }
        if (i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
    cout << "Sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}