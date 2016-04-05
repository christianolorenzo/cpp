#include<iostream>

using namespace std;

int main()
{
	const int NUMGRADES = 4;
	const int NUMSTUDENTS = 20;
	int i, j;
	double grade, total, average;
	
	for(i = 1; i <= NUMSTUDENTS; i++){
		total = 0;
		for(j = 1; j <= NUMGRADES; j++){
			cout << "Enter a grade for this student: ";
			cin >> grade;
			total = total + grade;
		}
		
		average = total / NUMGRADES;
		cout << "\nThe average for student " << i << " is " << average
		<< "\n\n";
	}
	
	return 0;
}

