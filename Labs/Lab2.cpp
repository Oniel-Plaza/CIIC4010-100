#include<iostream>
using namespace std;

void practiceCharMethod1(char c);
void practiceCharMethod2(char c);
void practiceCharMethod3(char c);
// void practiceCharMethod4(char c);

// int main()
// {
//   practiceCharMethod1('f'); // Test with different characters
  
//   practiceCharMethod2('%'); // Test with different characters
  
//   practiceCharMethod3('L'); // Test with different characters
  
// //   practiceCharMethod4('a'); // Test with different characters
  
//   return 0;
// }

// ONLY COPY & PASTE THE SPECIFIC METHOD AS YOUR ANSWER

/* The function must print the inverse capitalization of the character passed as an argument */
  
void practiceCharMethod1(char character)
{
//   cout << "Inverse Capitalization: ";
  
  //YOUR CODE GOES HERE
  if (isupper(character)) {
      char character2 = tolower(character);
      cout << "Inverse Capitalization: " << character2;
  }
  else {
      char character3 = toupper(character);
      cout << "Inverse Capitalization: " << character3;
  }
  
}
  
/* Print only digits or alphanumeric characters. If other print "none". */
  
void practiceCharMethod2(char character)
{
  cout << "The character is: ";
  
  //YOUR CODE GOES HERE
  if (isdigit(character) || isalpha(character)) {
      cout << character;
  }
  else {
      cout << "none";
  }
}

/* You will need to verify the character passed as an argument. 
  Some times it can only be a space or a punctuation character. Validate it before using it. 
  If the character is other than a space or a punctuation, then it is okay to use it.
*/
  
void practiceCharMethod3(char character)
{
  bool okToUse;
    
  //YOUR CODE GOES HERE
  if (ispunct(character) != 0 || isspace(character) != 0) {
      okToUse = false;
  }
  else {
      okToUse = true;
  }
    
  cout << (okToUse ? "Character is valid" : "Character is not valid") << endl;
}
  
/* You will need to verify if the character passed as an argument is equal to 'a', 'b', or 'c'
  and if so, print "first three letters". 
  It must be CASE INSENSITIVE, so if 'A', 'B' or 'C' is given, it must also print "first three letters". 
*/
  
void practiceCharMethod4(char c)
{
  // YOUR CODE HERE
  if (c == 'a' || c == 'b' || c == 'c' || c == 'A' || c == 'B' || c == 'C' ){
      cout << "first three letters";
  }
  else {
      cout << "none";
  }
  
}

int main()
{
  practiceCharMethod1('f'); // Test with different characters
  
  practiceCharMethod2('%'); // Test with different characters
  
  practiceCharMethod3('L'); // Test with different characters
  
//   practiceCharMethod4('a'); // Test with different characters
  
  return 0;
}

// MATH PRACTICE!!
// #include <iostream>
// #include <cmath>

// using namespace std;

// // STARTER CODE HERE
// // COMPLETE THE FOLLOWING FUNCTION 
// void radius(double x1, double y1, double xCenter, double yCenter) {
    
//     double result = sqrt((pow(x1 - xCenter, 2) + pow(y1 - yCenter, 2)));
    
//     //YOUR CODE GOES HERE
//     cout << "The radius is: " << result << endl;
// }

// // STARTER CODE HERE
// // COMPLETE THE FOLLOWING FUNCTION 
// void maxRoundedValue(double first, double second) {
//     int round_d = floor(first),
//     round_u = ceil(second),
//     max;

//     if (round_d > round_u) {
//         max = round_d;
//     }

//     else{
//         max = round_u;
//     }
    
//     cout << "The maximum rounded value is: " << max;
    
//     //YOUR CODE GOES HERE
// }

// // STARTER CODE HERE
// // COMPLETE THE FOLLOWING FUNCTION 
// void degreeAngleCosine (double d) {
//     double pi = 2*acos(0.0);
//     // cout << "YOUR CODE HERE" << endl;
//     double radians = d * pi / 180,
//     cosine = cos(radians);

//     cout << cosine;
      
// }

// int main() {
//     return 0;
// }


// STRING PRACTICE!!
// #include<iostream>
// #include<string>
// using namespace std;

// // void stringPractice1(string password);
// // void stringPractice2(string name, string department, string college);
// // void stringPractice3(string twoWords);
// // void stringPractice4(string word);


// /* The function must verify the length of the string passed as an argument. 
//   If it is too short (less than 8), it should print "password is too short”.
// */

// void stringPractice1(string password) {
//   if (password.length() < 8) {
//       cout << "password is too short" << endl;
//   }

//   else 
//     cout << "none";
  
// }

// /* The function must concatenate the string arguments in order to print a string in the following way:
// "Welcome <name> to the department <department> in the College of <college>"
// So if the name were "Pedro", the department were CIIC", and the college were "Engineering", your function would print:
// "Welcome Pedro to the CIIC department in the College of Engineering"
// */

// void stringPractice2(string name, string department, string college) {
// //   cout << "YOUR CODE HERE" << endl;
//     cout << "Welcome " << name << " to the " << department << " department in the College of " << college << endl;
// }

// /* The function must receive the string and replace the space in it with "_"  (you may assume that the string has only one space)
//   and then print the word with the space replaced by “_”
// */

// void stringPractice3(string twoWords) {
//   // YOUR CODE HERE
//   int pos = twoWords.find(' ');
//   twoWords.replace(pos, 1, "_");
//   cout << twoWords << endl;
// }

// /* This function must erase  the first 3 characters of a string, and append "---" at the end of the string 
//   if given the word "Vehicle", the result would be: "icle---"
//   The altered string must be printed.
// */

// void stringPractice4(string word) {
//   // YOUR CODE HERE
//   word = word.erase(0, 3);
//   word = word + "---";
//   cout << word << endl;
// }


// int main() {
//   stringPractice1("1234");
//   stringPractice2("Pedro", "CIIC", "Engineering");
//   stringPractice3("Two Words");
//   stringPractice4("Vehicle");
  
//   return 0;
// }