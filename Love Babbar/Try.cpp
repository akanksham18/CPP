#include <iostream>
using namespace std;

int main()
{
    int num;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            cout << " ";
        }
        num = 1;
        for (int k = 0; k < i; k++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}