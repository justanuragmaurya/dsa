#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};


int main(){
    Node* head = NULL;

    //______________________________________<->______________________________________

    int n;
    cout<<"Enter positive values to bee added in linked list (any negative value to stop):"<<endl;
    while(true){
        cin>>n;
        if(n<0){
            break;
        }

        Node* node = new Node;
        node->data = n;
        node->next = NULL;

        if(head==NULL){
            head=node;
        }
        else{
            Node* ptr = head;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = node;
        }
    }
    cout<<"\nLinked list is : "<<endl;
    
    Node* ptr2 = head;
    while(ptr2 != NULL){
        cout<<ptr2->data<<" ";
        ptr2 = ptr2->next;
    }
    
    
    //______________________________________<->______________________________________
    
    
    //Insertion in start : 
    // add a new Node in the last of the linked list;
    int x;
    cout<<"\nEnter the data to be added in the last: "<<endl;
    cin>>x;
    Node * newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;
    Node* ptr3 = head;
    if(head==NULL){
        head = newNode;
    }else{
        while(ptr3->next != NULL){
            ptr3 = ptr3->next;
        }
        ptr3->next = newNode;
    }
    
    cout<<"\nPrinting linkedlist after adding the element : "<<endl;
    Node* ptr4 = head;
    while(ptr4 != NULL){
        cout<<ptr4->data<<" ";
        ptr4 = ptr4->next;
    }
    
    //______________________________________<->______________________________________


    //Insertion in beggining : ______________________________________
    int y;
    cout<<"\nEnter the value to be added in beggining:"<<endl;
    cin>>y;

    Node* newNode2 = new Node;
    newNode2->data = y;
    newNode2->next = NULL;
    
    if(head==NULL){
        head = newNode2;
    }else{
        newNode2->next = head;
        head = newNode2; 
    }
    cout<<"\nAfter adding element in the start"<<endl;
    Node* ptr5 = head;
    while(ptr5 != NULL){
        cout<<ptr5->data<<" ";
        ptr5 = ptr5->next;
    }

    //______________________________________<->______________________________________

    //Instertion at a given index / position : 
    int pos,ele;
    cout<<"\nEnter the position at which you want to enter the element: "<<endl;
    cin>>pos;
    cout<<"Enter the element to be added : ";
    cin>>ele;
    Node* ptr6; 

    Node* nodee = new Node;
    nodee->data = ele;
    nodee->next = NULL; 

    //not working yet
    
    // if(pos == 1){
    //     nodee->next = head->next;
    //     head = nodee;
    // }
    // else{
    //     for(int i = 1 ; i < pos  ;i++){
    //         ptr6 = ptr6->next;
    //     }
    //     nodee->next = ptr6->next;
    //     ptr6->next = nodee;
    // }

    //printing the linked list ;
    cout<<"\nAfter adding element in the start"<<endl;

    Node* ptr7 = head;
    while(ptr5 != NULL){
        cout<<ptr7->data<<" ";
        ptr7 = ptr7->next;
    }
}