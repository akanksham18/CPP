#include <iostream>
using namespace std;

class A
{
public:
    int a;

    A(int val)
    {
        a = val;
    }
};

int main()
{
    A a(4);
    cout << a.a;
}