//Homework #4 - Fraction Program
//Luke Jackson
//CSC 2144 X01
//February 9, 2022
//Description: This program uses classes and objects to read and write fractions to the console.
//It can preform simple arithmetic operations such as addition and subtraction with fractions.
//This is the driver file (Program5.cpp)

#include <iostream>
#include "Fractions.h"
using namespace std;

int main()
{
	Rational fraction1;		//first object
	Rational fraction2;		//second object
	Rational fraction3;		//third object
	Rational fraction4;		//fourth object
	Rational fraction5;		//fifth object
	Rational fraction6;		//sixth object
	cout << "Enter a fraction and press enter: ";
	cin >> fraction1;
	cout << endl << "You entered: " << fraction1 << endl;

	cout << endl << "Enter a second fraction and press enter: ";
	cin >> fraction2;
	cout << endl << "You entered: " << fraction2 << endl << endl;

	fraction3 = fraction1 + fraction2;
	fraction4 = fraction1 - fraction2;
	fraction5 = fraction1 * fraction2;
	fraction6 = fraction1 / fraction2;

	cout << "The sum of the two fractions is: " << fraction3 << endl;
	cout << "The difference of the two fractions is: " << fraction4 << endl;
	cout << "The product of the two fractions is: " << fraction5 << endl;
	cout << "The quotient of the two fractions is: " << fraction6 << endl;
} 