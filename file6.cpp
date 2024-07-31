#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream my_file("example.txt");

    if(!my_file){
        cout<<"Error: Unable to open the file."<<endl;
        return 1;
    }

    char ch;
    int count1=0,count2=0;
    while(my_file.get(ch)){
        if(isalpha(ch)){
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<<"A vowel"<<endl;
            count1++;
        }
        else{
            cout<<"A consonent"<<endl;
            count2++;
        }
        }
    }
    cout<<count1<<endl;
    cout<<count2<<endl;
    return 0;
       
}
