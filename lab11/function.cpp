#include <iostream>
#include <cmath>
using namespace std;

int findlenNumber( int a ) {
    int i = 0;
    int lennumber = a;
    while( lennumber > 0 ) {
        i++;
        lennumber = lennumber / 10;
    }
    return i;
}

int main() {
    int number;

    cout << "Enter Number: ";
    cin >> number;

    int len = findlenNumber(number);
    int copynum = number;
    int sum = 0;

    while( copynum > 0 ) {
        int lastnum = copynum % 10;
        sum += pow(lastnum, len);
        copynum /= 10;
    }

    if( sum == number ) {
        cout << "Pass." << endl;
    }else {
        cout << "Not Pass." << endl;
    }

}