#include<iostream>
#include<cmath>
using namespace std;

                int main(){
                    int r,c;
cout<<"Enter the number of rows     :";//takig input from user
cin>>r;
cout<<"Enter the number of coloumns :";
cin>>c;// for this type of pattern we use if else statement
//because we have to print boundry symbols therefore when rows & and coloumns are equal one and m ad n it prints
                    for(int i=1;i<=r;i++)// now we have to print spaces in pattern      // otherwise space
                {for(int j=1;j<=c;j++){if(i==1||i==r||j==1||j==c){cout<<"*";}//ad if else satement should be before cout satement
                else{cout<<" ";}}cout<<endl;}
                }