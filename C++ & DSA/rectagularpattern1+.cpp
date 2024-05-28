#include<iostream>
#include<cmath>
using namespace std;// this is rectangular pattern therefore we take two inputs r and c for square pattern we might take only one input
            int main(){ int r;//r represents no. of rows
            int c;// represents no. of coloumns
            //now we take input from user that how many rows and columns he want in pattern
cout<<"Enter the number of rows :";
cin>>r;
cout<<"Enter the number of coloumns :";
cin>>c;
                     for(int i=1;i<=r;i++)// For pattern printing we use nested for loop  
                {for(int j=1;j<=c;j++){cout<<"*";}cout<<endl;}
                return 0;
                }