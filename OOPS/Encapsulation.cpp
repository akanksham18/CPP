#include <iostream>
using namespace std;

class A
{
public:
    int a;
    int b;

public:
    int solve(int n)
    {
        a = n;
        b = n / 2;
        return b;
    }
};
int main()
{
    int n;
    cin >> n;

    A a;
    int ans = a.solve(n);
    cout << ans;
}