#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0, b = 1;
    int next;
    for (int i = 2; i < n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int ans = fibonacci(n);
    cout << ans;
}