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
    Hero h;

    // setter
    h.setHealth(90);
    h.level = 'S';

    // getter
    cout << "Health is " << h.getHealth() << endl;
    cout << "Level is " << h.getLevel() << endl;
}
