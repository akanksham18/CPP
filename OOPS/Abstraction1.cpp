#include <iostream>
using namespace std;

class vehicle
{
private:
    void owner()
    {
        cout << "Owner: AKKU" << endl;
    }

    void age()
    {
        cout << 19 << endl;
    }

public:
    void display()
    {
        cout << "public display" << endl;
    }
    void show()
    {
        cout << " public Show called";
    }
};

int main()
{
    vehicle v;
    v.display();
    v.show();
    // v.owner();
}