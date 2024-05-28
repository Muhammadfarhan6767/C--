// We have to print diamond alphabet pattern
//we use nested for loop
//Whenever we store character in C++ we store them in ASCII
//for example for capital A Ascii value is 65 and for a is 97
//we also use type casting in which we can alter the type of ay term
//for(int i=0;i<=9;i++)
//cout<<(char)('A'+j);//A+0 //here we are using i implict typecasting
//actually compiler adding int value of A in char 
//we divide the diamond in to two triagular and the solve
#include<iostream>
#include<cmath>
using namespace std;
                    int main(){
                        int n;
                        n=5;//cin>>n;
                        for(int i=0;i<n;i++)
                        {
                      for(int j=0;j<(n-i);j++)
                      {
                        cout<<" ";
                      }
                      for(int j=0;j<(2*i-1);j++)
                      {
                     cout<<char('A'+j);}cout<<endl;
                        }
                        

                    }
                
                       
                
                
                       
                