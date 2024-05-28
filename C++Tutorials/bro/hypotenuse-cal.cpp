#include<iostream>
#include<cmath>
using namespace std;
        int main(){
              int a,b,c;
              double d;
        cout<<"Enter the base :";
        cin>>a;
        cout<<"Enter the perpedicular :";
        cin>>b;
        /*a=a*a;
        b=b*b;*/
        a*=a;
        b*=b;
        c=a+b;
        d=sqrt(c);

        cout<<"The hypotenuse of triangle is "<<d;//we can also typecaste it by  (int)d or (float)d to
         
        return 0;
        }