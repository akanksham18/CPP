#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void speaking()
    {
        cout << "Class Animal" << endl;
    }
};

class Dog : public Animal
{
public:
    void speaking1()
    {
        cout << "Class Dog" << endl;
    }
};
class Cat : public Animal
{
public:
    void speaking2()
    {
        cout << "Class Cat" << endl;
    }
};
int main()
{
    Cat c;
    c.speaking();
    c.speaking2();

    Dog d;
    d.speaking();
    d.speaking1();
}