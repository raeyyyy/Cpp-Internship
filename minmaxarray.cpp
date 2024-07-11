#include <iostream>
using namespace std;

int main(){
    int a[5]={10,20,30,40,50};

    int max=-32678,min=32678;
    for(auto x:a)
    if(x>max){
        max=x;
    }
    cout<<"Max element is : "<<max<<endl;
    
    for(auto x:a)
    if(x<min){
        min=x;
    }
    cout<<"Min element is : "<<min<<endl;
    return 0;
}