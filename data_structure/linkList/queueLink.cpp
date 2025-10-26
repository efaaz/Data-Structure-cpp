#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Queue
{
    Node *head; // front
    Node *tail; // rear

public:
    Queue()
    {
        head = tail = NULL;
    }

    // Add element at rear
    void enqueue(int data)
    {
        Node *newNode = new Node(data);
        if (tail == NULL)
        { // empty queue
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    // Remove element from front
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow! Nothing to dequeue.\n";
            return;
        }
        Node *temp = head;
        head = head->next;
        if (head == NULL)
        { // queue became empty
            tail = NULL;
        }
        delete temp;
    }

    // Get front element
    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!\n";
            return -1;
        }
        return head->data;
    }

    // Check if queue is empty
    bool isEmpty()
    {
        return head == NULL;
    }

    // Display all elements
    void display()
    {
        Node *temp = head;
        cout << "Queue (front -> rear): ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
 
int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display(); // Queue (front -> rear): 10 20 30

    cout << "Front element: " << q.peek() << endl; // 10

    q.dequeue();
    q.display(); // Queue (front -> rear): 20 30

    q.dequeue();
    q.dequeue();
    q.dequeue(); // Queue Underflow

    return 0;
}
