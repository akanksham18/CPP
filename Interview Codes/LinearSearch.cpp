#include <iostream>
using namespace std;
int main()
{

    int arr[] = {43, 65, 32, 87, 21};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Elment found " << arr[i] << " at location " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Element not found in array" << endl;
    }
}