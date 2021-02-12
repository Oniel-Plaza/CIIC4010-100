#include <iostream>
#include "Pets.h"

using namespace std;

void Pets::setDescription(string d) { description = d; }

void Pets::setAge(int a) { age = a; }

int Pets::getAge() {return age; }

int Pets::addTentoAge()
{
    return this->getAge() + 10;
}

int calcAge(Pets &p,  int n)
{
    return p.getAge() + n;
}

int main() {
    Pets p1 = Pets("Dog", "Chris", "Black", "Small");
    Pets p2 = Pets("Cat", "Bubbles", "White", "Medium");
    

    for(int i = 0; i < 3; i++) 
    {
        if (i == 0) {   
            cout << "\n* * * * * ACCESSING P1'S ATTRIBUTES AND METHODS... * * * * * \n";
            cout << p1.getSpecies() << "🐶🐶" << endl;
            cout << p1.getColor() << endl;
            cout << p1.getName() << endl;
            cout << p1.getSize() << endl;
            p1.setAge(8);
            cout << "Age: " << p1.getAge() << endl;
            cout << "* * * * * FINISHED ACCESING P1'S ATTRIBUTES AND METHODS! * * * * * \n\n" ;
        }
        else if (i == 1) {
            cout << p2.getSpecies() << "🐱🐱" << endl;
            cout << p2.getColor() << endl;
            cout << p2.getName() << endl;
            cout << p2.getSize() << endl << endl;
        }
    }
    cout << "Adding 10 to P1's age...\n";
    cout << p1.addTentoAge() << endl;

    cout << "Other way of adding age is: ";
    cout << calcAge(p1, 10) << endl;
}