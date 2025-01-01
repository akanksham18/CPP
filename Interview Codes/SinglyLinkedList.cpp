#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void insertNode()
{
    int value;
    cout << "Enter value to be inserted : ";
    cin >> value;

    Node *newnode = new Node();
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    cout << "New node inserted " << endl;
}

void deleteNode()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        int value;
        cout << "Enter value to be deleted : ";
        cin >> value;

        Node *temp = head;
        Node *prev = NULL;
    }
}

void displayList()
{
}

int main()
{
    int ch;

    do
    {
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter option : " << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            insertNode();
            break;
        case 2:
            deleteNode();
            break;
        case 3:
            displayList();
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (ch != 4);
}