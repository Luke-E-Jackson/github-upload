//Homework #4 - Fraction Program
//Luke Jackson
//CSC 2144 X01
//February 9, 2022
//Description: This program uses classes and objects to read and write fractions to the console.
//It can preform simple arithmetic operations such as addition and subtraction with fractions.
//This is the header file (Fractions.h)

#include <iostream>
using namespace std;

class Rational
{
	public:					//access specifiers
		int getNumerator() const;	//getter or accessor function
		int getDenominator() const;
	
		void setNumerator(int);		//setter or mutator functions
		void setDenominator(int);
		Rational();					//default constructor
		Rational(int, int);			//overloaded constructor
		~Rational();				//destructor
		Rational add(const Rational&) const;	
									//adds two fractions
		Rational subtract(const Rational&) const;
									//subtracts two fractions
		Rational multiply(const Rational&) const;
									//multiplies two fractions
		Rational divide(const Rational&) const;
	private:
		int numerator;		//Class' numerator
		int denominator;	//Class' denominator
};

istream& operator >>(istream& sin, Rational& rat);
//overloads input (extraction) operator
ostream& operator <<(ostream& sout, Rational& rat);
//overloads output (insertion) operator
Rational operator +(const Rational rat1, const Rational rat2);
//overloads the plus sign operator
Rational operator -(const Rational rat1, const Rational rat2);
//overloads the minus sign operator
Rational operator *(const Rational rat1, const Rational rat2);
//overloads the asterisk sign operator
Rational operator /(const Rational rat1, const Rational rat2);
//overloads the slash sign operator