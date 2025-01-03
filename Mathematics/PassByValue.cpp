#include <iostream>
using namespace std;

int Dummy(int n)
{
    n++;
    cout << "Value of n in Dummy Function : " << n;
}

int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;
    cout << "Value of n in main function : " << n << endl;
    Dummy(n);
}