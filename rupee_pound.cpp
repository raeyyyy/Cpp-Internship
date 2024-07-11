#include<iostream>
using namespace std;

// int main(){
//     float rupee,pound;
//     cout<<"Enter rupee"<<endl;
//     cin>>rupee;
//     cout<<"Enter pound"<<endl;
//     cin>>pound;
//     cout<<"rupee to pound is "<<rupee/106.9<<endl;
//     cout<<"pound to rupee is "<<pound*106.9<<endl;
//     return 0;
// }



    void rupeeToPound(){
        float rs;
        cout<<"Enter rupee to convert into pound"<<endl;
        cin>>rs;
        cout<<"rupee to pound is "<<rs/106.9<<endl;
    }

    void PoundToRupee(){
        float pound;
        cout<<"Enter pound to convert into rupee"<<endl;
        cin>>pound;
        cout<<"pound to rupee is "<<pound*106.9<<endl;
    }

    void rupeeToUs(){
        float rs;
        cout<<"Enter rupee to convert into US dollar"<<endl;
        cin>>rs;
        cout<<"rupee to US dollar is "<<rs/83.52<<endl;
    }

    void UsToRupee(){
        float us;
        cout<<"Enter US dollar to convert into rupee"<<endl;
        cin>>us;
        cout<<"US dollar to rupee is "<<us*83.52<<endl;
    }

    void rsToYuan(){
        float rs;
        cout<<"Enter rupee to convert into yuan"<<endl;
        cin>>rs;
        cout<<"rupee to yuan is "<<rs/11.48<<endl;
    }

    void YuanToRs(){
        float yuan;
        cout<<"Enter yuan to convert into rupee"<<endl;
        cin>>yuan;
        cout<<"yuan to rupee is "<<yuan*11.48<<endl;
    }

    int main(){
        rupeeToPound();
        PoundToRupee();
        rupeeToUs();
        UsToRupee();
        rsToYuan();
        YuanToRs();
        return 0;
    }