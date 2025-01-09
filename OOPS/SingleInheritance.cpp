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
        cout << "SPeaking" << endl;
    }
};

class Dog : public Animal
{
};

int main()
{
    Dog d;
    d.speaking();
}