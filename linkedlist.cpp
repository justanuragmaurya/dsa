#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;         // Data stored in the node
        Node* next;       // Pointer to the next node in the linked list
        // Constructors
        Node(int data1, Node* next1) {
            data = data1;
            next = next1;
        }
        // Constructor
        Node(int data1) {
            data = data1;
            next = nullptr;
        }
};

int main(){
    vector<int> data = {1,4,6,3,2};
    Node*y = new Node(data[2]);
    cout<<y;
}