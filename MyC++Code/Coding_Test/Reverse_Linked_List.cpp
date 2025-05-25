#include <iostream>
using namespace std;

// Node definition
struct Node
{
    int data;
    Node *next;
    Node(int x) : data(x), next(NULL) {}
};

// LinkedList class
class LinkedList
{
private:
    Node *head;

public:
    // Constructor
    LinkedList() : head(NULL) {}

    // Insert a new node at the end
    void insert(int value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }

    // Reverse the linked list
    void reverse()
    {
        Node *prev = NULL;
        Node *curr = head;
        while (curr)
        {
            Node *nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        head = prev;
    }

    // Display the linked list
    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Destructor to free memory
    ~LinkedList()
    {
        Node *temp;
        while (head)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// Main function
int main()
{
    LinkedList list;

    // Insert elements
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "Original List: ";
    list.display();

    // Reverse the list
    list.reverse();

    cout << "Reversed List: ";
    list.display();

    return 0;
}
