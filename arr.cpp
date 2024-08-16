#include <iostream>
using namespace std;

int main(){
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0 ; i < sizeof(arr)/4 ; i++){
        if(arr[i]%2 == 0){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
    }
    return 0;
}