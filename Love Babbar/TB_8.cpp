#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double a,b,c,de,realpart,imageparts,root1,root2;
    cin>>a>>b>>c;

    de = b*b-4*a*c;

    if(de > 0){
        root1 = (-b +sqrt(de)/(2*a));
        root2 = (-b + sqrt(de)/(2*a));
        cout<<"Root 1 = "<<root1;
        cout<<"Root 2 = "<<root2;
    }else if(de == 0){
        root1 = root2 = -b / (2*a);
        cout<<"Root 1 = Root 2 = "<<root1<<endl;
    }else{
        realpart = -b / (2*a);
        imageparts = sqrt(de) / (2*a);
        root1 = realpart +imageparts;
        root2 = realpart - imageparts;
        cout<<"Root 1 = "<<root1<<endl;
        cout<<"Root 2 = "<<root2<<endl;
    }
}