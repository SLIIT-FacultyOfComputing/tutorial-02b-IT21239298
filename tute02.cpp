/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
using namespace std;
int main()
{
   double salary, netSalary;
   int eType, oThrs, oTrate;
   cout  << "Enter Employee Type : ";
   cin >> eType ;
   cout << "Enter Salary  : ";
   cin >>salary ;
   cout << "Enter Othrs : ";
   cin >> oThrs ; 
   
   switch (etype) {
      case 1 :
          oTrate = 1000;
          break;
      case 2 :
          oTrate = 1500;
          break;
      default :
          oTrate = 1700;
          break;
   }


   netSalary = salary + oThrs * oTrate;
cout << "Net Salary is : "<< netSalary << endl;
  
   return 0;
}
