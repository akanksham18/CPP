#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number ";
    cin>>n;

    bool isprime=true;

    if(n<2){
        cout<<"Not prime"<<endl;
        return 0;
    }

    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"Not prime"<<endl;
            isprime=false;
            break;
        }
        i++;
    }
    if(isprime){
            cout<<"Prime"<<endl;

    }
}