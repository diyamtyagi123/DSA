#include <bits/stdc++.h>
using namespace std; 

int main(){
    long long int a, b, sum=0;
    cin >> a;
    for(int i =1;i<a;i++){
        cin >> b;
        sum += b;
    }
    sum = a*(a+1)/2 - sum;
    cout << sum;
    return 0;
}