#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Stack {
    Node* head; 

public:
    Stack() {
        head = NULL;
    }

    // Push element onto stack
    void push(int data) {
        Node* newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        
        newNode->next = head; // link new node before current top
        head = newNode;       // move top to newNode
    }

    // Pop element from stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Nothing to pop.\n";
            return;
        }
        Node* temp = head;
        head = head->next; // move head to next
        delete temp;       // free memory
    }

    // Get top element
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!\n";
            return -1; // or throw exception
        }
        return head->data;
    }

    // Check if stack is empty
    bool isEmpty() {
        return head == NULL;
    }

    // Display all elements in stack
    void display() {
        Node* temp = head;
        cout << "Stack (top -> bottom): ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    st.display();  // Stack (top -> bottom): 30 20 10

    cout << "Top element: " << st.peek() << endl; // 30

    st.pop();
    st.display();  // Stack (top -> bottom): 20 10

    return 0;
}
