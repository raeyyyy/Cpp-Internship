#include <iostream>
#include <cmath>

#include <algorithm>

using namespace std;

int main() {

    int S, P,x,y;
    cin >> S >> P;

    for(int x=1;x<S;x++){
        y=S-x;
        if(x*y==P){
            if(x<y){
                cout<<"Numbers are "<<x<<" "<<y<<endl;
            }
            else{
                cout<<"Numbers are "<<y<<" "<<x<<endl;
            }
            break;
        }
    }
    return 0;
}

