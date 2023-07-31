/* The objective of this problem is to practice specific input and output commands in C++ (cin, cout)
and also the usage of the string data type. Do not use other input commands such as getline.

Write a program that reads only a single word from the input.
Then, your program should count the number of vowels present in the word.
Finally, it must print the frequency of each specific vowel.
If a vowel did not appear at all, it should not be printed.

To simplify, you can assume that the words will always consist of lowercase letters. */

#include <iostream>
#include <string>

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;

    int vowelCount = 0;
    int aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0;

    for (std::string::size_type i = 0; i < word.length(); i++) {
        char letter = word[i];

        // Check if the letter is a lowercase vowel
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
            vowelCount++;

            // Count the frequency of each vowel separately
            switch (letter) {
                case 'a':
                    aCount++;
                    break;
                case 'e':
                    eCount++;
                    break;
                case 'i':
                    iCount++;
                    break;
                case 'o':
                    oCount++;
                    break;
                case 'u':
                    uCount++;
                    break;
                default:
                    break;
            }
        }
    }

    std::cout << "Number of vowels: " << vowelCount << std::endl;
    std::cout << "Frequency of 'a': " << aCount << std::endl;
    std::cout << "Frequency of 'e': " << eCount << std::endl;
    std::cout << "Frequency of 'i': " << iCount << std::endl;
    std::cout << "Frequency of 'o': " << oCount << std::endl;
    std::cout << "Frequency of 'u': " << uCount << std::endl;

    return 0;
}