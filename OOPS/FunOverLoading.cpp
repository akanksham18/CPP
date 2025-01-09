#include <iostream>
using namespace std;

class A
{

public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }

    string add()
    {
        return "Hi";
    }
};

int main()
{
    A a;
    cout << a.add(1, 2) << endl;
    cout << a.add(1.2, 2.2) << endl;
    cout << a.add() << endl;
}