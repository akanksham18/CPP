#include <iostream>
using namespace std;

class A
{
public:
    int a = 10;
    static void display1()
    {
        cout << "a function";
    }
    static void display()
    {
        // cout << a; can not access non static member variables
        cout << "HELLO";
        display1();
    }
};
int main()
{
    A::display();
}