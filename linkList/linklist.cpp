#include <iostream>
using namespace std;

class LinkedList {
    struct Node {
        int data;
        Node* next = nullptr;
        Node(int data){
            this->data = data;
        }
        Node(int data, Node* next){
            this->data = data;
            this->next = next;
        }
    };
    Node* head = nullptr;
    Node* curr = nullptr;
    int size = 0;

public:
    LinkedList(){}
    
    void insertAtFirst(int data) {
        Node* temp = head;
        while(temp != nullptr) {
            if(temp->data == data) {
                cout << "Duplicate values not allowed\n";
                return;
            }
            temp = temp->next;
        }
    }
};
