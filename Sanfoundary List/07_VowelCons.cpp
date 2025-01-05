#include <iostream>
#include <math.h>
using namespace std;

int main() {
   char ch;
   cout<<"Enter a character = ";
   cin>>ch;
   
   if(isdigit(ch)){
       cout<<"IT IS A NUMBER ";
       return 0;
   }
   
   if((ch=='A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U') || (ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u')){
       cout<<"IT IS A VOWEL";
   }else{
       cout<<"IT IS A CONSONANT";
   }
}
