#include <iostream>
#include "Lab4Fractions.h"
#include <math.h>

using namespace std;

int main(){
    // Fraction f1(2, 10);
    // cout << f1.percentage() << endl;


    // Fraction f1(1, 2);
    // Fraction f2(5, 9);
    // Fraction result = f1.addInverseOf(f2);
    // cout << "The new numerator is " << result.getNumerator() << endl;
    // cout << "The new denominator is " << result.getDenominator() << endl;


    // Fraction f(4, 9);
    // Fraction result = f.squareRoot();
    // cout << "The new numerator is " << result.getNumerator() << endl;
    // cout << "The new denominator is " << result.getDenominator() << endl;


    // Fraction f1(60, 144);
    // Fraction f2(60, 144);
    // Fraction result = f1.divide(f2);
    // cout << "The new numerator is " << result.getNumerator() << endl;
    // cout << "The new denominator is " << result.getDenominator() << endl;


    Fraction f1(1, 2);
    Fraction result = f1.powerOf(3);
    cout << "The new numerator is " << result.getNumerator() << endl;
    cout << "The new denominator is " << result.getDenominator() << endl;
}