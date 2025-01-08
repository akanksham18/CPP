#include <iostream>
using namespace std;
int main()
{
    // 1) constant value , non constant pointer
    int x = 10;
    int y = 20;
    const int *ptr1 = &x;
    // *ptr = 10; // cant reassign value
    cout << *ptr1 << endl;
    cout << &ptr1 << endl;

    // 2) constant pointer , non constant value

    int *const ptr = &x;
    // ptr = &y; // cant reassign pointer
    cout << *ptr << endl;
    cout << ptr;

    // 3) constant pointer ,  constant value

    const int *const ptr2 = &x;
    // *ptr2 = 10;  cant reassign value
    // ptr2 = &y; // cant reassign pointer
    cout << *ptr2 << endl;
    cout << ptr2;
}