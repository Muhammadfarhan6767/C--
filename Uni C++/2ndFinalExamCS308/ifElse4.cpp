#include<iostream>
using namespace std;
            int main(){;
            int salary;
            int grossSalary;
            cout<<"Enter your basic salary :";
            cin>>salary;
            if(salary>20000)
            {grossSalary=salary+3000+(salary*25/100)+(salary*20/100);
                cout<<"The Gross salary is "<<grossSalary;}
               
              else if(salary>15000 )
   {grossSalary=salary+2000+(salary*20/100)+(salary*15/100);
                cout<<"The Gross salary is "<<grossSalary;}
        
            else   {grossSalary=salary+1000+(salary*10/100)+(salary*12/100);
                cout<<"The Gross salary is "<<grossSalary;}
          
            
         return 0;   }