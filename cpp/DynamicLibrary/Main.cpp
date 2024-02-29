#include <iostream>
#include "stringOperations.h"
using namespace std;
int main() {
    string str1 = "Haswanth";
    string str2 = "Reddy";
    string result_concat = concatenate(str1, str2);
    cout << "Concatenated string: " << result_concat <<endl;
    string result_substring = substring(result_concat, 6, 5);
    cout << "Substring: " <<result_substring <<endl;
    string result_reverse = reverse(result_concat);
    cout << "Reversed string: " << result_reverse<<endl;
    return 0;
}
