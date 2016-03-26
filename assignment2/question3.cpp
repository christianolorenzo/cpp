/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: 
 * Date   : 08.02.2016
 */

//Library
#include <iostream>
#include <string>

using namespace std;

//Beginning of Function Main
int main()
{
	//Variable Declaration
    string name;
    float exam1;
    float exam2;
    float exam3;
    float avg; 
    
	//Prompt
    cout << "Enter Student's Name: ";
    getline(cin, name);
    cout << "Enter Grade for Exam1: ";
    cin >> exam1;
    cout << "Enter Grade for Exam2: ";
    cin >> exam2;
    cout << "Enter Grade for Exam3: ";
    cin >> exam3;
	//Calculate the average
    avg = (exam1 + exam2 + exam3) / 3;
	//Beginning of comparison
    if(avg >= 90 && avg <= 100)
        cout << name << " Recieved a Grade of A" << endl;
    else if(avg >= 80 && avg <= 89)
        cout << name << " Recieved a Grade of B" << endl;
    else if(avg >= 70 && avg <= 79)
        cout << name << " Recieved a Grade of C" << endl;
    else if(avg >= 60 && avg <= 69)
        cout << name << " Recieved a Grade of D" << endl;
    else if(avg >= 0 && avg < 60)
        cout << name << " Recieved a Grade of F" << endl;
    else
        cout << "This is not a valid grade" << endl;
        
    return 0;
}//End of Function Main





















