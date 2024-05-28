#include<iostream>
#include<cmath>
using namespace std;

                int main(){
int n;
cin>>n;
                    for(int i=1;i<=n;i++)//for this pattern we compare row with n
                {for(int j=1;j<=(n-i);j++){//now we draw two loops inside mai for loo
                // one for the priting of spaces ad other for symbols
                    cout<<" ";
            }for(int j=1;j<=i;j++) 
               { cout<<j;}
               for(int j=(i-1);j>=1;j--){
                cout<<j;
               }
               cout<<endl; }
                }
            
        
                