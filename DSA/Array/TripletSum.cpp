#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int a[n];
    cout << "Enter array elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cout << "Enter the value of k ";
    cin >> k;

    int count = 0;

    sort(a, a + n);

        cout << "Count : " << count;
}