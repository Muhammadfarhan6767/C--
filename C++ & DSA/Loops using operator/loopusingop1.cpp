//(Q)count the number of digits for a given number n
//(1)when we divide a num i int by 10  it reduces i digit whe we get zero 
//then total no of times we multiply num  by 10 will be our no . of digits
// it is repetitative task therefore we use loop
#include<iostream>
#include<cmath>
using namespace std;
                    int main(){
                        int n;
                        cin>>n;
                    int digits=0;
                    while(n>0)
                    {digits++;
                    n/=10;}
                    cout<<"Total no of digits in give value is "<<digits;
            
                    }
