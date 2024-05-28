#include<iostream>
#include<cmath>
//
using namespace std;
        int main(){
              int a,b;
        cout<<"Enter first number :";
        cin>>a;
        cout<<"Enter second number :";
        cin>>b;
        cout<<"The min of given numbers is "<<min(a,b)<<endl;
         cout<<"The max of given numbers is "<<max(a,b)<<endl;
          cout<<"The pow of given numbers is "<<pow(a,b)<<endl;//power functio is used by adding cmath library
        return 0;
        }