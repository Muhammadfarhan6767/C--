#include<iostream>
#include<cmath>
using namespace std;
            int main(){
             int initialNum,finalNum,currentNum;//Calculator to calculate the sum of even and odd numbers respectively by the given range
                cout<<"Enter the initial number of range :";
                cin>>initialNum;
                cout<<"Enter the final number of range :"; 
                cin>>finalNum;
                currentNum=initialNum;
                int evenSum=0;
                int oddSum=0;

                while(currentNum<=finalNum)  
                {if(currentNum%2==0)
                {evenSum+=currentNum;}
                else{oddSum+=currentNum;}
                
               currentNum++; }
             int currentValue=initialNum;
                   while(currentValue>=finalNum)//The currentNum and currentValue integer are necessary bcz they help to distinguish between numbers
                   {if(currentValue%2==0)       //bcz if we not add this it alter our output
                {evenSum+=currentValue;}
                else{oddSum+=currentValue;}
                
               currentValue--;}
               cout<<"The Sum of Even numbers between "<<initialNum<<" to "<<finalNum<<" is "<<evenSum<<endl;
               cout<<"The Sum of Odd numbers between "<<initialNum<<" to "<<finalNum<<" is "<<oddSum<<endl;
                  
                  return 0;  }