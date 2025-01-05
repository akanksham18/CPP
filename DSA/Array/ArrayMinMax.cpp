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

    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << "Minimum = " << min << endl;

    int max = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "Maximum = " << max << endl;
}