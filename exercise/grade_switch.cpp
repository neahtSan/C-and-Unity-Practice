#include <iostream>

using namespace std;

int main()
{
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;

    switch (grade / 10) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            cout << "You failed" << endl;
            break;
        case 5:
            cout << "You got a D" << endl;
            break;
        case 6:
            cout << "You got a C" << endl;
            break;
        case 7:
            cout << "You got a B" << endl;
            break;
        case 8:
            cout << "You got an A" << endl;
            break;
        case 9:
        case 10:
            cout << "You got an A" << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
    }

    return 0;
}
