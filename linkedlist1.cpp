#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int>numbers={1,2,3,4};
    cout<<"List Elements: ";
    for(int number:numbers){
        cout<<number<<", ";
    }
    numbers.push_front(0);
    numbers.push_back(5);

    cout<<endl<<"Inserted list: ";
    for(int number:numbers){
        cout<<number<<", ";
    }

    numbers.pop_front();
    numbers.pop_back();

    cout<<endl<<"Final list: ";
    for(int number:numbers){
        cout<<number<<", ";
    }
    return 0;
}