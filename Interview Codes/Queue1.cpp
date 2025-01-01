#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the queue: ";
    cin >> n;

    queue<int> q;

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
        {
            if (q.size() == n)
            {
                cout << "Queue is full : ";
            }
            else
            {
                int item;
                cout << "Enter the item to be inserted: ";
                cin >> item;
                q.push(item);
                cout << item;
            }
        }
        break;
        case 2:
        {
            if (q.empty())
            {
                cout << "Queue is empty : ";
            }
            else
            {
                cout << "Dequeued item: " << q.front() << endl;
                q.pop();
            }
        }
        break;
        case 3:
        {
            if (q.empty())
            {
                cout << "Queue is empty : ";
            }
            else
            {
                cout << q.front();
            }
        }
        break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Enter a valid choice.\n";
            break;
        }
    } while (ch != 4);
    return 0;
}
