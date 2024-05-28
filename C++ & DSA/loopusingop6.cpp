// find a raised to power b given these two number by user
#include<iostream>
#include<cmath>
using namespace std;
                    int main(){
                        int a,b;
                        cin>>a>>b;
                    int power=1;
                    for(int i=1;i<=b;i++)
                    {power*=a;}
                    cout<<"The a raised to power b is given by "<<power;}