#include <iostream>
#include <string>
using namespace std;

int main() {
string studentName;
int age;
double score;

cout << "Enter student name: ";
getline(cin,studentName);

cout << "Enter age: ";
cin >> age;

cout << "Enter exam score: ";
cin >> score;

if (age >= 18) {
    if (score >= 50) {
        cout << "Decision: Admitted" << endl;
    } else {
        cout << "Decision: Not Admitted: Low Score" << endl;
    }
} else {
    cout << "Decision: Not Admitted: Underage" << endl;
}

return 0;

}
