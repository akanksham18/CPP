#include <iostream>
using namespace std;

class Hero
{
public:
    Hero()
    {
        cout << "Constructor called " << endl;
    }
};

int main()
{
    Hero h;
}
