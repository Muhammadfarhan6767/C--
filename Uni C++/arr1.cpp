#include<iostream>
using namespace std;
                int main(){
                    int arr[10];
                    int sum=0;
                      cout<<"Enter 10 elements of array"<<endl;
                    for(int i=0;i<10;i++)
                  
                    {
                        cin>>arr[i];}
                          cout<<"The elements of array are :"<<endl;
                        for(int i=0;i<10;i++)
                     
                        {cout<<arr[i]<<" ";
                        sum+=arr[i];}
                        cout<<endl;
                        cout<<"The sum elements of array is "<<sum;
                }