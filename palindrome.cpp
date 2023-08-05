#include <bits/stdc++.h> 
using namespace std;
int main(){
    long long int a=1000000;
    char st[a],temp; 
    cin >> st;
    for (int i=0;i<a;i++){
        st[0]=temp;
        st[i+1]=st[i];
        temp=st[a];
        if(st[i]==st[a-i]){
            for(int j=0;j<a;j++){
                cout << st[i];
            }
        }else{
            cout << "NO SOLUTION";
        }
    }

    return 0;
}