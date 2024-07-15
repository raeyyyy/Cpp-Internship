#include<iostream>
#include<array>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>a;
    int ele;
    for(int i=0;i<5;i++){             
        cin>>ele;
         a.push_back(i);  
    }

    int cap=a.capacity();                   //capacity-0,1,2,4....
    cout<<"Capacity is "<<cap;

    int first=a.front();
    cout<<first;

    int last=a.back();
    cout<<last;

    a.resize(10);

    a.clear();

    cout<<"before pop ="<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    a.pop_back();
    cout<<"after pop ="<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
// cout<<"before clear size= "<<v.size()<<endl;
//     v.clear();
//     cout<<"after clear size= "<<v.size()<<endl;

// another way to create vector

// vector<int>v(5,1);
// means size is 5 and all five default value is 1
// cout<<"print all element"<<endl;
// for(int i:v){
//     cout<<i<<" ";
// }
    return 0;
}