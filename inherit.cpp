#include<iostream>
#include<string>
using namespace std;

class Bicycle
{
public:
int wheels=2;
string speed="less";
string autonomous="no";
int seat=1;
};

class Bike:public Bicycle
{
public:
string speed="high";
string autonomous="yes";
int seat=2;
};

class Car:public Bike
{
public:
int wheels=4;
int seat=4;
};

class Truck:public Car
{
public:
int wheels=16;
string speed="moderate";
};

int main()
{
Bike b;
cout<<"Class Bike"<<endl;
cout<<b.wheels<<" "<<b.speed<<" "<<b.seat<<" "<<b.autonomous<<endl;

Car c;
cout<<"Class Car"<<endl;
cout<<c.wheels<<" "<<c.speed<<" "<<c.seat<<" "<<c.autonomous<<endl;

Truck t;
cout<<"Class Truck"<<endl;
cout<<t.wheels<<" "<<t.speed<<" "<<t.seat<<" "<<t.autonomous<<endl;
}

