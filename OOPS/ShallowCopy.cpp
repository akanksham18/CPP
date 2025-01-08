#include <iostream>
#include <string.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char *name;
    char level;

    Hero()
    {
        cout << "Simple constructor called " << endl;
        name = new char[100];
    }

        char getName()
    {
        return *name;
    }
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }

    void setHealth(int health)
    {
        this->health = health;
    }
    void setLevel(int level)
    {
        this->level = level;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    void print()
    {
        cout << "Name: " << this->getName();
        cout << " Health: " << this->getHealth();
        cout << " Level: " << this->getLevel() << endl;
    }
};
int main()
{
    Hero h1;

    h1.setHealth(10);
    h1.setLevel('A');
    char name[100] = "Babbar";
    h1.setName(name);
    h1.print();

    Hero h2(h1);
    h2.print();

    h1.name[0] = 'G';
    h1.print();

    h2.print();
}