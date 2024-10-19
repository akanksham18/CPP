#include<iostream>
using namespace std;
int main(){
    int a=10;

    cout<<(a++)<<endl;  //10 , 11
    cout<<(++a)<<endl;  //12 , 12
    cout<<(--a)<<endl;  //11 , 11
    cout<<(a--)<<endl;  //11 , 10
}