// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node*next;
//     Node*prev;
//     Node(int val){
//         this->val=val;
//         next=prev=NULL;

//     }
// };
//     class MyDoublyLinkedList{
//         private:
//         Node*head;
//          Node*tail;
//           int length;
//     public:
    
//     MyDoublyLinkedList(int val){
//         head=tail=NULL;
//         length=0;
      

//     }
//     void insertAtTail(int val){
//        Node*n =new Node(val);
//        if(length==0) head=tail=n;
//        else{
//         tail->next=n;
//         n->prev=tail;
//            tail=n;

//        }
//        length++;



//     }
//     void insertAthead(int val){
//        Node*n =new Node(val);
//        if(length==0) head=tail=n;
//        else{
//         n->next=head;
//         head->prev=n;
//            head=n;

//        }
//        length++;





//     }
//     void removeAthead(int val){
//        Node*n =new Node(val);
//        if(length==0) cout<<"List is empty";
//        else{
//         head=head->next;
//         head->prev=NULL;
      

//        }
//        length--;



//     }
//     void removetAtTail(int val){
//        Node*n =new Node(val);
//        if(length==0) cout<<"list is empty";
//        else{
//         tail=tail->prev;
//         tail->next=NULL;
           

//        }
//        length--;

//     }
//      void insert(int idx,int val){
//        Node*n =new Node(val);
//        if(length==0) head=tail=n;
//        else{
//         tail->next=n;
//         n->prev=tail;
//            tail=n;

//        }
//        length++;

//     // int size(){
//     //     return length;
//     // }
// };



// // int main(){
// //     MyDoublyLinkedList ;
    
  
// // }//

//     }