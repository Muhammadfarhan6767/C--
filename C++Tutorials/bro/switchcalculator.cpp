#include<iostream>//
using namespace std;
int main(){
    double  num1,num2;
    char op;
    cout<<"Enter any operator either(+,-,*,/): ";
    cin>>op;
    cout<<"Enter the value of num1: ";
    cin>>num1;
    cout<<"\nEnter the value of num2: ";
    cin>>num2;
    
    switch(op) {
        case '+':cout<<"\nThe sum is : "<<num1+num2;
        break;
        case '-':
        cout<<"\nThe subtraction result is : "<<num1-num2;
        break;
        case '*': 
        cout<<"\nThe multiplication result is : "<<num1*num2;
        break;
        case '/':
        cout<<"The division result is : "<<num1/num2;
        break;

        default:
        cout<<"That was not a given operator!";
    }
    
return 0;
}