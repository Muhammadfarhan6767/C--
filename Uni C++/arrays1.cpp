#include<iostream>
#include<cmath>
using namespace std;
            int main(){
                    int studentmarks[5];//Strore marks of 5 student and then display them using arrays and for loop
                    for(int i=0;i<5;i++)
                    {
                    cout<<"Enter the marks of student "<<i<<":";

                    cin>>studentmarks[i];}

                     for(int j=0;j<5;j++)
                    {
                        cout<<"The marks of student "<<j<<" are "<<studentmarks[j]<<endl;}
                        return 0;
                }
