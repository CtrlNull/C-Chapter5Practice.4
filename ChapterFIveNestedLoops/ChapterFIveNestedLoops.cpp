// ChapterFIveNestedLoops.cpp : Defines the entry point for the console application.
// This program averages test scores. It asks the user for the
// number of students and the number of test scores per student.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numStudents,		// Number of sudents
		numTests;			// Number of tests per student
		double total,		// Accumulator for total scores
		average;			// Average test scores

	// Set up numeric output formatting.
	cout << fixed << showpoint << setprecision(1);

	// Get the number of sudents
	cout << "This program averages test scores.\n";
	cout << "For how many students do you have scores? ";
	cin >> numStudents;

	// Get the number of test scores per student. 
	cout << "How many test scores does wach student have? ";
	cin >> numTests;

	// Determine each student's average score
	for (int student = 1; student <= numStudents; student++)
	{
		total = 0;		// Initialize the accumlator
		for (int test = 1; test <= numTests; test++)
		{
			double score;
			cout << "Enter score " << test << " for ";
			cout << "sudent " << student << ": ";
			cin >> score;
			total += score;
		}
		average = total / numTests;
		cout << "The average score for sudents " << student;
		cout << " is " << average << ".\n\n";
	}
    return 0;
}

