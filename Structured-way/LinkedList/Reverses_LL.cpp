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
void deleteAtTail(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    node *toDeleteNode = temp->next;
    temp->next = temp->next->next;
    delete toDeleteNode;
}

// Reverse Methods Iterative ------------------------------
node *reverse(node *&head)
{
    node *prevPtr = NULL;
    node *currPtr = head;
    node *nextPtr;

    while (currPtr != NULL)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    return prevPtr;
    // head = prevPtr;
}

// Reverse Methods Recursive ------------------------------
node *reverse_recursive(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newHead = reverse_recursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
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
    insertAtTail(head, 52);
    insertAtTail(head, 62);

    display(head);
    // node *newHead = reverse(head);
    node *newHead = reverse_recursive(head);

    display(newHead);

    return 0;
}