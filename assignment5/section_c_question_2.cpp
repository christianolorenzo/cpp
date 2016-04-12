/*Name   : Lorenzo Christopher
 *ID#    : 20151747
 *Purpose: Program to calculate commission
 *Date   : 06.04.2016
 */ 
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    // variable Declaration
    string name;
    string number;
    int salesPersonClass;
    float salesAmount;
    float commission;
    
    // prompt
    cout << "Welcome\n";
    cout << "Enter Sales Person name:\n";
    getline(cin, name);
    cout << "Enter Sales Person number:\n";
    getline(cin, number);
    cout << "Enter Sales Amount:\n";
    cin >> salesAmount;
    cout << "Enter Class to Which Sales Person Belongs\n"
         << "Use a ( 1 ) for Class 1\n"
         << "Use a ( 2 ) for Class 2\n"
         << "Use a ( 3 ) for Class 3\n"
         << "Use a ( 4 ) for Class 4\n";
    cin >> salesPersonClass;
    
    // beginning of comparison
    switch(salesPersonClass){
		case 1:
			if(salesAmount <= 10000)
				// calculation of commission
                commission = (salesAmount * 6) / 100;
			if((salesAmount > 10000) && (salesAmount < 20000))
				commission = (salesAmount * 7) / 100;
			if(salesAmount >= 20000)
				commission = (salesAmount * 10) / 100;			
			cout << "Name: " << name << "\n";
			cout << "Number: " << number << "\n";
			cout << "Commission: " << "$" << commission << "\n";			
			getch();
		break;
		case 2:
			if(salesAmount < 10000)
				commission = (salesAmount * 4) / 100;
			if(salesAmount >= 10000)
				commission = (salesAmount * 6) / 100;				
			cout << "Name: " << name << "\n";
			cout << "Number: " << number << "\n";
			cout << "Commission: " << "$" << commission << "\n";			
			getch();
		break;
		case 3:
			commission = (salesAmount * 4.5) / 100;			
			cout << "Name: " << name << "\n";
			cout << "Number: " << number << "\n";
			cout << "Commission: " << "$" << commission << "\n";			
			getch();			
		break;	
		case 4:
			commission = (salesAmount * 5) / 100;			
			cout << "Name: " << name << "\n";
			cout << "Number: " << number << "\n";
			cout << "Commission: " << "$" << commission << "\n";			
			getch();
        break;		
		default:
			cout << "Invalid Input\n";

	getch();
	
    return 0;
			
	}
}
