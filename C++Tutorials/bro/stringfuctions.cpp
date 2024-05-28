#include<iostream>
#include<string>

using namespace std;
        int main(){
            string name;
         cout<<"What is your name :" ;
          getline(cin,name);//getline keyword is used where there is a long string ad have spaces  
           /*X if(name.length()>12)//name,length() shows the lenth of string
            {std::cout<<"Your name is greater than 12 characters";}
                
                else{
                    cout<<"Hello "<<name;


                    //this code will print Hello + ur name only if u wrote something in the space provided by ':'
                    name.clear();
                    cout<<"Hello"<<name;
                    //The clear() function is used to
                    name.append("@gmail.com");//appends '@gmail.com' after
                    cout<<"Your username is now "<<name;
                    name.insert(0,"@");
                    cout<<name;*/
                    name.find(' ');
                    
cout<<name;

                    return 0;
                }

                  