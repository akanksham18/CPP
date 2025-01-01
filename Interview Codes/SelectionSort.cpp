#include <iostream>
using namespace std;
int main()
{
    cout << "Enter size of array : ";
    int n;
    cin >> n;

    int arr[n];
    cout << "Enter array elements of " << n << " size : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int small;
    for (int i = 0; i < n; i++)
    {
        small = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[small])
            {
                small = j;

                int temp = arr[small];
                arr[small] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}