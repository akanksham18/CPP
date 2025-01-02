#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    bool isprime = true;

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isprime = false;
        }
        else
        {
            isprime = true;
        }
    }

    if (isprime)
    {
        cout << "Prime";
    }
    else
    {
        cout << "NOT PRIME";
    }
}