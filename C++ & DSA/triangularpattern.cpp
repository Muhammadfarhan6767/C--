#include<iostream>
#include<cmath>
using namespace std;
                    int main(){//for triangular pattern we take only one input
                        int n;
                        cin>>n;// in it we compare both i in first for 
                        // with j in second for loop//our i directly represents
                        //n and j represent output type
                        for(int i=1;i<=n;i++)
                        {for(int j=1;j<=i;j++){cout<<"*";}cout<<endl;}
                    }