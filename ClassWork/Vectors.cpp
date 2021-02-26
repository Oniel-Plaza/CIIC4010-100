#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main() {
    vector <string> students;
    string s1, s2, s3;
    string s_ls[3] = {s1, s2, s3};

    cout << "VECTOR PRACTICE!!!\n\n";
    cout << "Please input some student's names, so they can be added to the 'Students' vector! (3 in total): ";
    cin >> s1 >> s2 >> s3;
    cout << s1 << " ; " << s2 << " ; " << s3 << endl;
    students.push_back(s1);
    students.push_back(s2);
    students.push_back(s3);

    for(int i = 0; i < 3; i++){
        cout << "First Student: " << students[i] << endl;
    }

}
