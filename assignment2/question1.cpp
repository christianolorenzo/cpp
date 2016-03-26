/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Solves quadratic equations of the form "ax² + bx + c"
 * Date   : 08.02.2016
 */

//Library
#include <iostream>
#include <cmath>

using namespace std;
//Beginning of Function Main
int main()
{
    //Varible declaration
    double a; 
    double b;
    double c; 
    double disc; //The discriminant
    double root1;
    double root2;
    
    //Prompt
    cout << "Enter Value for Coefficient a: ";
    cin >> a;
    cout << "Enter Value for Coefficient b: ";
    cin >> b;
    cout << "Enter value for Coefficient c: ";
    cin >> c;

	//Beginning of comparison
    if(a == 0.0 && b == 0.0){
        cout << "not valid" << endl;
    }else if(a == 0.0 && b != 0.0){
        cout << "Equation has a single root, which is: " << -(c / b) << endl;
    }else{
        disc = pow(b, 2.0) - 4 * a * c;
        if(disc >= 0.0){
            disc = sqrt(disc);
            root1 = (-b + disc) / (2 * a);
            root2 = (-b - disc) / (2 * a);
            cout << "The roots of the quadratic equation are: " << endl;
            cout << root1 << " and " << root2 << endl;         
        }else{
        	disc = disc * (-1);
            cout << "No Solution, roots imaginary they are: " << endl;
            cout << (-b / (2 * a)) << " + " << (sqrt(disc) / (2 * a)) << "i and "
            << (-b / (2 * a )) << " - " << (sqrt(disc) / (2 * a )) << endl;         
        }
    }  

    return 0;
    
}//End of Function Main
