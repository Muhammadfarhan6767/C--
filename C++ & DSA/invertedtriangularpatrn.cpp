#include<iostream>
#include<cmath>
using namespace std;
                    int main(){//for invert triangular pattern we compare i with n and
                    // j with m where m is equal to m  decreeements after endl
                    // n and m are used bcz of difference and simplicity
                    // where n not effect where as firstly m is equal to  then it is an independent variable 
                        int n;
                        cin>>n;//if we dont put cin here it will print infinite loop 
            int m=n;
                        for(int i=1;i<=n;i++)
                        {for(int j=1;j<=m;j++)
                        
                        {cout<<"*";
                        }m--;
                        cout<<endl; }
                    }