#include <iostream>
#include <cstdlib> // Required for malloc and calloc

int main() {
    // Using malloc
    int *arrMalloc;
    int sizeMalloc = 5;

    arrMalloc = (int*)malloc(sizeMalloc * sizeof(int));

    // Check if memory allocation using malloc was successful
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed for malloc\n";
        return 1;
    }

    std::cout << "Memory allocated using malloc:" << std::endl;

    // Display initial values in the memory allocated by malloc
    for (int i = 0; i < sizeMalloc; ++i) {
        std::cout << "arrMalloc[" << i << "] = " << arrMalloc[i] << std::endl;
    }

    free(arrMalloc); // Free memory allocated by malloc

    // Using calloc
    int *arrCalloc;
    int sizeCalloc = 5;

    arrCalloc = (int*)calloc(sizeCalloc, sizeof(int));

    // Check if memory allocation using calloc was successful
    if (arrCalloc == nullptr) {
        std::cout << "Memory allocation failed for calloc\n";
        return 1;
    }

    std::cout << "\nMemory allocated using calloc (initialized to zero):" << std::endl;

    // Display values in the memory allocated by calloc (all initialized to zero)
    for (int i = 0; i < sizeCalloc; ++i) {
        std::cout << "arrCalloc[" << i << "] = " << arrCalloc[i] << std::endl;
    }

    free(arrCalloc); // Free memory allocated by calloc

    return 0;
}
