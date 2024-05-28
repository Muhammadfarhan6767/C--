#include<iostream>
#include<cmath>
using namespace std;
        int main()
    {
        float temp;
        char unit;
        cout<<"Enter The unit for would you  like to convert (C/F): ";
        cin>>unit;
        if(unit=='f'||unit=='F')
        {
            cout<<"\nEnter Temperature in Celcius: ";
            cin>>temp;
            //Converting celcius to fahrenhiet
            temp=(1.8*temp)+32;
            cout<<"This Temparature in Fahrenheit is "<<temp;
        }
        else if(unit=='c'||unit=='C')
        {
            cout<<"Enter Temperature in Fahrehieht :";
            cin>>temp;
            //converting fahrenheit to celsius
            temp=((temp-32)/1.8);
            cout<<"This Temperature in Celcius is "<<temp;}
            else{
                cout<<"Invalid Unit! Please Enter C or F.";}
             return 0;
            }
    