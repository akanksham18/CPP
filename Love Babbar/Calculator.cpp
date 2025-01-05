#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a and b = " << endl;
    cin >> a >> b;

    char op;
    cout << "Enter the operation = " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << (a+b) << endl;
        break;

    case '-':
         
        cout << (a-b) << endl;
        break;

    case '*':
         
        cout << (a*b) << endl;
        break;

    case '/': 
        
        cout << (a/b) << endl;
        break;
    

    case '%':
        cout << (a%b) << endl;
        break;
    
    default:cout<<"Enter a valid operation ";
    }
}