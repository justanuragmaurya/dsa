#include <iostream>
#include <vector>
#include <algorithm> // for std::swap

using namespace std;

void printArr(int n,vector<int> arr){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<""<<endl;
}

// -------------------- selection sort --------------------
// void selection_sort(int size,vector<int> arr){
//     for (int i = 0 ; i < size-1 ; i++){
//         int minimum = i; //assume the minimum to be at first position
//         for(int j = i ; j < size ; j++){
//             if(arr[j] < arr[minimum]){
//                 minimum = j ;
//             } 
//         }
//         int t = arr[minimum];
//         arr[minimum] = arr[i];
//         arr[i] = t; 
//     }
// }

// // for descending order sort
// void selection_sort(int size,int arr[]){
//     for (int i = 0 ; i < size-1 ; i++){
//         int max = i; //assume the minimum to be at first position
//         for(int j = i ; j < size ; j++){
//             if(arr[j] > arr[max]){
//                 max = j ;
//             } 
//         }
//         int t = arr[max];
//         arr[max] = arr[i];
//         arr[i] = t; 
//     }
// }
// ------------------------------------------------------------

// -------------------- bubble sort --------------------
// void bubble_sort(int arr[],int n){
//     for(int i = n-1 ; i >= 0 ; i--){
//         for(int j = 0 ; j < i ; j++){
//             if(arr[j] > arr[j+1]){
//                 int t = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = t;
//             }
//         }
        
//     }
// }
//
//
//
// optimised 
// void bubble_sort(int arr[],int n){
//     int didSwap = 0 ;
//     for(int i = n-1 ; i >= 0 ; i--){
//         for(int j = 0 ; j < i ; j++){
//             if(arr[j] > arr[j+1]){
//                 int t = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = t;
//                 didSwap = 1 ;
//             }
//         }
//         if(didSwap==0){
//             break;
//         }
        
//     }
// }

// ------------------------------------------------------------

// -------------------- insertion sort --------------------
// void insertion_sort(int arr[],int n){
//     for(int i =  0; i <= n-1 ; i++){
//         int j = i ; 
//         while(j > 0 && arr[j-1] > arr[j]){
//             int t = arr[j-1];
//             arr[j-1] = arr[j];
//             arr[j] = t;
            
//             j--;
//         }
//     } 
//     } 

// -------------------- merge sort (divide - sort - merge )--------------------
// void mergeall(vector<int> &arr,int l ,int m,int h){
//     vector<int> temp;
//     int left = l;
//     int right = m+1;
//     while(l<=m && right<=h){
//         if(arr[left] <= arr[right]){
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else{
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     while(left <= m){
//         temp.push_back(arr[left]);
//         left++;
//     }

//     while(right <= h){
//         temp.push_back(arr[right]);
//         right++;
//     }


//     for(int i = left ; i <= h ; i++){
//         arr[i] = temp[i-l];
//     }
// }

// void merge_sort(vector<int> &arr,int low,int high){
//     if(low>=high){
//         return;
//     }

//     int mid = (low+high)/2;

//     merge_sort(arr,low,mid);
//     merge_sort(arr,mid+1,high);
//     mergeall(arr,low,mid,high);
// }



// ----------------------strivers code -----------------------------
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2 ;
    mergeSort(arr, low, mid);  // left half
    mergeSort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);  // merging sorted halves
}



int main(){
    vector<int> arr = {13,45,89,1,78,0,98,7};
    int size = 8;
    printArr(size,arr);

    // selection_sort(size,arr);
    // bubble_sort(arr,size);
    // insertion_sort(arr,size);

    mergeSort(arr,0,size-1);
    printArr(size,arr);
}