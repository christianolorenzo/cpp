/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Program to calculate parking fare for customers.
 * Date   : 29.03.2016
 */


#include <iostream>

using namespace std;

int main()
{
    // Variable declaration
    char type;
    int hour_in;
    int minute_in;
    int hour_out;
    int minute_out;
    
    // Menu
    cout << "Welcome" << endl;
    cout << "Please enter the following details" << endl;
    cout << "Enter The Type of Vehicle" << endl;
    cout << " ( C ) --- for Car " << endl;
    cout << " ( B ) --- for Bus " << endl;
    cout << " ( T ) --- for Truck " << endl;
    
    cout << "Enter hour vehicle entered lot (0 - 24):" << endl;
    cin >> hour_in;
    cout << "Enter minute vehicle entered lot (0 - 60):" << endl;
    cin >> minute_in;
    cout << "Enter hour vehicle left lot (0 - 24):" << endl;
    cin >> hour_out;
    cout << "Enter minute vehicle left lot (0 - 60):" << endl;
    cin >> minute_out;


    // Prompt
    cin >> type;
    
    //Begginging of comparison
    switch(type){
        case 'C':
        case 'c':
            car
        break;    
        case 'B':
        case 'b':
            bus
        break;
        case 'T':
        case 't':
            truck
        break;
        default :
            cout << "Invalid Vehicle Type" << endl;
    }

    
            
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
