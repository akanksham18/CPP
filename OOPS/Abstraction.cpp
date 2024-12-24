#include <iostream>
using namespace std;

class A
{
public:
    int a;
    int b;

public:
    int solve(int n, int m)
    {
        a = n;
        b = m;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};
int main()
{
    A a;
    a.solve(10, 20);
    a.display();
}