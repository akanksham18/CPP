// Count Pairs whose sum is less than target
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int count = 0;
    int i = 0;
    int j = n - 1;
    int target;
    cout << "Enter the value of target : ";
    cin >> target;
    while (i < j)
    {
        if (arr[i] + arr[j] < target)
        {
            count += (j - i);
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << "Number of pairs are : " << count;
}
