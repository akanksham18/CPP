#include <iostream>
using namespace std;

int main()
{

    int rows, columns;
    cout << "Enter the size of rows and columns ";
    cin >> rows >> columns;

    int a[rows][columns];
    cout << "Enter the 2D array elemnts : ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}