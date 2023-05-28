/*
Hannah Gorada

greet.cpp

Prompt the user for their name & display a greeting message
*/

// Header Files
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Variable declaration
	string name;

	// Prompt user for their name
	cout << "Please enter name (no spaces): ";
	cin >> name;

	// Display greeting message
	cout << "Hello " << name << "!!!!" << endl;

	return 0;
}
