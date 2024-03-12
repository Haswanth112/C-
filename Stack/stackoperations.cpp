#include <iostream>
#define MAX_SIZE 1000 // Maximum size of the stack

class Stack {
private:
    int top;          // Index to keep track of the top element
    int arr[MAX_SIZE];// Array to store the elements of the stack

public:
    // Constructor to initialize the stack
    Stack() {
        top = -1; // Initialize top to -1 indicating an empty stack
    }

    // Function to push an element onto the stack
    void push(int value) {
        if (top >= MAX_SIZE - 1) { // Check if the stack is full
            std::cout << "Stack Overflow\n"; // Display error message
            return;
        }
        arr[++top] = value; // Increment top and add the value to the array
        std::cout << value << " pushed to stack\n"; // Display success message
    }

    // Function to pop an element from the stack
    int pop() {
        if (top < 0) { // Check if the staq5ck is empty
            std::cout << "Stack Underflow\n"; // Display error message
            return -1;
        }
        int value = arr[top--]; // Get the value at the top and decrement top
        return value; // Return the popped value
    }

    // Function to return the top element of the stack
    int peek() {
        if (top < 0) { // Check if the stack is empty
            std::cout << "Stack is empty\n"; // Display error message
            return -1;
        }
        return arr[top]; // Return the top element of the stack
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top < 0; // Return true if top is less than 0, indicating an empty stack
    }
};

int main() {
    Stack stack; // Create a stack object
    int choice, value;

    do {
        std::cout << "1. Push\n";
        std::cout << "2. Pop\n";
        std::cout << "3. Peek\n";
        std::cout << "4. Check if Stack is Empty\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter value to push: ";
                std::cin >> value;
                stack.push(value);
                break;
            case 2:
                std::cout << stack.pop() << " popped from stack\n";
                break;
            case 3:
                std::cout << "Top element: " << stack.peek() << std::endl;
                break;
            case 4:
                if (stack.isEmpty()) {
                    std::cout << "Stack is empty\n";
                } else {
                    std::cout << "Stack is not empty\n";
                }
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice\n";
        }
    } while (choice != 5);

    return 0;
}
