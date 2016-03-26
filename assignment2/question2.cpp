/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Determine if a given year is a leap year. 
 * Date   : 08.02.2016
 */

//Library
#include <iostream>

using namespace std;

//Beginning of Function Main
int main()
{
    //variable declaration
    int year;
    //prompt
    cout << "Enter the year: ";
    cin >> year;
    //begining of comparison
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        cout << "The year " << year << " is a leap year" << endl;
    else
        cout << "The year " << year << " is not a leap year" << endl;

    return 0;
}//end of function main


