#include <iostream>
using namespace std;

class A
{
public:
    const int age;

    A(int a) : age(a)
    {
    }
    void setValue(const int &a)
    {
    }

    int getValue() const
    {
        return age;
    }
};
int main()
{
    A obj;
    // obj.setValue(20);
    cout << obj.getValue() << endl;
}