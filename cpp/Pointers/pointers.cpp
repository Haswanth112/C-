#include <iostream>
#include <cstring>
using namespace std;
int main() {
const char* inputString = "Hello, Dynamic Buffer";
size_t size = strlen(inputString) + 1;	
char* dynamicBuffer = new char[size];
strcpy(dynamicBuffer, inputString);
cout << "Loaded data from buffer: " << dynamicBuffer <<endl;
delete[] dynamicBuffer;
return 0; 
}
