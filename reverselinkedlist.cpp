#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void reverse(Node*& head) {
    Node* prev = NULL;
    Node* ptr = head;
    Node* nexxt = NULL;

    while (ptr != NULL) {
        nexxt = ptr->next;
        ptr->next = prev;
        prev = ptr;   
        ptr = nexxt;
    }

    head = prev; 
    ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}



int main(){
    int n;
    cin>>n;
    int val;

    Node* head = NULL ;

    for(int i = 0 ; i < n ; i++){
        cin >> val;
        Node* nd = new Node;
        nd->data = val;
        nd->next = NULL;

        if(head==NULL){
            head=nd;
        }else{
            Node*ptr = head;
            while(ptr->next !=NULL){
                ptr = ptr->next;
            }
            ptr->next=nd;
            nd->next = NULL;
        }
    }




    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }

    reverse(head);
}