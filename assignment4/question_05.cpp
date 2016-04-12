/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Program to compute and display the average of the test results of
 *			four experiments
 * Date   : 12.04.2016
 */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // array declaration, initialization and variable declaration
    int i;
    int j;
    float total;
    float average;
    int numexp[4] = {1, 2, 3 ,4};
    float results[4][6] = {{23.2, 31.5, 16.9, 27.5, 25.4, 28.6}, 
                           {34.8, 45.2, 27.9, 36.8, 33.4, 39.4},
    					   {19.4, 16.8, 10.2, 20.8, 18.9, 13.4},
    					   {36.9, 39.5, 49.2, 45.1, 42.7, 50.6}};    							
        
    // nested for loop to find and display average
    for(i = 0; i < 4; i++){
        total = 0.0; //        
        for(j = 0; j < 6; j++){        	
        	total = total + results[i][j];        	
        }        
        average = total / 6;        
    	cout << "\nThe average for the test results of Experiment_" << numexp[i] 
    	<< " is " << average << "\n\n";
    }
    
    getch();
    
    return 0;

}




