#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cctype>
#include <fstream>

using namespace std;
void printable(char character){
    bool print = isprint(character); 
    if (print) {
        if (isdigit(character)) {
            cout << "It is printable and digit.\n";
        }
        else {
            cout << "It is printable.\n";
        }    
    }
    else {
        cout << "It is not prinatble.\n";
    }
}

void sinlog(double number1 , double number2) {
    // add your code here
    double result1 = sin(number1),
    result2 = sin(number2),
    total = result1 + result2,
    binary_log = log2(total);

    cout << "The first Sine is: " << result1 << endl;
    cout << "The second Sine is: " << result2 << endl;
    cout << "The sum of the two Sines is: " << total << endl;
    cout << "The Binary Logarithm is: " << binary_log << endl;
}

void startWithA(string input){
    // add your code here
    int pos = input.find('A'),
    pos2 = input.find('a');
    if ((pos == 0) || (pos2 == 0)) {
        cout << "Starts with \"A\"";
    }
    else {
        cout << "Doesn't start with an \"A\"";
    }
}

int calc_sum(int first, int second, int third) {
    return (first + second + third);
}
int main() 
{
    // string fullName = "Oniel A. Plaza Pérez";
    // cout << fullName << endl;
    // fullName.replace(0, 5, "Roby");
    // cout << fullName << endl;
    // // string name;
    // std::cout << "Hellor World!" << std::endl;
    // cout << "Hello World!\n"; 
    // cout << "Enter your name:" ;
    // getline(cin, name);
    // cout << "Hello " << name << endl;

    // int count, sales, start, day, orders;
    // count = 0, sales = 0, start = 1, day = 1, orders = 0;
    // cout << count << "  " << sales << "  " << start << "  " << day << "  " << orders << endl;
    // const double RATE = 0.12;
    // cout << RATE;

    // double salary, monthly;
    // cout << "What is your annual salary? "; cin  >> salary;
    // monthly = static_cast<int>(salary) / 12; cout << "Your monthly wages are " << monthly << endl;

    // double rent, phones, internet, cable, totalPrice;
    // cout << "Enter the amount amount for your Rent, Phone, Internet, and Cable expenses: ";
    // cin >> rent >> phones >> internet >> cable;
    // cout << "Rent: $" << rent << endl;
    // cout << "Phones: $" << phones << endl;
    // cout << "Internet: $" << internet << endl;
    // cout << "Cable: $" << cable << endl;
    // totalPrice = rent + phones + internet + cable;
    // cout << "Total Amount is: $" << totalPrice << endl;

    // double first, second;

    // cout << "Enter two numbers that are floating point: ";
    // cin >> first;
    // cin >>  second;

    // if (first > second)
    //     cout << first << " is bigger than " << second << endl;
    
    // else 
    //     cout << second << " is bigger than " << first << endl;


    // long int month, day, year;
    // cout << "Enter a month, day, and a two-digit year: ";
    // cin >> month;
    // cin >> day;
    // cin >> year;

    // if ((month > 0) && (month <= 12))
    // {
    //     if (day > 0 && month <= 31)
    //        {
    //            int total = month * day;
    //            if (total == year)
    //                 cout << "This \'year\' is magic!\n";
    //         }
    //     else
    //         cout << "Your day input is invalid, restart the program.\n";
    // }
    // else 
    //     cout << "Your month input is invalid, restart the program.\n";


    // // THE FOLLOWING TWO LOOPS ARE THE SAME, ONE IS A WHILE LOOP, AND THE OTHER IS A DO-WHILE LOOP.
    // int num = 10;
    // while (num > 2)
    // {
    //     cout << "This is the current number: " << num << endl;
    //     cout << "The next number should be: " << num - 1 << endl;
    //     num--;
    // }

    // cout << "\n\n";

    // int num2 = 10;
    // do { 
    //     cout << "This is the current number: " << num2 << endl;
    //     cout << "The next number should be: " << num2 - 1 << endl;
    //     num2--; 
    // } 
    // while (num2 > 2);


    // int choice;
    // cout << "Enter an integer, and see what the program chooses for you (1, 2, 3, 4): ";
    // cin >> choice;
    // switch (choice)
    //     {
    //         case 1: cout << "You're funny and charismatic.\n";
    //             break;
    //         case 2: cout << "You're not funny nor charismatic. :(\n";
    //             break;
    //         case 3: cout << "You're inteligent and hardworking.\n";
    //             break;
    //         case 4: cout << "You're not inteligent nor hardworking :(\n";
    //             break;
    //     }
    
    // ofstream ofile("Text2.txt");
    // for (int count = 1; count <= 100; count++)
    // {
    //     if (count % 2 == 0)
    //     {   cout << count << ". I love to program! Also, this number is even!" << endl; 
    //         ofile << count << ". I love to program! Also, this number is even!\n";
    //     }

    //     else
    //     {   cout << count << ". I love to program! This number is odd! :(\n"; 
    //         ofile << count << ". I love to program! This number is odd! :(\n";
    //     }
    // }


    // ifstream file("Text.txt");
    // string line;

    // while (file >> line)
    //     cout << line << endl;
        

    // string::substr


    // printable('9');

    // sinlog(3.14, 2.17);

    // startWithA("a boy named Oniel...");

    char vowel = 'a';
    cout << (isalpha(vowel) ? "This is an alphabetic value." : "This is not an alphabetic value.") << endl;

    int num = 9;
    cout << ((num < 10) ? "This number is less than 10." : "This number is bigger than 10.") << endl;

    string name = "Oniel A. Plaza Pérez\n";
    int pos = name.find("P");
    cout << name << "This is the position for letter 'P': "<< pos << endl;
    string name2 = name.replace(pos, pos + 4,"Gonzalez Pérez Plaza Bosques");
    cout << name2 << endl;

    cout << calc_sum(600, 1200, 1400) << endl;

    cout << showpoint << setprecision(2) << 9.0 << endl;

    cout << "During class!!\n";
    cout << "Hiya y'all!!\n";
    for (int count = 2; count <= 91; count += 2)
    {
        cout << "This is the current count: " << count << endl;
        cout << "This are the remaining iterations: " << showpoint << fixed << setprecision(8)
        << 90.0 / count << endl;
    }
    return 0;
}

