#include <iostream>
#include <string>

using namespace std;

/* Enter the word
Read the word
Get the word and analyze each letter
Count the letters
Print the results
*/

int main() {
    string word;
    char letter;
    int counterA = 0, counterE = 0, counterI = 0, counterO = 0, counterU = 0, totalVowels = 0;

    cout << "Enter a word: " << endl;
    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        char letter = word[i];
        switch (letter) {
        case 'a':
            counterA++;
            break;
        case 'e':
            counterE++;
            break;
        case 'i':
            counterI++;
            break;
        case 'o':
            counterO++;
            break;
        case 'u':
            counterU++;
            break;
        default:
            break;
        }
    }

    for (int i = 0; i < word.length(); i++) {
        char letter = word[i];
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
            totalVowels++;
        }
    }

    cout << "Total number of vowels: " << totalVowels << endl;

    if (counterA != 0) {
        cout << "a " << counterA << endl;
    }

    if (counterE != 0) {
        cout << "e " << counterE << endl;
    }

    if (counterI != 0) {
        cout << "i " << counterI << endl;
    }

    if (counterO != 0) {
        cout << "o " << counterO << endl;
    }

    if (counterU != 0) {
        cout << "u " << counterU << endl;
    }

    return 0;
}