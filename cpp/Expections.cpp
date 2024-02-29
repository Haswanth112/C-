#include <iostream>
using namespace std;

int main() {
  try {
    int age = 21;
    if(age >= 18) {
      cout << "Eligible for Vote";
      
    } else {
      throw (age);
    }
  }
  catch (int myNum) {
    cout << "You are not eligible for Vote :"<<endl;
    cout << "Age is: " << myNum;  
  }
  return 0;
}