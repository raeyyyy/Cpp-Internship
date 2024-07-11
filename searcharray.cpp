#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50};
    int inp,count=0,flag=0;
    cout<<"Enter the number you want to search in array:"<<endl;
    cin>>inp;

    for(auto x: arr){
        if(inp==x){
             flag=1;
             break;
        }
        count++;
    }
    if(flag==1){
        cout<<"Number found at index "<<count<<endl;
    }
    else{
        cout<<"number not found"<<endl;
    }
        return 0;

}