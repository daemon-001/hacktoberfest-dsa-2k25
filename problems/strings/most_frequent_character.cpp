#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    unordered_map<char, int> freq;

    // Count frequency (ignore spaces)
    for (char c : text) {
        if (c != ' ')
            freq[c]++;
    }

    char maxChar = '\0';
    int maxCount = 0;

    // Find the character with the highest frequency
    for (char c : text) {
        if (c != ' ' && freq[c] > maxCount) {
            maxChar = c;
            maxCount = freq[c];
        }
    }

    if (maxChar != '\0')
        cout << "Most frequent character: " << maxChar << " (appears " << maxCount << " times)\n";
    else
        cout << "No valid characters found.\n";

    return 0;
}
