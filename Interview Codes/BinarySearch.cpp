#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter key : ";
    cin >> key;

    int h = n - 1;
    int l = 0;

    bool found = false;

    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (arr[mid] == key)
        {
            found = true;
            cout << "Element found at : " << mid << endl;
            break;
        }
        else if (arr[mid] < key)
        {
            l = mid + 1;
            mid = (l + h) / 2;
        }
        else
        {
            h = mid - 1;
        }
    }
    if (!found)
    {
        cout << "Element not found ";
    }
}