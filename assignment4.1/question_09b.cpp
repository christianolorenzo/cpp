/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Program to decrypt a four digit encrypted integer
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
	int decryptNum;
	
	// prompt
	cout << "Enter an encrypted number (4 digits): ";
	cin >> digit;	
	
	// extract and store each digit in respective variable
	first = digit / 1000;
	second = digit % 1000 / 100;
	third = digit % 1000 % 100 / 10;
	fourth = digit % 1000 % 100 % 10;
	
	// swap the first digit with the third
	temp = ( first + 3 ) % 10;
	first = ( third + 3 ) % 10;
	third = temp;
	
	// swap the second digit with the fourth
	temp = ( second + 3 ) % 10;
	second = ( fourth + 3 ) % 10;
	fourth = temp;
	
	// store decrypted number
	decryptNum = first * 1000 + second * 100 + third * 10 + fourth;
	
	// display decrypted number	
	cout << "Decrypted Number is " << decryptNum << "\n";
	
	getch();
	
	return 0;	

}
