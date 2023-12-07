#include <iostream>

using namespace std;

int main()
{
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;
    cout << grade << endl;
    if (grade < 40){
        cout << "You failed" << endl;
    } else if (grade <= 50){
        cout << "You got a D" << endl;
    } else if (grade <= 60){
        cout << "You got a C" << endl;
    } else if (grade <= 70){
        cout << "You got a B" << endl;
    } else if (grade <= 80){
        cout << "You got an A" << endl;
    } 
    return 0;
}