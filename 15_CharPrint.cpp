#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;

    int ascii = (int)ch;

    if(ascii>=97 && ascii<=122){
        cout<<"Small Letters"<<endl;
    }else if(ascii>=65 && ascii<=90){
        cout<<"Capital Letter"<<endl;
    }
    else{
        cout<<"Number"<<endl;
    }


}