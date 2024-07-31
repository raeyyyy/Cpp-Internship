#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    l.push_back(10);
    l.push_back(12);
    l.push_back(12);
    l.push_back(11);
    for(int i:l){
        cout<<i<<endl;
    }
    return 0;
}