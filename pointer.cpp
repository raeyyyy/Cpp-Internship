#include<iostream>
using namespace std;


int main(){
    int i=10;
    
    int *j=&i;
    cout<<j;
    return 0;
}
//* can be used with variable,expression,constant
// & can be used with variable


// int main(){
//     const char *message{"Hello World!"};
//     cout<<"message :"<<message<<endl; //Hello World!
//     //*message = "B";  //Compiler error
//     cout<<"*message: "<<*message<<endl; //H
//     // Allow users to modify the string
//     char message1[] {"Hello World!"};
//     message1[0]='B';
//     cout<<"message1 : "<<message1<<endl; //Bello World
//     return 0;
// }