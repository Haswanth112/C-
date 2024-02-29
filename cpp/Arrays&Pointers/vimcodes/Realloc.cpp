#include <iostream>
#include <cstdlib> 
using namespace std;
int main() {
    int *arr;
    int initialSize = 5; 
    int newSize = 10;    
    arr = (int*)malloc(initialSize * sizeof(int));
    if (arr == nullptr) {
        cout << "Memory allocation failed :"<<endl;
        return 1;
    }
    cout << "Memory allocated for " << initialSize << " integers." <<endl;
    cout << "Initial elements in the array:" <<endl;
    for (int i = 0; i < initialSize; ++i) {
        cout << "arr[" << i << "] = " << arr[i] <<endl;
    }
    arr = (int*)realloc(arr, newSize * sizeof(int));
    if (arr == nullptr) {
        cout << "Memory reallocation failed :"<<endl;
        return 1;
    }
    cout << "Memory reallocated for " << newSize << " integers." <<endl;
    cout << "Elements in the reallocated array:" <<endl;
    for (int i = 0; i < newSize; ++i) {
        cout << "arr[" << i << "] = " << arr[i] <<endl;
    }
    free(arr); 
    return 0;
}
