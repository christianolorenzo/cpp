/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Program to calculate parking fare for customers.
 * Date   : 12.04.2016
 */


#include <iostream>
//#include <conio.h>
using namespace std;

int main()
{
    // Variable declaration
    char type;
    int hour_in;
    int minute_in;
    int hour_out;
    int minute_out;
    int timespent;
    int totalcharge;
    int totalHours;
    int totalMinutes;
    
   
    // Menu
    cout << "Welcome\n";
    cout << "Please enter the following details\n";
    cout << "Enter The Type of Vehicle? \n";
    cout << " ( C ) --- for Car \n";
    cout << " ( B ) --- for Bus \n";
    cout << " ( T ) --- for Truck \n";
    
    // Prompt    
    cin >> type;
    
    cout << "Enter hour vehicle entered lot (0 - 24):\n";
    cin >> hour_in;
    cout << "Enter minute vehicle entered lot (0 - 60):\n";
    cin >> minute_in;
    cout << "Enter hour vehicle left lot (0 - 24):\n";
    cin >> hour_out;
    cout << "Enter minute vehicle left lot (0 - 60):\n";
    cin >> minute_out;
    
    if(hour_out > 24){
    	cout << "Your car will be towed";
    }
    
    // calculate time spent in parking lot
    
    // check if exit is less than entry
    if(minute_out < minute_in){
    	// increment minute_out
    	minute_out += 60;
    	// decrement hour_out
    	hour_out--;
    }
    
    // calculate minute
    totalMinutes = minute_out - minute_in;
    // calculate hour
    totalHours = hour_out - hour_in;
    
    if(totalMinutes > 30)
        totalHours = totalHours+1;

    timespent = totalHours;
    
    //Begginging of comparison
    switch(type){
        case 'C':
        case 'c':
            if(timespent <= 3){
            	totalcharge = 0 * timespent;
            }else{
            	totalcharge = (0 * 3) + 150 * (timespent - 3);
            }
        break;    
        case 'B':
        case 'b':
            if(timespent == 1){
            	totalcharge = 200;
            }else{
            	totalcharge = (200 * 1) + 370 * (timespent - 1);
            }   
        break;
        case 'T':
        case 't':
            if(timespent <= 2){
            	totalcharge = 100 * timespent;            	
            }else{
            	totalcharge = (100 * 2) + 230 * (timespent -2);
            }
        break;
        default :
            cout << "Invalid Vehicle Type\n";
    }

    cout << "Parking lot charges\n";
    cout << "Type of Vehicle is: " << type << "\n";
    cout << "Time-in" << hour_in <<":" << minute_in << "\n";
    cout << "Time-out" << hour_out <<":" << minute_out << "\n";
    cout << "Parking Time" << totalcharge;
    cout << "Rounded Total";
    cout << "Total charges";
    
    
    //getch();  
      
    return 0;
}      
        
