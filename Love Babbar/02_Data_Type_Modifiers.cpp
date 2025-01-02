#include <iostream>
using namespace std;

int main()
{

    cout << "int = " << sizeof(int) << endl;
    cout << "short int = " << sizeof(short int) << endl;
    cout << "long int = " << sizeof(long int) << endl;
    cout << "signed short int = " << sizeof(signed short int) << endl;
    cout << "unsigned short int = " << sizeof(unsigned short int) << endl;
    cout << "signed long int = " << sizeof(signed long int) << endl;
    cout << "unsigned long int = " << sizeof(unsigned long int) << endl;

    cout << "float = " << sizeof(float) << endl;
    cout << "double = " << sizeof(double) << endl;
    cout << "char = " << sizeof(char) << endl;
    cout << "wchar_t = " << sizeof(wchar_t) << endl;
}