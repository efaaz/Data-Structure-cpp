#include <iostream>
using namespace std;
template <typename T>

class Stack
{
private:
    T *arr;
    int top;
    int size;

public:
    Stack()
    {
        size = 0;
        top = -1;
    }
    Stack(int size)
    {
        this->size = size;
        arr = new T[size];
        top = -1;
    }
    ~Stack()
    {
        delete[] arr;
    }
    bool isFull()
    {
        return top == size - 1;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    void push(T x)
    {
        if (isFull())
        {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    T peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return T();
        }
        return arr[top];
    }

    void clear()
    {
        top = -1;
    }

    void show()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};