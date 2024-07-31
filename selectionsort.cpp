#include<iostream>
using namespace std;

int main(){
    int n,min=0,temp;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
                temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}