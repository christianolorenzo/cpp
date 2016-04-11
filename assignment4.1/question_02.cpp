/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Program to find the sum of all numbers less than a user inputted
 *          number
 * Date   : 05.04.2016
 */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // variable declaration
    int num;
    int sum;
    int count;
    
    // prompt
    cout << "Enter a Number: ";
    cin >> num;
    
    // for loop to add numbers less than user inputted number
    for(count = 1; count < num; count++){
        sum += count;
    }
    
    // display the result
    cout << "The sum of all numbers less than " << num << " is " << sum << endl;
	
	getch();
	
    return 0;
    
}

