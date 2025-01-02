#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 3;

    cout << "Bitwise AND = " << (a & b) << endl;
    cout << "Bitwise OR = " << (a | b) << endl;
    cout << "Bitwise NOT = " << (~b) << endl;
    cout << "Bitwise XOR = " << (a ^ b) << endl;
}