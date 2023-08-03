/* The objective of this test is to practice C++ specific input and
output commands (cin, cout) and the use of the string data type.
Do not use other input commands such as getline.

Write a program that reads only a single word from the input.
Then, your program should count the number of vowels present in the word.
Finally, it should print the quantity of times a certain vowel appeared.
If a vowel didn't appear at all, it should not be printed.

To make it easier, you can assume that the words will always be all lowercase letters. */

#include <iostream>
#include <string>

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;

    int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0, vowelCount = 0;

    for (auto i = 0; i < word.length(); i++) {
        char letter = word[i];
        switch (letter) {
            case 'a':
                countA++;
                break;
            case 'e':
                countE++;
                break;
            case 'i':
                countI++;
                break;
            case 'o':
                countO++;
                break;
            case 'u':
                countU++;
                break;
        }
    }

    // Calculate the total count of vowels
    int totalCount = countA + countE + countI + countO + countU;

    // Other logic to calculate the total count of vowels
    for (auto i = 0; i < word.length(); i++) {
        char letter = word[i];
        if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
            vowelCount++;
        }
    }

    // Print the count of each vowel that appeared (if it appeared)
    if (countA > 0)
        std::cout << "a: " << countA << std::endl;
    if (countE > 0)
        std::cout << "e: " << countE << std::endl;
    if (countI > 0)
        std::cout << "i: " << countI << std::endl;
    if (countO > 0)
        std::cout << "o: " << countO << std::endl;
    if (countU > 0)
        std::cout << "u: " << countU << std::endl;

    // Print the total count of vowels
    std::cout << "Total vowels: " << totalCount << std::endl;

    std::cout << "vowels: " << vowelCount << std::endl;

    return 0;
}
