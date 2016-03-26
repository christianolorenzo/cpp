/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Accepts length, width and average depth measurements, and then 
 *          calculates the perimeter, volume and underground surface area of 
 *          a pool. 
 * Date   : 02.02.2016
 */

//Library
#include <iostream>
//Standard Namespace
using namespace std;
//Beginning of Function Main
int main()
{
    //Variable Declaration
    float perimeter;
    float lenght;	
    float width;
    float volume;
    float depth;
    float surface_area;
    //Enter Length
    cout << "Enter Lenght: ";
    cin >> lenght;
    //Enter Width
    cout << "Enter Width: ";
    cin >> width;
    //Enter Average depth
    cout << "Enter Depth: ";
    cin >> depth;
    //Calculations Uing Formulas
    perimeter = 2 * (lenght + width);
    volume = (lenght * width * depth);
    surface_area = perimeter * depth + lenght * width;
    //Line Brake
    cout << " " << endl;
    //Displays Results for perimeter, volume and underground surface area
    cout << "The perimeter is: " << perimeter << endl;
    cout << "The volume is: " << volume << endl;
    cout << "The underground surface area is: " << surface_area << endl;
    
    return 0;
}//End of Function Main

    
    
