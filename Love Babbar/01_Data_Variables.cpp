#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    float f = 10.07;
    double d = 1.34;
    bool b = true;
    bool b1 = 1;
    char c = 'a';
    string s = "hello";

    cout << sizeof(i) << endl;
    cout << sizeof(f) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(b1) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(s) << endl;
}
