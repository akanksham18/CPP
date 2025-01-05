//assigning value to c using t
// #include<iostream>
// using namespace std;

// int main(){
//     int a=10;

//     int *t=&a;
//     int c = *t;
//     cout<<t<<endl;
//     cout<<c;
// }

// addition using pointer

// #include<iostream>
// using namespace std;

// int main(){
//     int a=10,b=20;
//     int *p=&a,*q=&b;

//     int add = *p+*q;
//     cout<<add;
// }


#include<iostream>
using namespace std;

int main(){
    int a=10;

    int *p=&a;
    int z;
    for(int i=0;i<=10;i++){
        z = *p+i;
        cout<<z;
    }
    a  = z;
    cout<<a;
}
