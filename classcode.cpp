#include<iostream>
using namespace std;

int main(){
    const int n = 5; // Use const for fixed size
    int arr[n] = {1, 4, 7, 4, 2};
    int arr2[n] = {0};

    arr2[0] = arr[0] * arr[1];
    arr2[n-1] = arr[n-1] * arr[n-2];

    for(int i = 1; i < n-1; i++){
        arr2[i] = arr[i-1] * arr[i+1];
    }

    for(int i = 0; i < n; i++){
        cout << arr2[i] << " ";
    }
    return 0;
}