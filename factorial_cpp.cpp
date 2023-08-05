#include <iostream>
using namespace std;

int main()
{
    int n;
    int fact=1;
    cout<<" Enter a number : "<<endl;
    cin>> n;
    int i=1;
    if(n>=0)
    {
        do
        {
            fact=fact* i;
            i=i+1;
        }while(i<=n);
        cout<<"Factorial of "<< n <<" = "<<fact <<endl;
    }
    else
        cout<<"Enter positive number"<<endl;
    
    return 0;

}
