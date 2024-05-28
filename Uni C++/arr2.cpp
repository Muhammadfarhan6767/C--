#include<iostream>
using namespace std;
                int main(){
                    int arr[10];
                 
                  
                      cout<<"Enter 10 elements of array"<<endl;
                    for(int i=0;i<10;i++)
                  
                    {
                        cin>>arr[i];}
                          cout<<"The elements of array are :"<<endl;
                        for(int i=0;i<10;i++)
                     
                        {cout<<arr[i]<<" ";

                      }
                         int max=arr[0];
                       
                      for(int i=0;i<10;i++)
                        {if(max<arr[i])
                        {max=arr[i];}
                       
                        }int smax=arr[0];
                           for(int i=0;i<10;i++)
                        {if(smax<arr[i] && arr[i]!=max)
                        {smax=arr[i];}
                       
                        }
                        cout<<endl;
                        cout<<"The second largest number in elements of array is "<<smax;
                }