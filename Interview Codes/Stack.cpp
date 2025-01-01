#include <iostream>
using namespace std;

int top = -1;
int n;
int *arr;

void push()
{
    int item;
    cout << "Enter the item to push: ";
    cin >> item;

    if (top == n - 1)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        top++;
        arr[top] = item;
        cout << "Item pushed: " << item << endl;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Item popped: " << arr[top] << endl;
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack elements are: ";
        cout << arr[top];
        cout << endl;
    }
}

int main()
{
    cout << "Enter the size of the stack: ";
    cin >> n;

    arr = new int[n];

    int ch;
    do
    {
        cout << "\nEnter the operation to perform on stack:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
        }
    } while (ch != 4);
}
