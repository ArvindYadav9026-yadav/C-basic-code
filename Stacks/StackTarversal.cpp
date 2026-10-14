#include<iostream>
#include<stack>
using namespace std;
void printtotoptobattom(stack<int>&st   ){
    stack<int>helper;
    while(st.size()>0){
        cout<<st.top()<<"";
        helper.push(st.top());
        st.pop();
    }
    // put back 
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
    }
}
void printtobottomtotop(stack<int>&st){
    stack<int>helper;
    while(st.size()>0){
       
        helper.push(st.top());
        st.pop();
    }
    // put back 
    while(helper.size()>0){
         cout<<st.top()<<"";
        st.push(helper.top());
        helper.pop();
    }
}
void push(int idx, int val,stack<int>&st){
    stack<int>helper;
    while(st.size()>idx){
       
        helper.push(st.top());
        st.pop();
    }
     st.push(val);
    // put back 
    while(helper.size()>0){
     
        st.push(helper.top());
        helper.pop();
    }
}
void pop(int idx,stack<int>&st){
    stack<int>helper;
    while(st.size()>idx){
       
        helper.push(st.top());
        st.pop();
    }
     helper.pop();
    // put back 
    while(helper.size()>0){
      
     
        st.push(helper.top());
        helper.pop();
    }
}
int main(){
    stack<int> st;
    
    st.push(18);
    st.push(33);
    st.push(1);
    st.push(45);
    st.push(7);

    printtobottomtotop(st);
    printtotoptobattom(st);
    push(2,99,st);
    printtobottomtotop(st);

}