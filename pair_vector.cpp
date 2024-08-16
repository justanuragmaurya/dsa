#include<bits/stdc++.h>
using namespace std;

int main(){
    
    
    //pair

    pair <int, int> p1 = {1,2};
    cout<<p1.first<<"   "<<p1.second<<endl;
    
    cout<<"_____________________________________________________"<<endl;
   
    //vector  : almost same as array
    vector<int> v ;
    v.push_back(1);
    cout<<v[0];
    cout<<"_____________________________________________________"<<endl;

    //iterator

    // v.begin(); make the index = 0 ; if you do i++ the memory shifts to the next place that is index 1
    vector <int>::iterator it  = v.begin();
    cout<<*(it);
    cout<<"_____________________________________________________"<<endl;

    //v.end ==> end of vector  ,Reveresed = v.rbegin , v.rend 
    //instead of defining the iterator  we can use auto Example :
    // intead of vector<int>::iterator it = v. begin; 
    // we can use auto it = v.begin;

    //printing vector with iterator ; 
    for (auto it = v.begin(); it != v.end() ;it++){
        cout<<*(it);
    }
    cout<<"_____________________________________________________"<<endl;

    //to remove data : 
    //v.erase(v.begin());
    //to erase in a range
    //v.erase(v.begin(),v.end()) ==> it will delte begin to end;

    


}