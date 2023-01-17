#include <iostream>
#include <string>
using namespace std;

int main() {
    char user_letter;
    cout << "Enter a single lowercase letter: " << endl;
    cin >> user_letter;

    switch(user_letter) {
        case 'a':
            cout << "The letter is a vowel." << endl;
            break;
        case 'e':
            cout << "The letter is a vowel." << endl;
            break;
        case 'i':
            cout << "The letter is a vowel." << endl;
            break;
        case 'o':
            cout << "The letter is a vowel." << endl;
            break;
        case 'u':
            cout << "The letter is a vowel." << endl;
            break;
        default:
            cout << "The letter is a consonant." << endl;
    }

    return 0;
}