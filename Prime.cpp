#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    bool isprime = true;
    for (int i = 2; i < n; i++)
    {
        if (n == 2)
        {
            cout << "Prime";
            break;
        }
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
        cout << "prime";
    }
    else
    {
        cout << "not prime";
    }
}