// NOT DONE SOLVE LATER

#include <iostream>
using namespace std;
int main()
{
    bool ispresent = false;
    int n;
    cout << "Enter the value : ";
    cin >> n;
    while (n != 0)
    {
        int bit = n & 1;
        if (bit == 1)
        {
            ispresent = true;
        }
        n = n >> 1;
    }

    if (ispresent)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}