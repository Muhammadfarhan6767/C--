#include<iostream>//
using namespace std;
int main(){
    int age;
    cout<<"Enter your age :";
    cin>>age;
    if(age>100){
        cout<<"Your are too old to enter the website"<<endl;
        
    }
    else if(age>=18){
        cout<<"Welcome to the website";
    }
    else if(age<0){cout<<"You have not born yet";
    }
    else{cout<<"You are not an adult";
    }
return 0;
}