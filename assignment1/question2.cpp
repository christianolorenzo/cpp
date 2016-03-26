/*Name   : Lorenzo Christopher
 *ID#    : 20151747
 *Purpose: Calculate the elapsed time it took to make a 183.67 mile trip uisng
 *         the formula "elapsed time = total distance / average speed" and 
 *         assuming the average speed during the trip was 58 miles per hour.
 *Date   : 26.01.2016
 */
 
//Library
#include <iostream>
#include <iomanip> //for setprecision(), fixed, setfill and setw
//Standard Namespace
using namespace std;
//Beginning of Function Main
int main()
{
    //Variable declaration and initialization
    float total_distance = 183.67;
    float average_speed = 58.0;
    float elapsed_time = 0;
    //Calculation Uing Formulas
    elapsed_time = total_distance / average_speed;
    /*Display result with a field width of 5 places with two places to the right 
     *of the decimal point.
     */   
    cout << "The elapsed time it took to make a " << total_distance 
    << " mile trip is: " << fixed << setprecision(2) << setfill('0') << setw(5) 
    << elapsed_time << " hours" << endl;

    return 0;
}//End of Function Main


