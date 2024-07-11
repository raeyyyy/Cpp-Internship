#include<iostream>
using namespace std;

int main(){
    int a[5]={10,20,30,40,50};

    int sum=0;
    for(auto x:a)
        sum+=x;
        cout<<"Sum is : "<<sum<<endl;
    return 0;
}