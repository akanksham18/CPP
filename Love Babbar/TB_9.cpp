#include<iostream>
#include<vector>
using namespace std;

int main(){
    string a;
    cout<<"Enter Number "<<endl;
    cin>>a;

    vector<long>result;

    for(int i = 0;i<a.length();i++){
        result.push_back(i - '0');
    }

    int length = result.size();
    cout<<length<<endl;

}