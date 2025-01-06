// only one number is unique and remaining appears twice
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
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ a[i];
    }

    cout << "Unique Element is : " << ans;
}