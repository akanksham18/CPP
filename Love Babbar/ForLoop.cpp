#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i + 1; i <= 5; i++)
        {
            for (int k = j + 1; k <= 5; k++)
            {
                cout << i << " " << j << " " << k << " ";
                cout << endl;
            }
        }
    }
}