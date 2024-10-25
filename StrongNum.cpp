#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int original = n;
    int sum =0;
    while(n!=0){
        int rem=n%10;
        int fact=1;
        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum = sum+fact;
        n=n/10;
    }

    if(sum == original){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}