#include <iostream>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "In class A" << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "In class B" << endl;
    }
};

class D
{
public:
    void func3()
    {
        cout << "In class D" << endl;
    }
};

class C : public A, public D
{
public:
    void func4()
    {
        cout << "In class C" << endl;
    }
};

int main()
{
    A a;
    a.func1();

    B b;
    b.func1();
    b.func2();

    D d;
    d.func3();

    C c;
    c.func1();
    c.func3();
    c.func4();
}