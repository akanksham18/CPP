#include <iostream>
#include <math.h>
using namespace std;

int main() {
   int n;
   cout<<"Enter a year = ";
   cin>>n;
   
   if(n%4==0){
       cout<<"LEAP";
   }else{
       cout<<"NO LEAP YEAR";
   }
}
