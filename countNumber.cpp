#include<bits/stdc++.h>
using namespace std;
int main(){
    // :: COUNTING APPEARANCE OF INT IN A ARRAY ::
    // int hash[10] = {0};
    // vector<int> n = {1,5,6,7,9,5,6,0,0,7,5,4,8,3,7};
    // for(int i = 0 ; i < n.size(); i++){
    //     hash[n[i]]++ ;
    // }
    
    // for(int i = 0 ; i < 10; i++){
    //     cout << i <<" : "<< hash[i] << " " <<endl;
    // }
    
    // :: COUNTING APPEARANCE OFCHARECTER IN A ARRAY ::
    int hash[256];

    vector<char> n = {'a','b','k','g','a','z','g','r','a','h','a','g'};

    for(int i= 0 ; i < n.size() ; i++){
        hash[int(n[i])]++ ;
    }

    char q;
    cin >> q;

    for(int i = 0 ; i < n.size() ; i++){
        if(hash[i] = int(q)){
            cout<< i << " : " <<hash[i]<< endl;
        }
    }


}