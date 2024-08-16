#include<iostream>
using namespace std;

int main(){
    
    int arrA[5] = {1,4,5,7,8};
    int arrB[4] = {5,7,9,13};
    int arrC[9];

    int i=0 , j=0 , k = 0;

    while (i < 5 && j < 4){
        if(arrA[i]<arrB[j]){
            arrC[k] = arrA[i];
            i++;
            k++;
        }
        else{
            arrC[k] = arrB[j];
            j++;
            k++;
        }
    }

    while(i < 5){
        arrC[k] = arrA[i];
        i++;
        k++;
    }

    while(j < 4) {
        arrC[k] = arrB[j];
        j++;
        k++;
    }
    
    for(int m = 0 ; m < 9 ; m++){
        cout<<arrC[m]<<" ";
    }
    
    return 0;
}