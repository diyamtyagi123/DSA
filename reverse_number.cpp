#include <iostream>
using namespace std;

int main()
{
    int n,x,y=0;
    cout<<" Enter a number : "<<endl;
    cin>> n;
    while(n>0){
        x=n%10;
        y= y*10 + x;
        n/=10;
    }
    cout << y;
    
    return 0;

}
