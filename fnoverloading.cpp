#include<iostream>
using namespace std;

void add(int a,int b){
    int sum=0;
    sum=a+b;
    cout<<"sum="<<sum<<endl;
}

void add(int a,int b,int c){
    int sum_of_three=0;
    sum_of_three=a+b+c;
    cout<<"sum="<<sum_of_three<<endl;
}

int main(){
    int a,b,c;
    add(4,5);
    add(4,9,6);
    return 0;
}

// fn overloading--> different functions having same name but different parameters

// polymorphism-->ability of a message to be displayed in more than one form
            // 1.Run time
            // 2.Compile time

//USE CASES OF FN OVERLOADING
 