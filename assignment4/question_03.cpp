/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: 
 * Date   : 05.04.2016
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double prices[5] = {9.92, 6.32, 12.63, 5.95, 10.29};
    double units[5];
    double amounts[5];    
    int counter;

    for(counter = 0; counter < 5; counter++){
        cout << "Enter a Number: ";
        cin >> units[counter];
        amounts[counter] = prices[counter] * units[counter];
    }
    
    cout << setw(15) << "Prices" << setw(15) << "Units" << setw(15) << "Amounts" 
    << endl;

	for(counter = 0; counter < 5; counter++){		
		cout << setw(15) << prices[counter] << setw(15) << units[counter] << 
		setw(15) << amounts[counter]<< endl;		
	}


    return 0;
}



