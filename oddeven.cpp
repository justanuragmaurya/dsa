#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"Even";
    }
    else if(n == 0){
        cout<<"Zero";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}