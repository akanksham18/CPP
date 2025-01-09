#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;

public:
    int getRoll()
    {
        return this->roll;
    }

    string getName()
    {
        return this->name;
    }

    void setRoll(int r)
    {
        roll = r;
    }
    void setName(string n)
    {
        name = n;
    }

    void print()
    {
        cout << "Name : " << getName() << endl;
        cout << "Roll : " << this->roll << endl;
    }
};

int main()
{
    Student s;
    s.setName("Akanksha");
    s.setRoll(1);
    s.print();
}