#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> myStack;
    cout<<"Push elements in the stack:"<<endl;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    cout << "Size of the stack: " << myStack.size()<<endl;
    cout<<"Accessing the top element of the stack"<<endl;
    cout << "Top element of the stack: " << myStack.top()<<endl;
    cout<<"Checking if the stack is empty"<<endl;
    if (myStack.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }
    cout<<"Popping elements from the stack"<<endl;
    myStack.pop();
    cout<<"Size of the modified stack: " << myStack.size()<<endl;
    return 0;
}
