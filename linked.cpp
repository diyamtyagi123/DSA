#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};
class Linkedlist{
    public:
    Node* head;
    Linkedlist(int d){
        head=new Node(d);
        
    }
    void insert(int d){
        Node* p=new Node(d);
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }temp->next=p;
    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"-->";
            temp=temp->next;
        }
    }
};
int main(){
    Linkedlist L(2);
    for(int i=0;i<100;i+=5){
        L.insert(i);
    }
   
    L.print();
}