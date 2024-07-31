#include<iostream>
using namespace std;

int main(){
    int choice,car=0,bike=0,rickshaw=0;
    string s;
    do{
    cout<<"Enter 1 to park car"<<endl;
    cout<<"Enter 2 to park bike"<<endl;
    cout<<"Enter 3 to park rickshaw"<<endl;
    cout<<"Enter 4 to exit"<<endl;
    cin>>choice;
    if(choice==1){
        car++;
    }
    if(choice==2){
        bike++;
    }
    if(choice==3){
        rickshaw++;
    }
    if(choice==4){
        break;
    }
    cout<<"Do you want to perform again?"<<endl;
    cin>>s;
    }
    while(s=="yes");
    if(s=="no"){
        cout<<"Count of car"<<car<<endl;
        cout<<"Count of bike"<<bike<<endl;
        cout<<"Count of rickshaw"<<rickshaw<<endl;
    }
    return 0;
}