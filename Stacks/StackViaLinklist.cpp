#include<iostream>
// #include<stack>
using namespace std;
class Node{
        public:
        int val;
        Node*next;
        Node(int val){
            this->val=val;
            next=NULL;
        }
    };
    class MyStack{
        private:
         Node*head;
        Node*tail;
        int length;
        public:
       
        MyStack(){
            head=tail=NULL;
            length=0;
        }
        void Push(int val){
            Node*n=new Node(val);
            n->next=head;
            head=n;
            length++;


        }
        void pop(){
            if(length==0){
                cout<<"Stack is Empty!"<<endl;
                return ;
            }
            Node *toBeDeleted=head;
            head=head->next;
            delete toBeDeleted;
            length--;

        }
        int get(){
              if(length==0){
                cout<<"Stack is Empty!"<<endl;
                return -1;
            }
            return head->val;
        }
        int size(){
            return length;
        }
        void display(){
            Node*temp=head;
            while(temp){
                cout<<temp->val<<endl;
                temp=temp->next;
            }
            cout<<endl;

        }


    };
int main(){
    MyStack st;
    st.Push(10);// add at top
    st.Push(20);
    st.Push(30);
    st.pop(); // remove at top
    st.Push(40);
    // cout<<st.top();
    st.display();
}