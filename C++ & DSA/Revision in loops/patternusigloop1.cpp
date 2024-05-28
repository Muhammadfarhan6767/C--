// We have to print diamond alphabet pattern
//we use nested for loop
//Whenever we store character in C++ we store them in ASCII
//for example for capital A Ascii value is 65 and for a is 97
//we also use type casting in which we can alter the type of ay term
//for(int i=0;i<=9;i++)
//cout<<(char)('A'+j);//A+0 //here we are using i implict typecasting
//actually compiler adding int value of A in char 
#include<iostream>
#include<cmath>
using namespace std;
                    int main(){
                        int n;
                        n=9;
                        for(int j=0;j<=9;j++)
                        {
                            char ch='A'+j;//(char)('A'+j)
                            cout<<ch<<" ";
                        }
                        
                        
                        }
                