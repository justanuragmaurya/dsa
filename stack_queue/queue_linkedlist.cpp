#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next=nullptr;
    }
};

Node* front = nullptr;
Node* rear = nullptr;

void enqueue(int data){
    Node* newNode = new Node(data);
    if(rear==nullptr){
        front=rear=newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
    cout<<"\nAdded node : "<<rear->data;
}

void dequeue(){
    Node* temp = front;
    if(front==nullptr){
        cout<<"\nEmpty Queue";
        return;
    }
    front = front->next;
    cout<<"\nDeleted node : "<<temp->data;
    delete temp;
}

void peek(){
    if(front==nullptr){
        cout<<"cant print";
        return;
    }
    cout<<"\nitem in front: "<<front->data;
}

int main(){
    dequeue();
    dequeue();
    peek();
}