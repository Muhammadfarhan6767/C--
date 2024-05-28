//Reverse the digits of a number
//234567//765432
//we have to first separate the digits by using modulu op and divide it by 10
//then store the last digit
//here we use three op / modulu and * simultaneously

#include<iostream>
#include<cmath>
using namespace std;
                    int main(){
                        int n;
                        cin>>n;
                int reverse=0;
                    while(n>0)
                    {int lastdigit=n%10;
//we initiate reverse with 0 bcz our last digit firstly equal to reverse 
reverse=reverse*10+lastdigit;
                 n/10;
                 
                    }
                  
            cout<<"The reverse of the give number is "<<reverse;
                    }
