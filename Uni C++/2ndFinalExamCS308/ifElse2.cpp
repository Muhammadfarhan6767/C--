#include<iostream>
using namespace std;
            int main(){char n;
            cout<<"Enter  Developer status(Either J,j or S,s) :";
            cin>>n;
            if(n=='S'||n=='s')
            {cout<<"The salary of Senior developer is 70,000 RS";}
              else if(n=='J'||n=='j')
            {cout<<"The salary of Junior developer is 30,000 RS";}
            else{
                cout<<"Invalid status";
            }
         return 0;   }