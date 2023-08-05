#include <iostream>
using namespace std;
int circle(int x){
    cout << "the circumference is " << (2*3.14159*x)<<endl;
    
    cout << "the area is " << (x*3.14159*x);
}
int main(){
    int x;
    cin >> x;
    circle (x);
    return 0;
}