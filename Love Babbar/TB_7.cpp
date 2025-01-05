#include <iostream>
using namespace std;

int main()
{
    int m, y;
    cout<<"Enter month"<<endl;
    cin>>m;
    cout<<"Enter year"<<endl;
    cin>>y;

    if (m == 8)
    {
        cout << "31" << endl;
        return 0;
    }

    if (m == 2 && (y % 2 == 0))
    {
        cout << "29" << endl;
    }
    else if (m == 2 && (y % 2 != 0))
    {
        cout << "28" << endl;
    }

    if (m % 2 == 0)
    {
        cout << "30" << endl;
    }
    else
    {
        cout << "31" << endl;
    }
}