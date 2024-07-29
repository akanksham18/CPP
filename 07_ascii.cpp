//printing aschii value
#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter aschii value = ";
    // cin>>n;

    // char ch=n;
    // cout<<"Character = "<<ch<<endl;

    // int c='5'-0;
    // cout<<c;

    int s,n;
    cout<<"Enter the start and end of range = "<<endl;
    cin>>s>>n;

    for(int i=s;i<=n;i++){
        char ch = i;
        cout<<ch<<" ";
    }
    char ch=1;
    cout<<ch;
}