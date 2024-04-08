#include "CaesarCipher.h"

string encryptString(const string& text, int shift) {
    string encryptedString;
    for (char c : text) {
        if (isalpha(c)) {
            int caseShift = isupper(c) ? 'A' : 'a';
            c = (c - caseShift + shift) % 26 + caseShift;
        }
        encryptedString += c;
    }
    return encryptedString;
}

int main() {
    int shift = 0;
    string text;

    cout << "Input text: ";
    getline(cin, text);
    cout << "Input shift: ";
    cin >> shift;

    string encrypted = encryptString(text, shift);
    cout << "Result: " << encrypted << endl << endl;

    system("pause");
    return 0;
}