#include<iostream>
using namespace std;

void printArr(int arr[],int size){
     for(int i = 0; i < size ; i++){
        cout<<arr[i];
     }
}

void swapalternate(int arrr[],int size){
    
    for(int i = 0 ;  i < size; i=i+2){
        if(i+1 < size){
        swap(arrr[i],arrr[i+1]);
        }
    }
    printArr(arrr,size);
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    swapalternate(arr,9);
}
