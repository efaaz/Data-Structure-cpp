#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {

        this->data = 0;
        this->next = NULL;
    };
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    };
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        this->head = NULL;
        this->tail = NULL;
    };

    void push_front(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            tail= newNode; 
        }
    }

    void pop_front(){
        if (head == NULL)
        {
           cout<<"Link List is empty";
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    void pop_back(){
        if (head == NULL)
        {
           cout<<"Link List is empty";
        }
        Node *temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        delete temp;
    }

    void deleteNode(int data, Node* pos){
        
    }

    int searchByVal(int key){
        Node* temp = head;
        int idx = 0;
        while(temp->data != key){
            temp = temp->next;
            idx++;

        }
        return idx;
    }
    void print(){
        Node *temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp= temp->next; 
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    List li;

    li.push_back(5);
    li.push_back(7);
    li.push_back(9);
    li.push_front(0);
    // li.print();
    // li.pop_front();
    // li.print();
    // li.pop_back();
    // li.print();
    li.print();

    cout<< li.searchByVal(0) <<endl; 
    cout<< li.searchByVal(9) <<endl; 
    cout<< li.searchByVal(5) <<endl; 
}