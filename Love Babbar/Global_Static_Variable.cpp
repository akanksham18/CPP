#include <iostream>
using namespace std;
static int count = 0;
void i()
{
    count++;
    cout << count << " ";
}
int main()
{
    i();
    i();
}