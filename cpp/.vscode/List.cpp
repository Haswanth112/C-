#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> myList;
    cout<<"Inserting elements into the list"<<endl;
    myList.push_back(10); 
    myList.push_front(5); 
    myList.push_back(20);
    myList.push_front(2);
    cout << "Size of the list: " << myList.size()<<endl;
    cout << "All elements in the list:"<<endl;
    for (const auto& num : myList) {
        cout << num << endl;
    }
    cout<<" Removing elements from the list"<<endl;
    myList.pop_front();
    myList.pop_back();  
    cout<< "Checking if the list is empty"<<endl;
    if (myList.empty()) {
        cout << "List is empty"<<endl;
    } else {
        cout << "List is not empty"<<endl;
    }

    return 0;
}
