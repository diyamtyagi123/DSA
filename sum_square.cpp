#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<" Enter a number : ";
    cin>> n;
    int sum1=0,sum2 =0;
    for(int i=0;i<n+1;i++){
        sum1 =sum1+ i;
        sum2 =sum2+(i*i);
    }
    cout<<"sum of natural no. is "<< sum1<< "\n";
    cout<<"sum of square of natural no. is "<< sum2<< "\n";
    
    
    return 0;

}
