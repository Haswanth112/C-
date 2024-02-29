#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;
int main() {
    cout << "Enter a sentence: ";
    string input;
    getline(cin, input);
    istringstream iss(input);
    string word;
    unordered_map<string, int> wordFrequency;
    while (iss >> word) {
        wordFrequency[word]++;
    }
    cout << "Word Frequency Count:" <<endl;
    for (auto it = wordFrequency.begin(); it != wordFrequency.end(); ++it)
    {
        cout << it->first << ": " << it->second <<endl;
    }
    return 0;
}
