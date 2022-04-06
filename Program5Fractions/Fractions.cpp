//Homework #4 - Fraction Program
//Luke Jackson
//CSC 2144 X01
//February 9, 2022
//Description: This program uses classes and objects to read and write fractions to the console.
//It can preform simple arithmetic operations such as addition and subtraction with fractions.
//This is the implementation file (Fractions.cpp)

#include "Fractions.h"

Rational::Rational()		//::scope resolution operator
//default constructor
{
	numerator = 0;
	denominator = 0;
}

Rational::Rational(int newNum, int newDen)
//overloaded constructor
{
	numerator = newNum;
	denominator = newDen;
}

int Rational::getDenominator() const
//Getter for the denominator
{
	return denominator;
}

int Rational::getNumerator() const
//Getter for the numerator
{
	return numerator;
}

void Rational::setDenominator(int newDen)
//Setter for denominator
{
	denominator = newDen;
}

void Rational::setNumerator(int newNum)
//Setter for numerator
{
	numerator = newNum;
}

Rational::~Rational()
//destructor destroying dynamically allocated memory
{
	//leave this empty
}

Rational Rational::add(const Rational& fraction1) const
//Adds two fractions together and returns the answer
{
	int num1 = getNumerator();
	int den1 = getDenominator();
	int num2 = fraction1.getNumerator();
	int den2 = fraction1.getDenominator();

	return Rational(num1 * den2 + num2 * den1, den1 * den2);
}

Rational Rational::subtract(const Rational& fraction1) const
//Subtracts a fraction from another and returns the answer
{
	int num1 = getNumerator();
	int den1 = getDenominator();
	int num2 = fraction1.getNumerator();
	int den2 = fraction1.getDenominator();

	return Rational(num1 * den2 - num2 * den1, den1 * den2);
}

Rational Rational::multiply(const Rational& fraction1) const
//Multipies two fractions
{
	int num1 = getNumerator();
	int den1 = getDenominator();
	int num2 = fraction1.getNumerator();
	int den2 = fraction1.getDenominator();

	return Rational(num1 * num2, den1 * den2);
}
Rational Rational::divide(const Rational& fraction1) const
//divides two fractions
{
	int num1 = getNumerator();
	int den1 = getDenominator();
	int num2 = fraction1.getNumerator();
	int den2 = fraction1.getDenominator();

	return Rational(num1 * den2, den1 * num2);
}
Rational operator+(const Rational rat1, const Rational rat2)
//Overloads the + sign to add two fractions 
{
	return rat1.add(rat2);
}
Rational operator-(const Rational rat1, const Rational rat2)
//Overloads the - sign to add two fractions 
{
	return rat1.subtract(rat2);
}
Rational operator*(const Rational rat1, const Rational rat2)
//Overloads the * sign to add two fractions 
{
	return rat1.multiply(rat2);
}
Rational operator/(const Rational rat1, const Rational rat2)
//Overloads the + sign to add two fractions 
{
	return rat1.divide(rat2);
}
istream& operator >>(istream& sin, Rational& rat)
//overloads the extraction operator to handle Rational objects
{
	int num;		//numerator
	char slash;		//slash/
	int den;		//denominator

	sin >> num >> slash >> den;

	rat.setNumerator(num);
	rat.setDenominator(den);

	return sin;
}

ostream& operator <<(ostream& sout, Rational& rat)
//overloads the insertion operator to handle Rational objects
{
	sout << rat.getNumerator() << "/" << rat.getDenominator();
	
	return sout;
}