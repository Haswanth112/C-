#include <iostream>
#include <cstdlib>
using namespace std; 
int main() {
    int *arr;
    int size = 7; 
    arr = (int*)calloc(size, sizeof(int));
    if (arr == nullptr) {
        cout<< "Memory allocation failed :"<<endl;
        return 1;
    }
    cout << "Memory allocated using calloc (initialized to zero):" <<endl;
    for (int i = 0; i < size; ++i) {
        cout << "arr[" << i << "] = " << arr[i] <<endl;
    }
    free(arr);
    return 0;
}
