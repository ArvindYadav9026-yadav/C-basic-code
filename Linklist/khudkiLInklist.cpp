#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
    }
};
 class MYLInkedList{
private:
  Node* head;
    Node* tail;
    int size;


    public:
    MYLInkedList(){
        head=tail=NULL;
        size=0;
    }
    void display(){
        Node*temp=head;
       while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;

       }
       cout<<endl;

    }
    void insertAtTail(int val){
        Node* n =new Node(val);
        if(size==0) head=tail=n;
        else{tail->next=n;
        tail=n;
        }
        size++;


    }
     void insertAthead(int val){
        Node* n =new Node(val);
        if(size==0) head=tail=n;
        else{
            n->next=head;
        head=n;
        }
        size++;


    }
    void removeAthead(){
        if(size==0){
            cout<<"List is empty";
            return;
        }
        head=head->next;
        size--;

    }
    void length(){
        // return size;
    }

    
 };

int main(){
   MYLInkedList list;
   list.insertAtTail(10);
   list.insertAtTail(20);
   list.insertAtTail(30);
   list.insertAthead(40);
   list.removeAthead();
   list.display();
//    cout<<list.size<<endl;
// cout<<list.length()<<endl;


}