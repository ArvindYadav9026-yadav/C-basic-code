#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next=NULL;
    }
    };
    void print(Node* head){
       Node*temp=head;
       while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;

       }
       cout<<endl;

    }
    void printrec(Node* head){
     if(head==NULL) return;
     cout<<head->val<<endl;
    printrec(head->next);
    }

int main(){
  Node* a=new Node(7);
  Node* b=new Node(0);
  Node* c=new Node(1);
  Node* d=new Node(8);
  Node* e=new Node(2);

  a->next=b;
  b->next=c;
  c->next=d;
  d->next=e;

print(a);
printrec(a);
//   e->next=NULL;


  cout<<a->val<<endl;
  cout<<a->next->val<<endl;
  cout<<a->next->next->val<<endl;
   cout<<a->next->next->next->val<<endl;
     cout<<a->next->next->next->next->val<<endl;
}
