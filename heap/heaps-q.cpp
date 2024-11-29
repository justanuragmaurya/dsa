#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

void heapify(int arr[], int n, int i) {
    //Type your code here
    int min = i;
    
    int l = (2*i) + 1;
    int r = (2*i) + 2;
    
    if(l < n && arr[l]<arr[min]){
        min = l;
    }
    if(r < n && arr[r]<arr[min]){
        min = r;
    }
    
    if(min != i){
        swap(arr[i],arr[min]);
        heapify(arr,n,min);
    }
}

void buildMinHeap(int arr[], int n) {
    //Type your code here
    for(int i = n ; i >= 0 ; i--){
        heapify(arr,n,i);
    }
}

void deleteMin(int arr[], int& n) {
    //Type your code here
    swap(arr[0],arr[n-1]);
    heapify(arr,n,0);
    n--;
}

void displayHeap(int arr[], int n) {
    //Type your code here
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    buildMinHeap(arr, n);
    deleteMin(arr, n);
    displayHeap(arr, n);
    return 0;
}



void dfs(int graph[100][100],int start){

}