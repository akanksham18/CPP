#include <iostream>
#include <vector>
#include <climits>
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
    int max = INT_MIN;
    int rowIndex = -1;

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        cout << "Printing row wise sum : ";
        for (int j = 0; j < columns; j++)
        {
            sum += a[i][j];
        }
        cout << "Sum of " << i << "th row is : " << sum << endl;

        if (sum > max)
        {
            max = sum;
            rowIndex = i;
        }
    }
    cout << "Maximum sum is : " << max << " of row " << rowIndex;
}