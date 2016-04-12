/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Program to calculate parking fare for customers.
 * Date   : 12.04.2016
 */
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // variable declaration
    char type;
    int hour_in;
    int minute_in;
    int hour_out;
    int minute_out;
    int timespent;
    int fare;
    int totalhour;
    int totalminute;
    int h_in;
    int m_in;
    int h_out;
    int m_out;
    int rounded;
    int parkhour;
    
   
    // menu
    cout << "Welcome\n";
    cout << "Please enter the following details\n";
    cout << "Enter The Type of Vehicle? \n";
    cout << " ( C ) --- for Car \n";
    cout << " ( B ) --- for Bus \n";
    cout << " ( T ) --- for Truck \n";
    
    // prompt    
    cin >> type;
    
    cout << "Enter hour vehicle entered lot (0 - 24):\n";
    cin >> h_in;
    cout << "Enter minute vehicle entered lot (0 - 60):\n";
    cin >> m_in;
    cout << "Enter hour vehicle left lot (0 - 24):\n";
    cin >> h_out;
    cout << "Enter minute vehicle left lot (0 - 60):\n";
    cin >> m_out;
    
    hour_in = h_in;
    minute_in = m_in;
    hour_out = h_out;
    minute_out = m_out;
    
    if(hour_out > 24){
    	cout << "Your vehicle will be towed";
    }
        
    // calculate time spent in parking lot
    
    if(minute_out < minute_in){
    	// increment minute_out
    	minute_out = minute_out + 60;
    	// decrement hour_out
    	hour_out = hour_out - 1;
    }
        
     // calculate hour
    totalhour = hour_out - hour_in;
    // calculate minute
    totalminute = minute_out - minute_in;
   
    parkhour = totalhour;
   
    if(totalminute > 30)
        totalhour = totalhour + 1;
	
	rounded = totalhour;
    timespent = totalhour;
    
    // begginging of comparison
    switch(type){
        case 'C':
        case 'c':
            if(timespent > 3){
            	fare = (timespent - 3) * 1.50;
            }else{
            	fare = 0;
            }
        break;    
        case 'B':
        case 'b':
            if(timespent > 1){
            	fare = (timespent - 1) * 3.70 + (2.00 * 1);
            }else{
            	fare = timespent * 2.00;
            }   
        break;
        case 'T':
        case 't':
            if(timespent > 2){
            	fare = (timespent -2) * 2.30 + (1.00 * 2);             	
            }else{
            	fare = timespent * 1.00;
            	
            }
        break;
        default :
            cout << "Invalid Vehicle Type\n";
    }

	// display
    cout << "\n\t\tPARKING LOT CHARGES\t\t\n";
    cout << "\n\tType of Vehicle: " << type <<"\n";
    cout << "\nTIME-IN\t\t\t" << h_in <<":" << m_in;
    cout << "\nTIME-OUT\t\t" << h_out <<":" << m_out;
    cout << "\n\t\t\t--------";
    cout << "\nPARKING TIME\t\t" << parkhour << ":" << totalminute;
    cout << "\nROUNDED TOTAL\t\t" << rounded <<"\n";
    cout << "\n\t\t\t--------";
    cout << "\nTOTAL CHARGES\t\t" <<"$" << fare << "\n\n";    
    
    getch();  
      
    return 0;
}      
        
