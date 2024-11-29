#include <iostream>
using namespace std;

// struct Node{
//     int data;
//     Node* next;
// };

// Node* top = nullptr;


// void push(int data){
//     Node* newNode = new Node;
//     newNode->data = data;
    
//     newNode->next=top;

//     top = newNode;
// }

// void pop(){
//     if(top==nullptr){
//         cout<<"Empty";
//     }
//     else{
//         Node *temp = top;
//         top = top->next;
//         delete temp;
//     }   

// }


// void display(){
    
//     Node* temp = top;

//     while(temp!=NULL){
//         cout<<temp->data<<endl;
//         temp = temp->next;
//     }

// };

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next=nullptr;
    }
};

Node* head;

void push(int data){
    if(head==nullptr){
        head=new Node(data);
    }else{
        Node* newNode = new Node(data);
        newNode->next=head;
        head=newNode;
    }
}

void pop(){
    if(head==nullptr){
        cout<<"Empty Stack";
    }else{
        Node* temp=head;
        head = head->next;
        delete temp;
    }
}

void display(){
    Node* temp = head;
    
    while(temp!=NULL){
        cout<<temp->data<<" , ";
        temp = temp->next;
    } 
}

int main(){
    int n,data;
   while(true){
    cin>>n;
    if(n == -1){
        break;
    }
    if(n==1){
        cin>>data;
        push(data);
    }
    else if(n==2){
        pop();
    }
    else if(n==3){
        display();
    }
    else{
        cout<<"Invalid";
    }
   }
}









