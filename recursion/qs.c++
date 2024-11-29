#include<iostream>
using namespace std;

int partition(int arr[] , int low , int high){
    int piv = arr[high];
    int i = low -1;
    int j = low;

    while(j < high){
        if(arr[j]< piv){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void qs(int arr[],int low , int high){
    if (low<high){
        int p = partition(arr,low,high);
        qs(arr,low,p-1);
        qs(arr,p+1,high);
    }
}

int main(){
    int arr[5] = {4,2,3,7,9};
    qs(arr,0,4);
    for(int i = 0 ; i < 5; i++){
        cout<<arr[i]<<" ";
    }
}