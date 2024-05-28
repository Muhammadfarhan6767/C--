#include<iostream>
using namespace std;
            int main(){int units;
            int totalBill;
            cout<<"Enter Units you comsumed :";
            cin>>units;
            if(units>400)
            {totalBill=units*9;
                cout<<"The total bill if units are >400 @ of 9 RS per unit is "<<totalBill;}
               
              else if(units>300)
            {totalBill=units*7;
                cout<<"The total bill if units are >300 @ of 7 RS per unit is "<<totalBill;}
        
              else if(units>200 )
            {totalBill=units*5;
                cout<<"The total bill if units are >200 @ of 5 RS per unit is "<<totalBill;}
              else
            {totalBill=units*3;
                cout<<"The total bill if units are <=200 @ of 3 RS unit is  "<<totalBill;}
            
         return 0;   }