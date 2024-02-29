#include <iostream>
#include <string>
using namespace std;
class Vehicle {
  public: 
    string brand = "Ford";
    void honk() {
      cout << "Tesla"<<endl;
    }
};
class Car: public Vehicle {
  public: 
    string model = "Ferrai";
};
int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}

