// Print the first n factorial numbers
//n!=n*(n-1)!
//For finding the factorial of n number by user we apply for loop
#include<iostream>
#include<cmath>
using namespace std;
                    int main(){
                        int n;
                        cin>>n;
                    int factorial=1;//here we set fac=1 bcz it has to multiply
                    for(int i=1;i<=n;i++)
                    {
                    factorial*=i;
                    }
                    cout<<"The factorial of given num is "<<factorial;}
                