#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);// add at top
    st.push(20);
    st.push(30);
    st.pop(); // remove at top
    st.push(40);
    cout<<st.top();
  
    cout<<st.size()<<endl;
}