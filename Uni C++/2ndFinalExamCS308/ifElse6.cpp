#include<iostream>
using namespace std;
            int main(){
            string uname="Muhammad Farhan";
            int pin=1234;
            int password;
            string username;
        
            cout<<"Enter Username ";
             getline(cin,username);
            cout<<"Enter Password ";
             cin>>password;
            
             if( username==uname ){if(password==pin)
             {cout<<"Successful Login";}
             else{cout<<"Try again Incorrect Password";}}
             
             else{cout<<"Incorrect Login Details";}}
            