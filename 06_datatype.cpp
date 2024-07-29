#include<iostream>
using namespace std;
int main(){
    int a=123;
    cout<<"a = "<<a<<"\nsize = "<<sizeof(a)<<endl<<endl;

    char b='c';
    cout<<"b = "<<b<<"\nsize = "<<sizeof(b)<<endl<<endl;

    float c=2.3;
    cout<<"c = "<<c<<"\nsize = "<<sizeof(c)<<endl<<endl;

    double d=1.234;
    cout<<"d = "<<d<<"\nsize = "<<sizeof(d)<<endl<<endl;

    int e = 'a';
    int *ptr = &e;
    cout<<"e = "<<e<<"\nsize = "<<sizeof(e)<<endl<<endl;
    cout<<ptr;
}
