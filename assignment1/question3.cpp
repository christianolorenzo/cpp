/*Name   : Lorenzo Christopher
 *ID#    : 20151747
 *Purpose: Calculate the sum of the numbers from 1 to 100
 *Date   : 26.01.2016
 */
 
//Library
#include <iostream>
//Standard Namespace
using namespace std;
//Beggining of Function Main
int main()
{
    //Variable declaration and initialization
    int a = 1;
    int d = 1;
    int n = 100;
    int sum = 0;
    //Calculation Uing Formula
    sum = (n/2) * (2 * a + (n - 1) * d);
    //Display result
    cout << "The sum of the numbers is: " << sum << endl;

    return 0;
} //End of Function Main




