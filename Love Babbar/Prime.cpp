#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;

    bool isprime = true;

    if (n <= 1)
    {
        cout << "Not Prime" << endl;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isprime = false;
            break;
        }
    }

    if (isprime)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "not prime" << endl;
    }
}