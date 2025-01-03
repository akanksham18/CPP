#include <iostream>
using namespace std;

int setBits(int a, int b)
{
    int ac = 0;
    while (a != 0)
    {
        int bit = a & 1;
        if (bit == 1)
        {
            ac++;
        }
        a = a >> 1;
    }
    int bc = 0;
    while (b != 0)
    {
        int bit = b & 1;
        if (bit == 1)
        {
            bc++;
        }
        b = b >> 1;
    }
    int ans = ac + bc;
    return ans;
}

int main()
{
    int a;
    int b;
    cout << "Enter value of a and b : ";
    cin >> a;
    cin >> b;
    int ans = setBits(a, b);
    cout << ans;
}