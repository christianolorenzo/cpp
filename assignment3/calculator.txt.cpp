/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Calculator
 * Date   : 23.02.2016
 */

//Library
#include <iostream>
#include "conio.h"
using namespace std;

//Beginning of Function Main

int main()
{
    //Varible declaration
    int num1;
    int num2;
    int result;
    char option;
    //Menu
    cout << "Welcome!!" << endl;
    cout << "Select an Operation to Perform" << endl;
    cout << " ( + ) --- for Addition" << endl;
    cout << " ( - ) --- for Subtraction" << endl;
    cout << " ( / ) --- for Division" << endl;
    cout << " ( * ) --- for Multiplication" << endl;
    cout << " ( % ) --- for Modulus" << endl;
    //Prompt
    cin >> option;
    //Beginning of comparison
    switch(option){
          case '+':
               cout << "Enter Two Numbers to Add:" << endl;
               cin >> num1;
               cin >> num2;
               result = num1 + num2;
               cout << "The Sum of " << num1 << " And " << num2 << " is " << result;
          break;
          case '-':
               cout << "Enter Two Numbers to Subtract:" << endl;
               cin >> num1;
               cin >> num2;
               result = num1 - num2;
               cout << "The Difference Between " << num1 << " And " << num2 << " is " << result;
          break;
          case '/':
               cout << "Enter Two Numbers to Divide:" << endl;
               cin >> num1;
               cin >> num2;
               result = num1 / num2;
               cout << "The Quotient of " << num1 << " And " << num2 << " is " << result;
          break;
          case '*':
               cout << "Enter Two Numbers to Multiply:" << endl;
               cin >> num1;
               cin >> num2;
               result = num1 * num2;
               cout << "The Product of " << num1 << " And " << num2 << " is " << result;
          break;
          case '%':
               cout << "Enter Two Numbers to Find the Modulus of :" << endl;
               cin >> num1;
               cin >> num2;
               result = num1 % num2;
               cout << "The modulus of " << num1 <<" And " << num2 <<" is " << result;
          break;
          default :
               cout << "Invalid Option" << endl;
    }
    getch();
    return 0;
}//End of Function Main
