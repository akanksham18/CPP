// *****
//  ****
//   ***
//    **
//     *

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int temp=i;
        for(int j=1;j<=n;j++){
            if(temp==j){
                cout<<"*";
                temp++;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}