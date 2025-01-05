#include <iostream>
using namespace std;

bool search(int a[], int n, int k)
{
    int low = 0, high = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter size of array ";
    cin >> n;

    int a[n];
    cout << "Enter the elements of array of size : " << n << " : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cout << "Enter the element to search : ";
    cin >> k;

    bool found = search(a, n, k);

    if (found)
    {
        cout << "FOUND" << endl;
    }
    else
    {
        cout << "NOT FOUND" << endl;
    }
}