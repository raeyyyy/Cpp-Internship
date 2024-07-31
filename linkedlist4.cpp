#include<iostream>
#include<list>
using namespace std;
// int main(){
//     list<int> numbers={1,2,1,3,4,1};
//     cout<<"initial list: ";
//     for(int number:numbers){
//         cout<<number<<", ";
//     }
//     numbers.remove(1);
//     cout<<endl<<"final list: ";
//       for(int number:numbers){
//         cout<<number<<", ";
//     }
// return 0;3
// }

// using iterator

int main()
{
    list<int>numbers{0,1,2,3,4,3};
    list<int>::iterator itr=numbers.begin();
    //display the original list
    cout<<"Initial List: ";
    for(int number:numbers)
    {
        cout<<number<<" ,";
    }
    for(int i=0;i<3;i++)
    {
        ++itr;
    }
    numbers.remove(*itr);
    cout<<endl<<"Final List :";
    for(int number:numbers)
    {
        cout<<number<<",";
    }
    return 0;
}