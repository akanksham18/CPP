#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Speakig" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    Dog d;
    d.speak();

    Animal a;
    a.speak();
}