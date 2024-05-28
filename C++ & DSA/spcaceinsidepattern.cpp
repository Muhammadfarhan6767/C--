#include<iostream>
#include<cmath>
using namespace std;
                int main(){// for this type of pattern we use if else statement
//because we have to print boundry symbols therefore when rows & and coloumns are equal one and m ad n it prints
                    for(int i=1;i<=4;i++)// now we have to print spaces in pattern      // otherwise space
                {for(int j=1;j<=6;j++){if(i==1||i==4||j==1||j==6){cout<<"*";}//ad if else satement should be before cout satement
                else{cout<<" ";}}cout<<endl;}
                }