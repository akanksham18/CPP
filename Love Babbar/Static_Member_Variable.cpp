#include <iostream>
using namespace std;

class A
{
public:
    static int a;

    A()
    {
    }
};
int A::a = 1;
int main()
{
    cout << A::a;
}