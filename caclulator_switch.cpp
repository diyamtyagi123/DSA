#include <iostream>
using namespace std;
int cal(int i,int j,int x){
    switch(x){
        case 1:
        cout<<i+j<< endl;
        break;
        case 2:
        cout<<i-j<< endl;
        break;
        case 3:
        cout <<i*j<< endl;
        break;
        case 4:
        cout<<i/j<< endl;
        break;
        default:
        cout<<"number invalid";

    }
}
int main(){
    int a,b,x;
    cout <<"enter two numbers :";
    cin>>a>>b;
    cout <<"enter the choice :"<<endl<<"1 - add"<<endl<<"2 - sub"<<endl<<"3 - product"<<endl<<"4 - divide"<<endl;
    cin>>x;
    cal(a,b,x);
}