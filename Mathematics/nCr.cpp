#include <iostream>
using namespace std;

int factoriacl(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = factoriacl(n);
    int denom = factoriacl(r) * factoriacl(n - r);
    return num / denom;
}

int main()
{
    int n, r;
    cin >> n >> r;
    int ans = nCr(n, r);
    cout << "ANswer is = " << ans;
}