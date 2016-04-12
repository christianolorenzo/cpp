/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: program to store price, units and amounts in array and display in 
 *			tabular format.
 * Date   : 12.04.2016
 */

#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    // array declaration, initialization and variable declaration
    double prices[5] = {9.92, 6.32, 12.63, 5.95, 10.29};
    double units[5];
    double amounts[5];    
    int counter;

    /* accept five units and store the the prodcut of prices and units in
     * ammounts
     */
    for(counter = 0; counter < 5; counter++){
        cout << "Enter a Number: ";
        cin >> units[counter];
        amounts[counter] = prices[counter] * units[counter];
    }
    
    // title
    cout << setw(15) << "Prices" << setw(15) << "Units" << setw(15) << "Amounts" 
    << endl;

	// display results in tabular format
	for(counter = 0; counter < 5; counter++){		
		cout << setw(15) << prices[counter] << setw(15) << units[counter] << 
		setw(15) << amounts[counter]<< endl;		
	}

	getch();
	
    return 0;
}



