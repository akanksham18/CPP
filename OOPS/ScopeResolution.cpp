#include <iostream>
using namespace std;

class Person
{
public:
    int a = 10;

    void name();
    void age()
    {
        cout << "Age is 20" << endl;
    }
};

void Person::name()
{
    cout << "Name is John" << endl;
}

int main()
{
    Person p;
    p.name();
}