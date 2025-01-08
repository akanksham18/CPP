#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

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

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    // static allocation
    Hero h;
    // setter
    h.setHealth(90);
    h.level = 'S';

    // getter
    cout << "Health is " << h.getHealth() << endl;
    cout << "Level is " << h.getLevel() << endl;

    // dynamic allocation
    Hero *b = new Hero;
    b->setHealth(10);
    b->setLevel('A');

    cout << "Health is " << (*b).getHealth() << endl;
    cout << "Level is " << (*b).getLevel() << endl;

    cout << "Health is " << b->getHealth() << endl;
    cout << "Level is " << b->getLevel() << endl;
}
