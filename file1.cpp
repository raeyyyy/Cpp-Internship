#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // opening a text file for writing. you can use open() to open file.
    // ofstream my_file.open("example.txt");
    // ofstream my_file("example.txt");

    // if(!my_file){
    //     cout<<"Error opening the file"<<endl;

    //     // terminate the main() function
    //     return 1;
    // }

    // ofstream my_file("example.txt");
    // my_file.close();

    // if(!my_file.is_open()){
    //     cout<<"Error opening the file"<<endl;

    //     // terminate the main() function
    //     return 1;
    // }

    ofstream my_file("example.txt");
    if(my_file.fail()){
        cout<<"Error opening the file"<<endl;
        return 1;
    }


    // close the file
    // my_file.close();
    // return 0;
}