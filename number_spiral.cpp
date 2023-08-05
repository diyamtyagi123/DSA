#include <bits/stdc++.h> 
using namespace std;

int main(){
    long long int a , x , y;
    cin >> a;
    for(int i=0;i<a;i++){
        cin >> x >> y;
        if(x==y){
            cout << (x*y)-(x-1);
        }
        else{
            if(x>y){
                if(x%2==0){
                    cout << (x*x)+(x-y)-(x-1);
                }
                else{
                    cout << (x*x)-(x-y)-(x-1);
                }
            }
            else{
                if(y%2==0){
                    cout << (y*y)-(y-x)-(y-1);
                }
                else{
                    cout << (y*y)+(y-x)-(y-1);
                }
            }
        }
        cout << endl;
    }    
     return 0;
}