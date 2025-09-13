#include <iostream>
using namespace std;

int main() {
    int Position , Time , Project;

    cout << "Enter your Position(1-3): ";
    cin >> Position;
    cout << "Enter your Time in work: ";
    cin >> Time;
    cout << "Enter your Project success this years: ";
    cin >> Project;

    //Base salary เงินเริ่มต้นของแต่ละแผนก
    int Base = 0;

    switch( Position ) {
        case 1:
            Base = 20000;
            cout << "Base salary: " << Base << " THB" << endl;
            break;
        case 2:
            Base = 35000;
            cout << "Base Salary: " << Base << " THB" << endl;
            break;
        case 3:
            Base = 50000;
            cout << "Base Salary: " << Base << " THB" << endl;
            break;
        default:
            cout << "Please input only number 1-3!" << endl;
            return 0;
    }

    //Experience_bonus โบนัสเวลาทำงาน
    int Time_bonus = 0;

    if( Time > 5 ) {
        Time_bonus = Base * 20 / 100;
        cout << "Experience Bonus: " << Time_bonus << " THB" << endl;
    }
    else if( Time >= 4 ) {
        Time_bonus = Base * 15 / 100;
        cout << "Experience Bonus: " << Time_bonus << " THB" << endl;
    }
    else if( Time >= 1 ) {
        Time_bonus = Base * 10 / 100;
        cout << "Experience Bonus: " << Time_bonus << " THB" << endl;
    }
    else {
        cout << "Experience Bonus: 0 THB" << endl;
    }

    //Special Bonus โบนัสโปรเจ็คที่เสร็จ
    int Project_bonus = 0;

    if( Project > 5 ) {
        Project_bonus = Base * 5 / 100;
        cout << "Special Bonus: " << Project_bonus << " THB" << endl;
    }
    else {
        cout << "Special Bonus: 0 THB" << endl;
    }

    int Total = 0;
    Total = Base + Time_bonus + Project_bonus;
    cout << "Net Salary: " << Total << " THB" << endl;
}