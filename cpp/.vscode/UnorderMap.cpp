#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
    unordered_map<std::string, int> myMap;
    cout<<"Inserting elements into the unordered_map"<<endl;
    myMap["virat"] = 25;
    myMap["Rohit"] = 30;
    myMap["sachin"] = 28;
    cout << "Size of the unordered_map: " << myMap.size() <<endl;
    cout << "All elements in the unordered_map:" <<endl;
    for (const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second <<endl;
    }
    cout<<" Checking if a key exists in the unordered_map"<<endl;
    string key = "Rohit";
    if (myMap.find(key) != myMap.end()) {
        cout << key << " is present in the map with value: " << myMap[key]<<endl;
    } else {
        cout << key << " is not present in the map"<<endl;
    }
    cout<<"Erasing an element from the unordered_map"<<endl;
    myMap.erase("Charlie");
    cout<<"Clearing the unordered_map :"<<endl;
    myMap.clear();
    cout<<"Checking if the unordered_map is empty:"<<endl;
    if (myMap.empty()) {
        cout << "Unordered_map is empty" << std::endl;
    } else {
        cout << "Unordered_map is not empty" << std::endl;
    }

    return 0;
}
