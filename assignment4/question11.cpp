/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Program to calculate parking charges.
 * Date   : 29.03.2016
 */


#include <iostream>

using namespace std;

int main()
{
    // Variable declaration
    char type;
    int hourentered;
    int minentered;
    int hourleft;
    int minleft;
    
    // Menu
    cout << "Welcome" << endl;
    cout << "Enter The Type of Vehicle" << endl;
    cout << " ( C ) --- for Car " << endl;
    cout << " ( B ) --- for Bus " << endl;
    cout << " ( T ) --- for Truck " << endl;
    
    cout << "Enter hour vehicle entered lot (0 - 24):" << endl;
    cin >> hourentered;
    cout << "Enter minute vehicle entered lot (0 - 60):" << endl;
    cin >> minentered;
    cout << "Enter hour vehicle left lot (0 - 24):" << endl;
    cin >> hourleft;
    cout << "Enter minute vehicle left lot (0 - 60):" << endl;
    cin >> minleft;


    // Prompt
    cin >> type;
    
    //Begginging of comparison
    switch(type){
        case 'C':
            car
        break;    
        case 'B':
            bus
        break;
        case 'T':
            truck
        break;
        default :
            cout << "Invalid Vehicle Type" << endl;
    }

    
            
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
