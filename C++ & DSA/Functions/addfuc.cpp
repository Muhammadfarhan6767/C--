#include<iostream>
#include<cmath>
using namespace std;
int add(int a,int b)//Formal parameters//function should be always one above other function when we call it
{int sum=a+b;//if we want to do so then we have to apply function prototype
return sum;}// which is int xyz(int,int);
                    int main(){int a=4,b=5;
                    cout<<add(a,b);//actual parameters

                    }3