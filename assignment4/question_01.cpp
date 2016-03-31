/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Program to find the sum of the digits of a user inputted number.
 * Date   : 05.04.2016
 */

#include <iostream>
using namespace std;
int main()
{
    // variable declaration
    int num;
    int n;
    int sum = 0;
    int mod;

    // prompt
    cout << "Enter a Number: ";
    cin >> num;
    
    // preserve the original value of "num"
    n = num;

    // while loop to extract each digit of "num" and add them together
    while(num > 0){
        mod = num % 10;
        sum += mod;
        num /= 10;
    }
    
    // display the result
    cout << "The sum of the digits of " << n << " is " << sum << endl;

    cin.get();

    return 0;
}
