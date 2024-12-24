#include <iostream>
using namespace std;

class student
{
    int rno;
    string name;
    double fee;

public:
    student(int, string, double); // parameterized constructor
    student(student &t)           // copy constructor
    {
        rno = t.rno;
        name = t.name;
        fee = t.fee;
        cout << "\nCOPY CONSTRUCTOR CALLED : ";
    }
    void display();
};

student ::student(int no, string n, double f)
{
    rno = no;
    name = n;
    fee = f;
}

void student ::display()
{
    cout << rno << "\t" << name << "\t" << fee << "\t" << endl;
}
int main()
{
    student s(1, "AKKU", 100.89);
    s.display();

    student majeet(s);
    majeet.display();
}