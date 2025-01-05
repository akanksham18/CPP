#include <iostream>
using namespace std;

int update(int a[], int n)
{
    cout << "Inside the function " << endl;
    a[0] = 120;
    // print array
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " " << endl;
    }
    cout << "Going back to main function" << endl;
}

int main()
{
    int a[3] = {1, 2, 3};
    update(a, 3);
    cout << "Printing array in main " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " " << endl;
    }
}