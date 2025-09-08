#include <iostream>
using namespace std;

class Stack {
    int* arr;
    int top;
    int size;
    
    public:
    Stack() {
        size = 0;
        top = -1;
    }
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    ~Stack() {
        delete[] arr;
    }
    bool isFull(){
        return top == size - 1;
    }
    bool isEmpty() {
        return top == -1;
    }
    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

};
