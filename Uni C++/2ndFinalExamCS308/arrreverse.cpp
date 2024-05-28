#include<iostream>
using namespace std;
                int main(){
                    int arr[5];
                    int brr[5];
                  
                      cout<<"Enter elements of first array :"<<endl;
                    for(int i=0;i<5;i++)
                  
                    {
                            cin>>arr[i];}
                     
                           
           int j=0;
             for(int i=4;i>=0;i--)
             {brr[i]=arr[j];
          j++;
             } cout<<"The elements of second array are : ";
             for(int i=0;i<5;i++)  {cout<<brr[i]<<" ";}}