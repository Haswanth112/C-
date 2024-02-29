#include <iostream>
#include <map>
using namespace std;
int main() {
    multimap<string, int> myMultimap;
    cout<<"Inserting elements into the multimap"<<endl;
    myMultimap.insert(make_pair("Haswanth", 25));
    myMultimap.insert(make_pair("Sri", 30));
    myMultimap.insert(make_pair("Haswanth", 28));
    cout << "Size of the multimap: " << myMultimap.size()<<endl;
    cout<< "Counting occurrences of a key in the multimap"<<endl;
    std::cout << "Occurrences of 'Haswanth': " << myMultimap.count("Haswanth") <<endl;
    cout<<" Accessing elements in the multimap using iterators"<<endl;
    cout << "All elements in the multimap:" << endl;
    for (auto it = myMultimap.begin(); it != myMultimap.end(); ++it) {
        cout << it->first << ": " << it->second <<endl;
    }
    cout<<"Finding elements with a specific key :"<<endl;
    cout << "Values for key 'Haswanth':" <<endl;
    auto range = myMultimap.equal_range("Haswanth");
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second <<endl;
    }
    cout<<"Erasing elements with a specific key"<<endl;
    myMultimap.erase("Haswanth");
    cout<<"Clearing the multimap"<<endl;
    myMultimap.clear();
    cout<<" Checking if the multimap is empty"<<endl;
    if (myMultimap.empty()) {
        cout << "Multimap is empty"<<endl;
    } else {
        cout << "Multimap is not empty"<<endl;
    }

    return 0;
}
