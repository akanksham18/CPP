#include<iostream>
using namespace std;

int main(){
    int i=1;
    int s=0;

    int n;
    cin>>n;

    while(i<=n){
        if(i%2==0){
            s+=i;
        }
        i++;
    }
                cout<<s<<endl;

}