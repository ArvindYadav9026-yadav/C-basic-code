#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
    }
};
class MYLInkedList
{
private:
    Node *head;
    Node *tail;
    int size;

public:
    MYLInkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void insertAtTail(int val)
    {
        Node *n = new Node(val);
        if (size == 0)
            head = tail = n;
        else
        {
            tail->next = n;
            tail = n;
        }
        size++;
    }
    void insertAthead(int val)
    {
        Node *n = new Node(val);
        if (size == 0)
            head = tail = n;
        else
        {
            n->next = head;
            head = n;
        }
        size++;
    }
    void insertatidx(int idx, int val)
    {
        if(idx<0 or idx>=size){
            cout<<"invalid"<<endl;
            return;
        }
        if(idx==0)
        
        {
            insertAthead(val);
            return;
        }
        if(idx==size){
            insertAtTail(val);
            return;  
        }
        Node *n = new Node(val);
        Node *temp = head;
        for (int i = 0; i < idx - 1; i++)
        {
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
        size++;
    }
    int get( int idx){
          if(idx<0 or idx>=size){
            cout<<"invalid"<<endl;
            return -1   ;
        }
        Node* temp = head;
        for(int i=1; i<idx; i++){
            cout<<temp->val<<endl;
        }

    }
    void removeAthead()
    {
        if (size == 0)
        {
            cout << "List is empty";
            return;
        }
         Node* toDeleted =head;
        head = head->next;
         delete toDeleted;
        size--;
    }
    void remove( int idx){
         if(idx<0 or idx>=size){
            cout<<"invalid"<<endl;
            return   ;
        }
        if(idx==0){
            removeAthead();
            return;
        }
        Node* temp =head;
        for(int i=0; i<=idx-1;i++){
            temp=temp->next;
        }
        Node* toDeleted =temp->next;
        temp->next=temp->next->next;
        if(idx==size-1) tail=temp;
        delete toDeleted;
        size--;

    }

    void length()
    {
        // return size;
    }
};

int main()
{
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