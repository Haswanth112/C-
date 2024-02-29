#include <iostream>
using namespace std;
class Employee {
  private:
    int salary;
  public:
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};
int main() {
  Employee myObj;
  myObj.setSalary(30600);
  cout << myObj.getSalary();
  return 0;
}
