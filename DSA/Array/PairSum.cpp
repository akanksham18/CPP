#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> pairsum(vector<int> &a, int s, int n)
{
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(a[i], a[j]));
                temp.push_back(max(a[i], a[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n;
    cout << "Enter array size ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter the elements of array of size " << n << " : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int s;
    cout << "Enter the sum : ";
    cin >> s;

    vector<vector<int>> result = pairsum(a, s, n);

    cout << "Pairs with sum " << s << " are:" << endl;
    for (const auto &pair : result)
    {
        cout << pair[0] << ", " << pair[1] << endl;
    }
}