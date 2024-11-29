#include <iostream>
using namespace std;

int stack[5];
int top = -1;

void push(int data){
    if(top == 4){
        cout<<"\nStack Overflow ! ";
    }
    else{
        stack[++top] = data;
        cout<<"\nAdded : "<<stack[top];
    }
}

void pop(){
    if(top==-1){
        cout<<"\nStack underflow";
    }else{
        cout<<"\nremoved : "<<stack[top--];
    }
}

int main(){
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);
    push(0);
    cout<<endl;
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
}