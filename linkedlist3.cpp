#include<iostream>
#include<list>
#include<iterator>

using namespace std;
int main(){
    list<int>l={1,2};
    list<int>::iterator itr=l.begin();
    cout<<"Initial list: "<<endl;
    for(int n:l){
        cout<<n<<" ";
    }
    cout<<endl;
    if(!l.empty()){
    l.push_back(3);}
    else{
        advance(itr, 0);
        l.insert(itr,6);
    }

    cout<<"Final list: "<<endl;
    for(int n:l){
        cout<<n<<" ";
    }
    return 0;
}