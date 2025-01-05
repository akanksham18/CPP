#include<iostream>
using namespace std;


int main(){
    int x=1;
    label:
    cout<<"Hello"<<endl;
    x++;
    if(x<=10){
        goto label;
    }
    
}