#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int m, int r){
        vector<int> temp;
        int left = l;
        int right = m+1;
        
        while(left<=m && right<=r){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            if(arr[right]<=arr[left]){
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=m){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=r){
            temp.push_back(arr[right]);
            right++;
        }
        
        for (int i = l ; i <= r ; i++){
            arr[i] = temp[i-l];
        }
}

void mergeSort(vector<int> &arr,int l , int r){
    if(l>=r){
        return;
    }
        
    int m = (l+r)/2;
        
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
        
    merge(arr,l,m,r);
}




int main() {

    vector<int> arr = {4,7,6,5,4,5,5,5,7,3,2,1}  ;
    int n = 7;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    
    mergeSort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}