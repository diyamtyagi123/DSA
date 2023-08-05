#include <bits/stdc++.h> 
using namespace std;

long long int chess(long long int n) {
    long long int a = ((n*n*((n*n)-1)) / 2) - 4*(n-1)*(n-2);
    return a;
}

int main() {
    long long int a;
    cin >> a;

    for (long long int i = 1; i <= a; ++i) {
        cout << chess(i) << "\n";
    }
    return 0;
}
