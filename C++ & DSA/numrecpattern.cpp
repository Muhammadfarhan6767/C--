#include<iostream>
#include<cmath>
using namespace std;
                int main(){
                    int n;
                    cin>>n;//in this pattern firstly the loop gows from 
                    //i to n then new line and the i-1 in ext for loop which print i-1 one even after completing n
                    for(int i=1;i<=n;i++)// 
                {for(int j=i;j<=n;j++){cout<<j;}
                for(int j=1;j<=(i-1);j++)
                {cout<<j;}
                cout<<endl;}
                }