/*Name   : Lorenzo Christopher
 *ID#    : 20151747
 *Purpose: Accepts four quizzes, two midterms and final grade and displays the
 *         overal average.
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
    float quiz_1;
    float quiz_2;
    float quiz_3;
    float quiz_4;
    float midterm_1;
    float midterm_2;
    float final_exam;
    float avg;
    float quiz_grade;
    float midterm_grade;
    float final_grade;
    //Prompt
    cout << "Enter Value for Quiz 1: ";
    cin >> quiz_1;
    cout << "Enter Value for Quiz 2: ";
    cin >> quiz_2;
    cout << "Enter Value for Quiz 3: ";
    cin >> quiz_3;
    cout << "Enter Value for Quiz 4: ";
    cin >> quiz_4;
    cout << "Enter Value for Midterm 1: ";
    cin >> midterm_1;
    cout << "Enter Value for Midterm 2: ";
    cin >> midterm_2;
    cout << "Enter Value for Final Exam: ";
    cin >> final_exam;
    
    //Calculate Grades
    quiz_grade = ((quiz_1 + quiz_2 + quiz_3 + quiz_4) / 4) * 0.3;
    midterm_grade = ((midterm_1 + midterm_2) / 2) * 0.4;
    final_grade = final_exam * 0.3;
    
    //Calculate Overall Average
    avg = quiz_grade + midterm_grade + final_grade;
    
    //Display Result
    cout << "The Overal Average is: " << avg << endl;
        
    return 0;
}// End of Function Main



















