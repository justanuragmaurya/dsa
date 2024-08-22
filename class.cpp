#include <iostream>
using namespace std;

void question1(int x, int y , int z){
    if(x>y && x>z){
        cout<<x;
    }else if( y> z && y>x){
        cout<<y;
    }else if( z> y && z>x){
        cout<<y;
    }
    else{
        cout<<"all equal";
    }
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    question1(x,y,z);
}