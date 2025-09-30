#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node (int val){
        data=val;
        next=nullptr;
    }
};

class Stack{
    public:
         Node* top;
         Node* head;
        Stack(){
             top=nullptr;
             head=nullptr;
        }

        void push(int val){
            Node* newNode = new Node(val);
            cout<<endl<<val<<" Pushed"<<endl;
            if(head==nullptr){
                head=newNode;
                top=newNode;
            }
            else{
                newNode->next=top;
                top=newNode;
            }
        }

        void pop(){
            if(top==nullptr){
                cout<<"Underflow"<<endl;
            }
            else{
                Node* temp = top;
                top=top->next;
                cout<<temp->data<<" Popped"<<endl;
                delete temp;
            }
        }

        void show(){
            Node* ptr=top;
            cout<<endl<<"Stack Elements: "<<endl;
            while(ptr!=nullptr){
                cout<<ptr->data<<endl;
                ptr=ptr->next;
            }
            cout<<endl;
        }
};

int main(){
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.show();
    s1.pop();
    s1.show();
    s1.pop();
    s1.show();
}