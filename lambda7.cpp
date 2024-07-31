#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// int main()
// {
//     vector<int> numbers={1,3,5,8,10,13};
//     auto it=find_if(numbers.begin(),numbers.end(),[](int n){
//         return n%2==0;
//     });
//     if(it!=numbers.end()){
//         cout<<"first even number found:"<<*it<<endl;
//     }
//     else{
//         cout<<"no even number found"<<endl;
//     }
//     return 0;
// }


int main()
{
    vector<int>numbers={1,3,4,6,7,8};
    int flag=0;
    for(int i=0;i<numbers.size();i++)
    {
          if(numbers[i]%2==0)
          {
            
            cout<<"first even number is: "<<numbers[i]<<endl;
            flag=1;
            break;
          }
         
    }
    if(flag==0)
    {
        cout<<"no even number is found";
    }
    return 0;
}