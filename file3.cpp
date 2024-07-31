// WRITING INTO THE FILE

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // open a text file for writing
    ofstream my_file("example.txt");
    // check the file for errors
    if(!my_file){
        cout<<"Error: Unable to open the file."<<endl;
        return 1;
    }

    // write multiple lines to the file
    my_file << "Raeyy 90"<<endl;
    my_file << "Praeyy 80"<<endl;
    my_file << "Sher 70"<<endl;
    my_file.close();
    return 0;
}