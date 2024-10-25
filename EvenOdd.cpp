#include<iostream>
using namespace std;

//1 even 0 odd
bool isEven(int a){

    if(a&1){
        return 0;
    }else{
        return 1;
    }

}

int main(){
    int a;
    cin>>a;

    if(isEven(a)){
        cout<<"EVEN \n";
    }else{
        cout<<"ODD \n";
    }

    isEven(a);
}