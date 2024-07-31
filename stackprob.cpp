#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
    int choice,ele;
    stack<int>q;
    do{
    cout<<"1.to get the size of stack\n"
        <<"2.Insertion\n"
        <<"3.Deletion\n"
        <<"4.to get the top element\n"
        <<"5.exit"<<endl;
        cin>>choice;

        if(choice==1){
            int size= q.size();
            cout<<"Size of stack : "<<size<<endl;
        }
        if(choice==2){
            cout<<"Enter the element you want to insert:"<<endl;
            cin>>ele;
            q.push(ele);
        }
        if(choice==3){
            q.pop();
        }
        if(choice==4){
            int first= q.top();
            cout<<"top element: "<<first<<endl;
        }
        }
        while(choice!=5);
            return 0;
    }