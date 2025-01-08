#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    // parameterized constructor
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // copy constructor
    Hero(Hero &temp)
    {
        cout << "Copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "Health : " << this->health << endl;
        cout << "Level : " << this->level << endl;
    }

    int getHealth()
    {
        return health;
    }
    int getLevel()
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
};

int main()
{
    Hero shubham(10, 'A');
    shubham.print();

    Hero akshu(shubham);
    akshu.print();
}