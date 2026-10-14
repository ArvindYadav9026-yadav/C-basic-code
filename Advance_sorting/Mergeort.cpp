#include <iostream>
#include<vector>
using namespace std;


void print(vector<int>&arr){
    for(int ele:arr) 
    cout<<ele<<" ";
    cout<<endl;
}
void merge(vector<int>&a,vector<int>&b,vector<int>&c)
{
 int i=0,j=0,k=0;
 while(i<a.size() && j<b.size()){
    if(a[i]<b[j]){
        c[k++]=a[i++];
    }
    else c[k++]=b[j++];
 }
 while(i<a.size()) c[k++]=a[i++];
 while(j<b.size()) c[k++] =b[j++];
}

void mergeSort(vector<int>&arr){

    int n=arr.size();
    if(n==1) return;
    vector<int>a(n/2);
    vector<int> b(n/2);
    int idx=0;
    for(int i=0; i<n/2; i++){
        a[i] =arr[idx++];
        
    }
    for(int i=0; i<n-n/2;i++){
        b[i]=arr[idx++];
    }
    mergeSort(a);
    mergeSort(b);
    merge(a,b,arr);

       

}

int main(){
    vector<int>arr ={5,2,8,3,7,1,4,6};
   print(arr);
   mergeSort(arr);
   print(arr);
    
    
}