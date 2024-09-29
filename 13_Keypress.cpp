#include<iostream>
using namespace std;
int main(){
    char c;
    while(1){
         c=getchar();
        cout<<c;

        if(c=='x'){
            return 0;
        }
    }
}