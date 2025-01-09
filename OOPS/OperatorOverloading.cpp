#include <iostream>
using namespace std;

class O
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(O &obj)
    {
        int v1 = this->a;
        int v2 = obj.a;
        cout << "VAlue" << v2 - v1 << endl;
    }
};

int main()
{
    O o1, o2;
    o1.a = 4;
    o2.a = 2;

    o1 + o2;
}