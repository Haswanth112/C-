#include "stringOperations.h"
#include <algorithm> 
using namespace std;
string concatenate(const string& str1, const string& str2) {
    return str1 + str2;
}
string substring(const string& str, size_t pos, size_t len) {
    return str.substr(pos, len);
}
string reverse(const string& str) {
    string reversed_str(str.rbegin(), str.rend());
    return reversed_str;
}
