#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};
class Stack {
private:
    Node* top; 
public:
    Stack() {
        top = nullptr;
    }
    ~Stack() {
        while (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }
    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow! Cannot pop from an empty stack." << endl;
            return -1; 
        } else {
            int poppedValue = top->data;
            Node* temp = top;
            top = top->next;
            delete temp;
            return poppedValue;
        }
    }
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        } else {
            return top->data;
        }
    }
    bool isEmpty() {
        return top == nullptr;
    }
    void performstackOperation(int choice) {
        switch (choice) {
            case 1:
                int value;
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                cout << "Popped element: " << pop() << endl;
                break;
            case 3:
                cout << "Top element: " << peek() << endl;
                break;
            case 4:
                cout << "Is stack empty : " << (isEmpty() ? "Yes" : "No") << endl;
                break;
            case 5:
                cout << "Exiting program " << endl;
                exit(0);
            default:
                cout << "Invalid choice please enter a valid option." << endl;
        }
    }
};
int main() {
    Stack stack;
    int choice;
    while (true) {
        cout << "1. Push"<<endl;
        cout << "2. Pop"<<endl;
        cout << "3. Peek"<<endl;
        cout << "4. Check if stack is empty"<<endl;
        cout << "5. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        stack.performstackOperation(choice);
    }
    return 0;
}
