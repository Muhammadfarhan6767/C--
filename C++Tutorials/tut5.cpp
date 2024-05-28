
// there are two types of header files
// 1.system header files: it comes with the compiler
#include<iostream>
// 2.user-defined header files: we create them 
//#include<this.h>//this shows error if it not present in directory
using namespace std;
        int main()
        {
            int a=4,b=5;
            cout<<"Operators in C++ :"<<endl;
            cout<<"Following are the Operators in C++ :"<<endl;
            //Arithemetic operators
            cout<<"The value of a + b is "<<a+b<<endl;//multi cursor is applied by alt+shift
            cout<<"The value of a - b is "<<a-b<<endl;
            cout<<"The value of a * b is "<<a*b<<endl;
            cout<<"The value of a / b is "<<a/(float)b<<endl;
            cout<<"The value of a % b is "<<a%b<<endl;
            cout<<"The value of a++ is "<<a++<<endl;
            cout<<"The value of a-- is "<<a--<<endl;
            cout<<"The value of --a is "<<--a<<endl;
            cout<<"The value of ++a is "<<++a<<endl;
            /* Assignment operators used to assig value to variables
            int a=3,b=4;
            char d='f';
            Comparision or Relational Operators
            1. == Equal to      
            2. ! = Not equal to  
            3. > Greater than    
            4. < less than
            5. >= greater than equal to
            6. <= less than equal to
            Logical Operators
            1. && logical AND    (returns true only when both
            2. || logical OR      operands are TRUE)
            3. ! logical NOT     (returns opposite of what ever
                                expression follows)*/
            //Logical operators
            //cout<<(a==b?"Both are equal":"Values are different")<<endl

}
        