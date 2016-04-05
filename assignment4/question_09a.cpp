/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Program to encrypt a four digit integer
 * Date   : 05.04.2016
 */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	// variable declarations
	int first;
	int second;
	int third;
	int fourth;
	int digit;
	int temp;
	int encryptNum;
	
	// prompt
	cout << "Enter a digit to be encrypted (4 digits): ";
	cin >> digit;
	
	/* add 7 to each digit of integer  then divide by 10 and store remainder in
	 *  respective variables.
	 */
	first = (digit / 1000 + 7) % 10;
	second = ( digit % 1000 / 100 + 7 ) % 10;
	third = ( digit % 1000 % 100 / 10 + 7 ) % 10;
	fourth = ( digit % 1000 % 100 % 10 + 7 ) % 10;
	
	// swap the first digit with the third
	temp = first;
	first = third * 1000;
	third = temp * 10;
	
	// swap the second digit with the fourth
	temp = second;
	second = fourth * 100;
	fourth = temp * 1;
	
	// store encrypted number
	encryptNum = first + second + third + fourth;
	
	// display encrypted number
	cout << "Encrypted Number is " << encryptNum << "\n";
	
	getch();
	
	return 0;	

}
