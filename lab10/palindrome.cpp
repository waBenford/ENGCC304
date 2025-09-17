#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    
    cout << "Enter word: ";
    cin >> text;

    string reverse(text.rbegin(), text.rend());

    cout << "----- ";
    if( text == reverse ) {
        cout << "Pass.";
    }else {
        cout << "Not Pass.";
    }
    cout << " -----";
}