#include <bits/stdc++.h> 
using namespace std;  
void permutation(int *num, long long int n){
    int i;
    for ( i = 0 ; i < n ; i++)
        cout << num[i];
    cout << " ";
}
int main(){
    long long int N;
    int num[N];
    int *ptr;
    int temp;
    long long int i, n, j;
    cin >> n;
    for (i = 0 ; i < n; i++)
        cin >> num[i];
    for (j = 1; j <= n; j++) {
        for (i = 0; i < n-1; i++) {
            temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
            
        }if (num[i]-num[i+1]!=1 && num[i]-num[i+1]!=-1)
                permutation(num,n);
            else
                cout << "NO SOLUTION";
    }
    return 0;
}