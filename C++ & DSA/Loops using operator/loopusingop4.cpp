//Find the sum of following series
//S=1-2+3-4.....n
// Here we can simlpy see that the no which are odd have sign of + 
// and even have -
// we have to apply loop 1 to n
//If (num==odd) sum+=num
//else  sum-=num// lets do it in code
#include<iostream>

using namespace std;
                    int main(){
                        int n;
                        cin>>n;
                        int sum=0;
                       for (int i=1;i<=n;i++)
                       {
                    if(i%2==0){
                        sum-=i;
                    }else{sum+=i;}
                       }
                        cout<<"The sum is equal to "<<sum;
                        }
