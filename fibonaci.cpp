#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int a = 0, b = 1, c;
    cout<<"0\n";
    for (int i = 0; i < n; i++){
        c = a + b;
        a = b;
        b = c;
        cout << c << endl;
    }
    return 0;
}
