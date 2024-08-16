#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int partition(vector<int> &arr,int l,int h){
    int index;
    int i = l;
    int j = h;
    int piviot = l;

    while(i<j){
        if(arr[i]<=arr[piviot]){
            i++;
        }
        while(arr[j])
    }
    return index;
}

void qs(vector<int> &arr,int low,int high){
    
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
    
}

int main(){
    vector<int> arr = {4,7,6,5,4,5,5}  ;
    int n = 7;
}