#include<iostream>
using namespace std;

int main(){
    
    int arr[5] = {1,4,5,7,8};
    int arr2[4] = {5,7,9,13};
    int arr3[9];

    int i=0 , j=0 , k = 0;

    while (i < 5 && j < 4){
        if(arr[i]<arr2[j]){
            arr3[k] = arr[i];
            i++;
            k++;
        }
        else{
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    while(i < 5){
        arr3[k] = arr[i];
        i++;
        k++;
    }

    while(j < 4) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    
    for(int m = 0 ; m < 9 ; m++){
        cout<<arr3[m]<<" ";
    }
    
    return 0;
}