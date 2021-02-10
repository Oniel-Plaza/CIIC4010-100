#include <iostream>
#include "Pets.h"

using namespace std;

int main() {
    Pets p1 = Pets("Dog", "Chris", "Black", "Small");

    for(int i = 0; i < 3; i++) {
        cout << p1.getSpecies() << endl;
        cout << p1.getColor() << endl;
        cout << p1.getName() << endl;
        cout << p1.getSize() << endl;
    }
}