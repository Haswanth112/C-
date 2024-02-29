#include <iostream>
#include <set>
using namespace std;
int main() {
    std::set<int> numberSet;
    cout<<"Inserting elements in the set:"<<endl;
    numberSet.insert(10);
    numberSet.insert(20);
    numberSet.insert(15);
    numberSet.insert(20);
    cout << "Size of the set: " << numberSet.size() <<endl;
    cout<<"Checking if an element exists in the set:"<<endl;
    if (numberSet.find(20) != numberSet.end()) {
        cout << "Value 20 is present in the set" <<endl;
    } else {
        cout << "Value 20 is not present in the set :"<<endl;
    }
    cout << "All values in the set:" <<endl;
    for (const auto& num : numberSet) {
        cout << num <<endl;
    }
    cout<< "Erasing an element from the set"<<endl;
    numberSet.erase(15);
    cout<<"Clearing the set"<<endl;
    numberSet.clear();
    cout<<"Checking either set is empty or not:"<<endl;
    if (numberSet.empty()) {
        cout << "Set is empty" << endl;
    } else {
        cout << "Set is not empty" << endl;
    }

    return 0;
}
