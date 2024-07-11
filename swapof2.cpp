#include<iostream>
using namespace std;

// int main(){
//     int a=10,b=20,c;
//     c=a;                     
//     a=b;
//     b=c;
//     cout<<"a="<<a<<endl;
//     cout<<"b="<<b<<endl;
//     return 0;
// }

// using EXOR
int main(){
    int a=10,b=20,c;
    a=a^b;                     
    b=a^b;
    a=a^b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}