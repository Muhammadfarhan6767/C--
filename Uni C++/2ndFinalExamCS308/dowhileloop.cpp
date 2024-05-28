#include<iostream>
using namespace std;
                int main(){
                    int n;
                    cout<<"Enter number ";
                    cin>>n;
                    int product=1;
                    int i=1;
                    do{product=n*i;
                    cout<<n<<" * "<<i<<" = "<<product<<endl;
                    i++;}
                    while(i<=10);
                }