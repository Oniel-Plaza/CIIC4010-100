#include <iostream>
#include "Pets.h"

using namespace std;

int main() {
    Pets p1 = Pets("Dog", "Chris", "Black", "Small");
    Pets p2 = Pets("Cat", "Bubbles", "White", "Medium");
    

    for(int i = 0; i < 3; i++) 
    {
        if (i == 0) {   
            cout << endl << p1.getSpecies() << "🐶🐶" << endl;
            cout << p1.getColor() << endl;
            cout << p1.getName() << endl;
            cout << p1.getSize() << endl << endl;
        }
        else if (i >= 1) {
            cout << p2.getSpecies() << "🐱🐱" << endl;
            cout << p2.getColor() << endl;
            cout << p2.getName() << endl;
            cout << p2.getSize() << endl << endl;
        }
    }
}