/*Name   : Lorenzo Christopher
 *ID#    : 20151747
 *Purpose: Accepts and displays the type of angle corresponding to the
 *         degrees entered.
 *Date   : 26.01.2016
 */

//Library
#include <iostream>
//Standard Namespace
using namespace std;
//Beginning of Function Main
int main()
{
    //Variable declaration
    int angle;
    //Prompt
    cout << "Enter Angle: ";
    cin >> angle;
    //Beginning of comparison
    if(angle == 90)
        cout << "This is a Right Angle" << endl;
    if(angle < 90)
        cout << "This is an Acute Angle" << endl;
    if(angle > 90)
        cout << "This is an Obtuse Angle" << endl;

    return 0;
}//End of Function Main



