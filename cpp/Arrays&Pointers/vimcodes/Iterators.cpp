#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout<<"Using iterators to print vector elements: ";
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
    cout << *it << " ";
    }
    cout<<endl;
    cout << "Using auto with iterators: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout<<endl;
    cout << "Using range-based for loop: ";
    for (int num : numbers) {
    cout << num << " ";
    }
    cout << std::endl;
    return 0;
}
