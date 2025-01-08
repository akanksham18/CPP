#include <iostream>
using namespace std;

class Hero
{
public:
    static int time;

    static int print()
    {
        cout << "In Static function" << endl;
        return 0;
    }
};

int Hero ::time = 10;

int main()
{
    cout << Hero::time << endl;
    cout << Hero::print() << endl;
}