// #include<iostream>
// using namespace std;

// void heapify(int arr[], int n, int i) {
//     int smallest = i;  // Initialize smallest as root
//     int left = 2 * i + 1;  // Left child
//     int right = 2 * i + 2;  // Right child

//     // If left child is smaller than root
//     if (left < n && arr[left] < arr[smallest])
//         smallest = left;

//     // If right child is smaller than smallest so far
//     if (right < n && arr[right] < arr[smallest])
//         smallest = right;

//     // If smallest is not root
//     if (smallest != i) {
//         swap(arr[i], arr[smallest]);

//         // Recursively heapify the affected subtree
//         heapify(arr, n, smallest);
//     }
// }

// void buildMinHeap(int arr[], int n){
//     for(int i = n ; i <= 0 ; i--){
//         heapify(arr,n,i);
//     }
// }

// void printHeap(int arr[],int n){
//     for(int i = 0 ; i < n ; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int n;
//     cin>>n;
    
//     int arr[n];

//     for(int i = 0 ; i < n ; i++){
//         cin>>arr[i];
//     }

//     buildMinHeap(arr,n);

//     printHeap(arr,n);
// }


// " --------------------------------------------------------"
// void swap(int arr[], int a, int b) {
//     int temp = arr[a];
//     arr[a] = arr[b];
//     arr[b] = temp;
// }

// // Heapify the subtree rooted at index i in a max-heap
// void maxHeapify(int arr[], int n, int i) {
//     int largest = i;
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;

//     if (left < n && arr[left] > arr[largest])
//         largest = left;
//     if (right < n && arr[right] > arr[largest])
//         largest = right;

//     if (largest != i) {
//         swap(arr, i, largest);
//         maxHeapify(arr, n, largest);
//     }
// }

// // Build a max-heap from an unordered array
// void buildMaxHeap(int arr[], int n) {
//     for (int i = n / 2 - 1; i >= 0; i--)
//         maxHeapify(arr, n, i);
// }

// // Delete all elements greater than the threshold
// void deleteGreaterThanThreshold(int arr[], int *n, int threshold) {
//     int i = 0;
//     while (i < *n) {
//         if (arr[i] > threshold) {
//             arr[i] = arr[*n - 1];
//             (*n)--;
//             maxHeapify(arr, *n, i);
//         } else {
//             i++;
//         }
//     }
// }

// // Display the elements of the max-heap
// void printMaxHeap(int arr[], int n) {
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }



// " --------------------------------------------------------"