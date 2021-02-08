#include "Square.h"
#include <iostream>

using namespace std;

double Square::getSumSides()
{
    double sum = this->side1 + this->side2 + this->side3 + this->side4;
    return sum;
}

double Square::getArea()
{
    double area = this->side1 * this->side1;
    return area;
}

int main() 
{
    double s1, 
    s2, 
    s3, 
    s4;

    // cout << "Enter 4 sides of a Square: ";
    // cin >> s1;
    // cin >> s2;
    // cin >> s3;
    // cin >> s4;
    cout << "This is the sum of the sides of the square: ";
    s1 = 16, s2 = 16, s3 = 16, s4 = 16;

    Square sq1(s1, s2, s3, s4);

    cout << sq1.getSumSides() << endl <<  "All Done!\n";

    
}