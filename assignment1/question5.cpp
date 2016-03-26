/*Name   : Lorenzo Christopher
 *ID#    : 20151747
 *Purpose: Accepts three values representing the sides of a triangle then prints
 *         the type of triangle
 *Date   : 02.02.2016
 */

//Library
#include <iostream>
//Standard Namespace
using namespace std;
//Beginning of Function Main
int main()
{
    //Variable Declaration
    float side_A;
    float side_B;
    float side_C;

    //Enter Value for Side A
    cout << "Enter Value for Side A: ";
    cin >> side_A;
    //Enter Value for Side B
    cout << "Enter Value for Side B: ";
    cin >> side_B;
    //Enter Value for Side C
    cout << "Enter Value for Side C: ";
    cin >> side_C;

    //Check if not the side of any triangle
    if((side_A <= 0) || (side_B <= 0) || (side_C <= 0))
    	cout << "0" << endl;
    //Check if is an Equilateral Triangle
    if(side_A == side_B && side_B == side_C && side_A == side_C)
        cout << "1" << endl;
    //Check if is an Isosceles Triangle
    if(side_A == side_B && side_B != side_C)
        cout << "2" << endl;
    if(side_A != side_B && side_B == side_C)
    	cout << "2" << endl;
    //Check if is a Scalene Triangle
    if(side_A != side_B && side_B != side_C)
        cout << "3" << endl;

    return 0;
}






















