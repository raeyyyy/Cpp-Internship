#include<iostream>
using namespace std;

int main(){
    int n,index;;
     cout<<"Enter the size of array:"<<endl;
     cin>>n;
     int key,arr[n];
     while(1){
     cout<<"Enter 1 to insert\n"
     <<"Enter 2 to delete\n"
     <<"Enter 3 to update\n"
     <<"Enter 4 to read\n"
     <<"Enter 5 to exit\n";
      
    cin>>key;
    if(key==1){
        cout<<"Insertion operation working"<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }
    if(key==2){
        cout<<"Delete operation working"<<endl;
        cout<<"Enter the index of element to delete"<<endl;
        cin>>index;
        for(int i=index;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        n--;
        cout<<"Element deleted"<<endl;
    }
    if(key==3){
        int ele;
        cout<<"Update operation working"<<endl;
        cout<<"Enter the element and index:"<<endl;
        cin>>ele>>index;
        arr[index]=ele;
    }
    if(key==4){
        cout<<"updated array"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<endl;
            cout<<" ";
        }
    }
     }
    return 0;
}