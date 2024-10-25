#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    int amount;
    cout << "Enter amount = " << endl;
    cin >> amount;
    int note = 0;

    switch (n)
    {
    case 1:
        note = amount / 100;
        amount = amount - (100 * note);
        cout << note << "note of 100 required" << endl;

    case 2:
        note = amount / 50;
        amount = amount - (50 * note);
        cout << note << "note of 50 required" << endl;

    case 3:
        note = amount / 52;
        amount = amount - (20 * note);
        cout << note << "note of 20 required" << endl;

    case 4:
        note = amount / 1;
        amount = amount - (1 * note);
        cout << note << "note of 1 required" << endl;
    }
}