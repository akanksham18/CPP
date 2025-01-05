#include<iostream>
using namespace std;

int main(){
    //priniting sum of digit
    int n;
    cout<<"Enter a number = ";
    cin>>n;

    int sum=0;
    while(n>0){
        int rem = n%10;
        sum+=rem;
        n=n/10;
    }
    cout<<"SUM = "<<sum;
    
    //printing from range
    int s,e;
    cout<<"Enter start and end range = ";
    cin>>s>>e;
    int rem;
    int sum=0;
    for(int i=s;i<=e;++i){
        int num=i;
        while(num>0){
        rem = num%10;
        sum+=rem;
        num=num/10;
        }
    }
    cout<<"SUM = "<<sum;
}