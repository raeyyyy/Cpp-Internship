#include<iostream>
using namespace std;

int main(){
    int a[5];
    int value=7;
    int count=0,num1,num2,num3;
    cout<<"Enter the elements of array"<<endl;
    for(int i =0;i<5;i++){
        cin>>a[i];
    }

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<5;k++){
                if(a[i]+a[j]+a[k]==value){
                     num1 =a[i];
                     num2 =a[j];
                     num3 =a[k];
                     cout<<"pair"<<"["<<num1<<","<<num2<<","<<num3<<"]"<<endl;
                    count++;
                }
            }
        }
    }
    cout<<"the count of pairs "<<value<<" is "<<count<<endl;
    
    return 0;
}