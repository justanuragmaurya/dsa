#include <iostream>
using namespace std;

int findO(int arr[], int  u, int l ,int k){
    int mid;
    int loc = -1;
    while(l<=u){
        mid = (l+u)/2;
        if(arr[mid] > k){
            u = mid-1;
        }else if(arr[mid]<k){
            l = mid+1;
        }else if(arr[mid] == k){
            if(arr[mid-1] == 0){
            return mid;
            }
        }
    }
    return loc;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int k;
    int u = n-1;
    int l = 0;
    int found = findO(arr,u,l,k=1);
    cout<<found;
}