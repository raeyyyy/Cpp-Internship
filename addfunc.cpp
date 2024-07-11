#include<iostream>
using namespace std;

void add(int a,int b){
    int sum=0;
    sum=a+b;
    cout<<"sum="<<sum<<endl;
}

void sub(int a,int b){
    int sub=0;
    sub=a-b;
    cout<<"subtraction="<<sub<<endl;
}

void mul(int a,int b){
    int product;
    product=a*b;
    cout<<"product="<<product<<endl;
}

void division(int a,int b){
    int quotient;
    quotient=a/b;
    cout<<"quotient="<<quotient<<endl;
}

void rem(int a,int b){
    int rem;
    rem=a%b;
    cout<<"remainder="<<rem<<endl;
}

int main(){
    int a1,b1;
    cin>>a1>>b1;
    add(a1,b1);
    sub(a1,b1);
    mul(a1,b1);
    division(a1,b1);
    rem(a1,b1);

return 0;
}