//Find the sum of digits in a given number n
//34762
//for calculating sum we have to separate every digit first
//for this we use modulus operator
//34762%10=2//34762/10=3476 and then we have to repeat this process until 0

#include<iostream>
#include<cmath>
using namespace std;
                    int main(){
                        int n;
                        cin>>n;
                    int sum=0;
                    while(n>0)
                    {int lastdigit=n%10;
                    sum+=lastdigit;
                    n/=10;}
                    cout<<"The sum is "<<sum;
            
                    }
