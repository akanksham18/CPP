#include <iostream>
using namespace std;

class My
{

public:
    int a;
    int b;

    My(int x, int y) : a(x), b(y)
    {
        cout << "My(int x,int y)::a(x),b(y)" << endl;
    }
};
class Derived : public My
{
public:
    int c;
    int d;

    Derived(int x) : My(a, b)
    {
        cout << "Derived(int x)::My(x)" << endl;
    }
};
int main()
{
    Derived d(1);
}