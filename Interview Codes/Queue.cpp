#include <iostream>
using namespace std;

int n;
int *arr;
int front = -1;
int rear = -1;

void enqueue()
{
    if ((rear + 1) % n == front)
    {
        cout << "Queue is full\n";
    }
    else
    {
        int item;
        cout << "Enter the item to be inserted: ";
        cin >> item;

        if (front == -1)
            front = 0;

        rear = (rear + 1) % n;
        arr[rear] = item;
        cout << item << " enqueued.\n";
    }
}

void dequeue()
{
    if (front == -1)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        cout << arr[front] << " dequeued.\n";
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % n;
        }
    }
}

void display()
{
    if (front == -1)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        cout << "Queue elements: ";
        int i = front;
        while (true)
        {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % n;
        }
        cout << endl;
    }
}

int main()
{
    cout << "Enter the size of the queue: ";
    cin >> n;

    arr = new int[n];

    int ch;
    do
    {
        cout << "\nEnter choice:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Enter a valid choice.\n";
            break;
        }
    } while (ch != 4);

    delete[] arr;
    return 0;
}
