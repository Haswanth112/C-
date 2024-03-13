#include <iostream>
using namespace std;
#define MAX_SIZE 10
class Queue {
private:
    int arr[MAX_SIZE];
    int front, rear;
public:
    Queue() {
        front = -1; 
        rear = -1; 
    }
    bool isEmpty() {
        return front == -1;
    }
    bool isFull() {
        return rear == MAX_SIZE - 1;
    }
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full we cannot Insert an element" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }
        arr[rear] = value;
        cout << "Enqueued: " << value << endl;
    }
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty, cannot dequeue" << endl;
            return -1;
        }
        int dequeuedValue = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        cout << "Dequeued: " << dequeuedValue << endl;
        return dequeuedValue;
    }
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty, nothing to peek" << endl;
            return -1; 
        }
        return arr[front];
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty, nothing to display " << endl;
            return;
        }
        cout << "The following Elements in the queue is : ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void performOperation(int choice) {
        switch (choice) {
            case 1: {
                int value;
                cout << "Enter value to enqueue: ";
                cin >> value;
                enqueue(value);
                break;
            }
            case 2: {
                dequeue();
                break;
            }
            case 3: {
                int frontValue = peek();
                if (frontValue != -1) {
                    cout << "Front element: " << frontValue << endl;
                }
                break;
            }
            case 4: {
                cout << "Is queue empty? " << (isEmpty() ? "Yes" : "No") << endl;
                break;
            }
            case 5: {
                display();
                break;
            }
            case 6: {
                cout << "Exiting program " << endl;
                exit(0);
            }
            default: {
                cout << "Invalid choice!"<< endl;
                break;
            }
        }
    }
};

int main() {
    Queue q;
    int choice;
    while (true) {
        cout << "1. Enqueue"<<endl;
        cout << "2. Dequeue"<<endl;
        cout << "3. Peek"<<endl;
        cout << "4. Check if queue is empty"<<endl;
        cout << "5. Display queue"<<endl;
        cout << "6. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        q.performOperation(choice);
    }
    return 0;
}
