// Lambda-->way to define anonymous fn objects,which are useful for short snippets of code that are used only once or for simple operations

// They allow you to write inline,unnamed fn within your code.


// Basic Syntax
// [capture](parameters){
// return type
// }

#include<iostream>
using namespace std;

int main(){
    auto add=[](int a,int b){
        return a+b;
    };
    cout<<"Sum: "<<add(3,4)<<endl;
    return 0;
}