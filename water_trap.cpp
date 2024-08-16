#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height){
        int l = 0 ;
        int r = height.size()-1;
        int max  = 0; 

        while(l<r){
            if(height[l] > height[r]){
                max = height[r]*(l-r);
                r--;
            }
            else{
                max = height[l]*(l-r);
                l--;
            }
        }
        return max;

}

int main(){
    vector<int> vec = {1,8,6,2,5,4,8,3,7};
    cout<<maxArea(vec);
}