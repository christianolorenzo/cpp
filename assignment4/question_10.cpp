/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Rock, Paper, Scissor Game
 * Date   : 12.04.2016
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{
    // variable declaration
    int user;
    int computer;

    //generate computer chice
    srand(time(NULL));
    computer = 0 + rand() % 3; 

    // prompt
    cout << "Enter your choice: \n";
    cout << "Scissor = 0\n";
    cout << "Rock    = 1\n";
    cout << "Paper   = 2\n";
    cin >> user;

    // comparison
    if(user == computer){
        cout << "Computer choice is " << computer << "\n";
        cout << "Draw\n";
    }else if((user == 1) && (computer == 2)){
        cout << "Computer choice is " << computer << "\n";
        cout << "Paper can wrap a rock\n";
        cout << "Computer wins\n";
    }else if((user == 1) && (computer == 0)){
        cout << "Computer choice is " << computer << "\n";
        cout << "Rock can knock a scissor\n";
        cout << "User wins\n";
    }else if((user == 2) && (computer == 1)){
        cout << "Computer choice is " << computer << "\n";
        cout << "Paper can wrap a rock\n";
        cout << "User wins\n";
    }else if((user == 2) && (computer == 0)){
        cout << "Computer choice is " << computer << "\n";
        cout << "Scissor cut paper\n";
        cout << "Computer wins\n";
    }else if((user == 0) && (computer == 1)){
        cout << "Computer choice is " << computer << "\n";
        cout << "Rock knock scissor\n";
        cout << "Computer wins\n";
    }else if((user == 0) && (computer == 2)){
        cout << "Computer choice is " << computer << "\n";
        cout << "Scissor cut paper\n";
        cout << "User wins\n";
    }else{
        cout << "Invalid Input\n";
    }

	getch(); 
	
    return 0;
}
