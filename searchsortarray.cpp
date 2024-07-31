#include<iostream>
using namespace std;

int arr[]={44,5,67,12,89,45},temp,mid;

void sorting(){
    for(int i=4;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted array "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i];
        cout<<" ";
    }
    cout<<endl;
}

void binary_search(){
    int ele,l=0,r=5;
    cout<<"Element you want to search:"<<endl;
    cin>>ele;
    while(l<=r){
    if(l<=r){
        mid=(l+r)/2;
    }
    if(arr[mid]==ele){
        cout<<"Element found at index "<< mid<<endl;

        break;
    }
    else if(arr[mid]>ele){
       r=mid-1;
    }
    else{
        l=mid+1;
    }
    }
}

int main(){
    sorting();
    binary_search();
    return 0;
}