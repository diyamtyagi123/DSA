#include <bits/stdc++.h> 
using namespace std;

int main(){
    long long int n, x1, x2, count=0;
    cin >> n >> x1;
    for(long long int i=0; i<n-1; i++){
        cin >> x2;
        if (x2<x1){
            count += x1-x2;
        }
        else{
            x1=x2;
        }
    }
    cout << count;
    return 0;
}