#include<iostream>
using namespace std;

class Numbers{  
    int x,y;
    
    public:
        Numbers(int a,int b){
            x=a;
            y=b;
        }
        void display(){
            cout<<" x: "<<x<<endl;
            cout<<" y: "<<y;
        }

        void operator --(int){
            --x;
            --y;
        }
        void operator --(){
            --x;
            --y;
        }
};

int main(){
    Numbers obj(5,6);
    --obj;
    obj.display();
    cout<<endl;
    obj--;
    obj.display();
}