#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string name;
    // std::cout << "Hellor World!" << std::endl;
    cout << "Hello World!\n"; 
    cout << "Enter your name: " ;
    getline(cin, name);
    cout << "Hello " << name << endl;
    
    cout << "Experiment...";
    return 0;
}

