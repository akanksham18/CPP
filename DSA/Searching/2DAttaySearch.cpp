#include <iostream>
using namespace std;

bool ispresent(int a[][4], int target, int rows, int columns)
{
    for (int rows = 0; rows < 3; rows++)
    {
        for (int columns = 0; columns < 4; columns++)
        {
            if (a[rows][columns] == target)
            {
                return 1;
            }
        }
        cout << endl;
    }
    return 0;
}

int main()
{

    int a[3][4];
    cout << "Enter the 2D array elemnts : ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int target;
    cout << "Enter the target ";
    cin >> target;

    if (ispresent(a, target, 3, 4))
    {
        cout << "Found";
    }
    else
    {
        cout << "NOT";
    }
}