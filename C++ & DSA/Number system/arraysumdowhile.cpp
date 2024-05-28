#include<iostream>
#include<cmath>
using namespace std;
            int main(){
            
                   int a[10]={1,2,3,4,5,6,7,8,9,10};
                
                      int num=0;
                    
                      int sum=0;

                     do{ 
                        sum+=a[num] ;
                        num++;  
                    
                      }
                     
                while ( num<=9);
                    
                    
cout<<"The sum of array is "<<sum;

                    
                            return 0;}
