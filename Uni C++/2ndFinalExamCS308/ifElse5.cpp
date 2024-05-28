#include<iostream>
using namespace std;
            int main(){;
            float cgpa;
         
            cout<<"Enter your CGPA:";
            cin>>cgpa;
            if(cgpa>=3.5 )
            {
                cout<<"Admission has granted in Software Engineerig";}
               
              else if(cgpa<3.5 || cgpa>=3.3 )
   {
                cout<<"Admission has granted in Computer Science";}
        
            else  if( cgpa<3.3 || cgpa>=3) {
                cout<<"Admission has granted in Infomation Technology ";}
          
            else {cout<<"No admission granted due to low CGPA";}
         return 0;   }