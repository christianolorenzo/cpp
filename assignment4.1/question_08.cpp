/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Program to determine if an integer is perfect, abundant or deficient.
 * Date   : 05.04.2016
 */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // variable declaration
    int num;
    int sum;
    int counter;

    // prompt
    cout << "Enter an Integer: ";
    cin >> num;

    // for loop to extract divisors of "num" and add them
    for(counter = 1; counter < num; counter++){
        if(num % counter == 0){
            sum = sum + counter;
        }
    }
    
    
    // comparison
    if(sum == num){
        cout << num << " is Perfect \n";
    }else if(sum > num){
    	cout << num << " is Abundant \n";        
    }else{
        cout << num << " is Abundant \n";       
    }

	getch();
	
    return 0;
}


