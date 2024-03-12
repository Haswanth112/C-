#include <iostream>
#define MAX_SIZE 100
using namespace std;
class Stack {
private:
    int top;          
    int arr[MAX_SIZE];
public:
    Stack() {
        top = -1; 
    }
    void push(int value) {
        if (top >= MAX_SIZE - 1) { 
            cout << "Stack Overflow"<<endl; 
            return;
        }
        arr[++top] = value; 
        cout << value << " pushed to stack"<<endl; 
    }
    int pop() {
        if (top < 0) { 
            cout << "Stack Underflow"<<endl; 
            return -1;
        }
        int value = arr[top--]; 
        return value;
    }
    int peek() {
        if (top < 0) { 
            cout << "Stack is empty"<<endl; 
            return -1;
        }
        return arr[top];
    }
    bool isEmpty() {
        return top < 0; 
    }
};
int main() {
    Stack stack; 
    int choice, value;
    do {
        cout << "1. Push"<<endl;
        cout << "2. Pop"<<endl;
        cout << "3. Peek"<<endl;
        cout << "4. Check if Stack is Empty"<<endl;
        cout << "5. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                cout << stack.pop() << " popped from stack"<<endl;
                break;
            case 3:
                cout << "Top element: " << stack.peek()<<endl;
                break;
            case 4:
                if (stack.isEmpty()) {
                    cout << "Stack is empty"<<endl;
                } else {
                    cout << "Stack is not empty"<<endl;
                }
                break;
            case 5:
                cout << "Exiting.."<<endl;
                break;
            default:
                cout << "Invalid choice"<<endl;
        }
    } while (choice != 5);

    return 0;
}
