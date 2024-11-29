#include<iostream>
using namespace std;

void merge(int arr[], int l , int m , int h){
    int n1 = m-l+1;
    int n2 = h-m;

    int left[n1];
    int right[n2];

    for(int i = 0 ; i < n1 ; i++){
        left[i] = arr[l+i];
    }

    for(int i = 0 ; i < n2 ; i++){
        right[i] = arr[m+1+i];
    }

    int i = 0 , j = 0, k=l;

    while(i<n1 && j<n2){
        if(left[i] < right[j]){
            arr[k++] = left[i++];
            
        }else{
            arr[k++] = right[j++];
        }
    }
    while(i<n1){
        arr[k++] = left[i++];
    }
    while(j<n2){
        arr[k++] = right[j++];
    }
};

void sort(int arr[],int l,int h){
    int m = (l+h)/2;
    if(l>=h){
        return;
    }
    sort(arr,l,m);
    sort(arr,m+1,h);
    merge(arr,l,m,h);

}
int main(){
    int arr[6] ={1,45,54,32,0,-2};
    sort(arr,0,5);
    for(int i  = 0 ; i < 6 ; i++){
        cout<<arr[i]<<" ";
    }
}