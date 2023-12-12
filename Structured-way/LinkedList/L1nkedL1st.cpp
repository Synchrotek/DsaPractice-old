#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Insertion Methods ------------------------------
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

// Deletion Methods ------------------------------
void deleteAtHead(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *toDeleteNode = head;
    head = head->next;
    delete toDeleteNode;
}
void deletionByEle(node *&head, int target)
{
    if (head == NULL)
    {
        return;
    }
    if (head->data == target)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != target)
    {
        temp = temp->next;
    }
    node *toDeleteNode = temp->next;
    temp->next = temp->next->next;
    delete toDeleteNode;
}

// Searching Method ------------------------------
void searchElement(node *&head, int target)
{
    node *temp = head;
    int index = 0;
    while (temp != NULL)
    {
        if (temp->data == target)
        {
            cout << target << " Found at: "
                 << index << endl;
            return;
        }
        index++;
        temp = temp->next;
    }
    cout << target << ": not found " << endl;
}

// Traversal Method -------------------------------
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 12);
    insertAtTail(head, 24);
    insertAtTail(head, 42);

    insertAtHead(head, 16);
    insertAtHead(head, 6);

    display(head);
    searchElement(head, 6);

    deletionByEle(head, 24);
    // deleteAtHead(head);
    display(head);

    return 0;
}