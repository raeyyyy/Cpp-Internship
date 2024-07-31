#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // open a text file for writing
    ofstream my_file("example.txt",ios::app);
    // check the file for errors
    if(!my_file){
        cout<<"Error: Unable to open the file."<<endl;
        return 1;
    }

    // write multiple lines to the file
    my_file << "Klaus 60"<<endl;
    my_file << "Max 80"<<endl;
    my_file << "Steve 75"<<endl;
    my_file.close();
    return 0;
}