#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    int temparr[n];

    for(int i = 0 ; i < n ; i++){
        cout<<"Enter the " << i+1 << " element"<<endl;
        cin >> arr[i];
    }
    
    for(int i = 0 ; i < n ; i++){
        temparr[i] = arr[i];
    }

    for(int i = 0 ; i < n ; i++){
        arr[i] = temparr[abs((n-1)-i)];
    }

    for(int i = 0 ; i < n ; i++){
        cout<<temparr[i]<<" ";
    }

    cout<<""<<endl;

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    

}