#include<iostream>
#include<cmath>
using namespace std;
            int main(){
            
                   int a[10]={1,2,3,4,5,6,7,8,9,10};
                   int b[10];
                    
                      //Declare and initialize an array
                      int num=0;
                      int a1=0;
                      int b1=0;

                     do{ 
                        b[b1]=a[a1];
                       
                    

                        cout<<b[b1]+2;
                
                        num++ ;
                         a1++;
                        b1++;
                        
                         
                
                        
                       
                    
                      }
                     
                while ( num<=9);
                    
                    


                    
                            return 0;}