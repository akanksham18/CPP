#include<iostream>
using namespace std;

int main(){
    int s=0;
    int n;
    cin>>n;
    int i=0;

    while(i<=n)
        {
            s=s+i;
            i++;
        }
        cout<<s<<endl;
}