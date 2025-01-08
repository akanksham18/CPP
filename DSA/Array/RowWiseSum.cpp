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

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        cout << "Printing row wise sum : ";
        for (int j = 0; j < columns; j++)
        {
            sum += a[i][j];
        }
        cout << "Sum of " << i << "th row is : " << sum << endl;
    }

    for (int i = 0; i < columns; i++)
    {
        int sum = 0;
        cout << "Printing column wise sum : ";
        for (int j = 0; j < rows; j++)
        {
            sum += a[j][i];
        }
        cout << "Sum of " << i << "th column is : " << sum << endl;
    }
}