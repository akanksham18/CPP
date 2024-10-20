#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Binary number = "<<endl;
    cin>>n;

    int i=0;
    int sum=0;
    while(n!=0){
        int digit = n % 10;

        if(digit == 1){
            sum = sum + pow(2,i);
        }

        n = n / 10;
        i++;
    }
    cout<<sum<<endl;

}