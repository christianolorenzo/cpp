/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: 
 * Date   : 12.04.2016
 */

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	// variable declaration	
	int month;
	int day;
	
	// array declaration and initialization
	string arr[13] = {"dummymonth", "January", "February", "March", "April", 
					  "May", "June", "July", "August", "September", "October",
					  "November", "December"};
	
	// prompt for month
	cout << "Enter a month ( use a 1 for January, etc): ";
	cin >> month;
	
	// check if month is invalid
	if(!((month >= 1) && (month <= 12))){
		cout << "Invalid month \n";
	}
	
	// prompt for day
	cout << "Enter a day of the month: ";
	cin >> day;
	
	// check if day is valid
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(day >= 1 && day <= 31){
				cout << "This is a valid day in " << arr[month] << "\n";
			}			
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(day >= 1 && day <= 30){
				cout << "This is a valid day in " << arr[month] << "\n";
			}
			break;			
		case 2:
			if(day >= 1 && day <= 28){
				cout << "This is a valid day in " << arr[month] << "\n";
			}
			break;		
		default:
			cout << "Invalid day \n";
	
	}
	
	getch();  
	  
    return 0;
	
}
