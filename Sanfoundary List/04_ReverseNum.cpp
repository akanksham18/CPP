#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    int rev,rem;
    while(n>0){
        rem = n%10;
        rev = rev*10+rem;
        n=n/10;
    }
    cout<<rev;
}