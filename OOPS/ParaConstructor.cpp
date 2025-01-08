#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    Hero()
    {
        cout << "Constructor called" << endl;
    }

    Hero(int health)
    {
        this->health = health;
        cout << "this " << this << endl;
    }

    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    int setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    Hero h(10);

    cout << "Health is " << h.getHealth() << endl;
    cout << "Address of object is " << &h;
}