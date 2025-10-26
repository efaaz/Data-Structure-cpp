#include <iostream>
using namespace std;

class Queue{
 int *arr;
 int size;
 int front;
 int rear;

public:
    Queue() {
            size = 0;
            front = rear = -1;
        }
    Queue(int size) {
        this->size = size;
        arr = new int[size];
        front = rear = -1;
    }

    ~Queue() {
        delete[] arr;
    }

    bool isFull() {
        return rear == size - 1;
    }

    bool isEmpty() {
        return ((front == -1) && (rear == -1));
    }

    void enqueue(int x) {
        if(isFull()) {
            cout << "Queue Overflow\n";
            return;
        }
        else if(isEmpty()) {
            front = rear = 0;
            arr[rear] = x;
        }else {
            rear++;
            arr[rear] = x;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        else if(front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    void printQueue()
    {
            if(isEmpty())
            {
                cout << "Queue is empty" << endl;
                return;
            }
            else{
                for(int i=front; i<=rear; i++)
                {
                    cout << arr[i] << "  ";
                }
            }
    }
};

int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.printQueue();
    cout << endl;
    q.dequeue();
    q.printQueue();
    return 0;
}