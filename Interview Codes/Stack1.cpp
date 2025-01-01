#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(20);
    st.push(21);
    st.push(22);
    st.push(23);

    while (!st.empty())
    {
        cout << st.top();
        cout << " ";
        st.pop();
    }
}