#include<iostream>
#include<cmath>
using namespace std;
                int main(){
                    int n;
                    cin>>n;
                    for(int i=1;i<=n;i++) //In this loop instesd of printing symbol we print the no.
                {for(int j=1;j<=n;j++)
                if(i==1||j==1||i==n||j==n){cout<<j;}
                else{cout<<" ";}
                
                cout<<endl;}//in space pattern we use if else before cout
                }