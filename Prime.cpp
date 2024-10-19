#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;

    bool isPrime=1;

    if(n==1){
        cout<<"Not Prime";
    }

    if(n==2){
        cout<<"Prime";
    }

    for(int i=2;i<=n-1;i++){
        if(i%2==0){
            isPrime=0;
            break;
        }else{
            isPrime=1;
        }
    }

    if(isPrime==1){
        cout<<"Prime"<<endl;
    }else{
        cout<<"Not Prime"<<endl;
    }
}