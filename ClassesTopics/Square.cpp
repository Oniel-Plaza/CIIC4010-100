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

    struct Box
    {
        string color;
        double length,
        width,
        heigth;

        Box(string c, double l, double w, double h)
        {
            color = c;
            length = l;
            width = w;
            heigth = h;
        }
    };

    // Box iPhone = {"White", 12.0, 14.0, 20.0};
    Box iPhone = Box("White", 12.0, 14.0, 20.0);
    cout << "The iPhone box is colored: " << iPhone.color << "\nThe iPhone box's Lenght is: " << iPhone.length;
    cout << "\nThe iPhone box's Width is: " << iPhone.width << "\nThe iPhone box's Height is: " << iPhone.heigth << endl;
    cout << "Is the Lenght longer than or equal to the width? " << (iPhone.length >= iPhone.width) << endl; 
}