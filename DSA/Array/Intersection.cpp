#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the size of the first array: ";
    cin >> n;
    cout << "Enter the size of the second array: ";
    cin >> m;

    vector<int> a(n), b(m), ans;

    cout << "Enter elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter elements of the second array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    cout << "Common elements are: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
