  
#include <iostream>
#include <cmath>
using namespace std;
class Fraction
{
private:
    float numerator;
    float denominator;
public:
    Fraction(float num, float den)
    {
        numerator = num;
        denominator = den;
    }
    float getNumerator()
    {
        return numerator;
    }
    float getDenominator()
    {
        return denominator;
    }
    /*
    * Returns the percentage equivalent of the target fraction.
    * HINT: Check the percentage formula. Use the floor method,
    * you may review how the floor works by viewing the API.
    *  Note that the tests expect values that are whole numbers. 
    */
    int percentage(){
        return (this->getNumerator() / this->getDenominator()) * 100;
    }
    /*
    * Return a NEW fraction representing the addition of the target fraction and the inverse
    * of the argument fraction. The resulting fraction may not be expressed in minimal terms.
    * You must create a NEW fraction object and use getNumerator & getDenominator.
    */
    Fraction addInverseOf(Fraction f2){
        float nNumerator, nDenominator;
        nNumerator = (this->getNumerator() * f2.getNumerator()) + (this->getDenominator() * f2.getDenominator());
        nDenominator = (this->getDenominator() * f2.getNumerator());
        Fraction f3(nNumerator, nDenominator);
        return f3;
    }
    /*
    * Return a NEW fraction representing the sqrt of the target object.
    * The resulting fraction may not be expressed in minimal terms.
    * You must create a NEW fraction object.
    */
    Fraction squareRoot(){
        float nNumerator, nDenominator;
        nNumerator = sqrt(this->getNumerator());
        nDenominator = sqrt(this->getDenominator());
        Fraction f3(nNumerator, nDenominator);
        return f3;
    }
    /*
    * Returns a NEW fraction representing the division of the target fraction
    * by the argument fraction.  Remember that a/b divided by c/d is equivalent
    * to a/b times d/c.  The resulting fraction may not be expressed in minimal
    * terms. You must create a NEW fraction object and able to use getNumerator 
    * and getDenominator for the tests
    */
    Fraction divide(Fraction f2){
        float nNum, nDem;
        nNum = this->getNumerator() * f2.getDenominator();
        nDem = this->getDenominator() * f2.getNumerator();
        Fraction f3(nNum, nDem);
        return f3;
    }
    /*
    * Return a NEW fraction representing the power of n of the target fraction.
    * The resulting fraction may not be expressed in minimal terms.
    * You must create a NEW fraction object.
    */
    Fraction powerOf(int n){
        float nNum, nDem;
        nNum = pow(this->getNumerator(), n);
        nDem = pow(this->getDenominator(), n);
        Fraction f3(nNum, nDem);
        return f3;
    }
};

