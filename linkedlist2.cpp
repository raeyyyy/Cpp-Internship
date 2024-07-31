#include<iostream>
#include<list>
#include<iterator>

using namespace std;

// int main(){
//     // create a list
//     list<int>l={1,2,3,4,5};
//     // create an iterator to point to the first element of the list
//     list<int>::iterator itr=l.begin();
//     // increment itr to point to the 2nd element
//     ++itr;
//     // display the 2nd element
//     cout<<"Second element: "<<*itr<<endl;
//     // increment itr to point 4th ele
//     ++itr;
//     ++itr;
//     // display 4th ele
//     cout<<"Fourth element: "<<*itr;
//     return 0;
//     }

 

int main() {
    // create a list
    list<int> l = {1, 2, 3, 4, 5};

    // create an iterator to point to the first element of the list
    list<int>::iterator itr = l.begin();

    // use advance to move the iterator to point to the 2nd element
    advance(itr, 2);
    // display the 2nd element
    cout << "Second element: " << *itr << endl;

    // use advance to move the iterator to point to the 4th element
    advance(itr, 2);
    // display the 4th element
    cout << "Fourth element: " << *itr << endl;

    return 0;
}
