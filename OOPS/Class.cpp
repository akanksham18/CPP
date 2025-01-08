#include <iostream>
using namespace std;

class Hero
{
public:
    char a;

    int health;
};

int main()
{
    // object
    Hero h;
    cout << "size of " << sizeof(h);
    // h.health = 10;
    // cout << h.health << endl;
}