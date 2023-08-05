#include <bits/stdc++.h> 
using namespace std;
int zeros(int n) {
    int count = 0; 
    for (int i = 5; n / i >= 1; i *= 5) 
        count += n / i; 
    cout << count; 
} 
int main(){
    long long int a;
    cin >> a;
    zeros(a);
    return 0;
}