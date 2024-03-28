#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* prev;
    Node* next;
    Node(int data) : data(data), prev(nullptr), next(nullptr) {}
};
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}
    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        if (!tail) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }
    void deleteNode(int key) {
        if (!head)
            return;
        Node* temp = head;
        while (temp && temp->data != key)
            temp = temp->next;
        if (!temp)
            return;
        if (temp == head) {
            head = head->next;
            if (head)
                head->prev = nullptr;
            delete temp;
        } else if (temp == tail) {
            tail = tail->prev;
            if (tail)
                tail->next = nullptr;
            delete temp;
        } else {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
        }
    }
    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void menu() {
        int choice, value;
        while (true) {
            cout << "1. Insert at Beginning\n2. Insert at End\n3. Delete\n4. Print\n5. Exit\nEnter your choice: ";
            cin >> choice;
            switch (choice) {
                case 1:
                    cout << "Enter value to insert at beginning: ";
                    cin >> value;
                    insertAtBeginning(value);
                    break;
                case 2:
                    cout << "Enter value to insert at end: ";
                    cin >> value;
                    insertAtEnd(value);
                    break;
                case 3:
                    cout << "Enter value to delete: ";
                    cin >> value;
                    deleteNode(value);
                    break;
                case 4:
                    cout << "Doubly Linked List: ";
                    printList();
                    break;
                case 5:
                    cout << "Exiting..." << endl;
                    return;
                default:
                    cout << "Invalid choice! Try again." << endl;
            }
        }
    }
};

int main() {
    DoublyLinkedList dll;
    dll.menu();
    return 0;
}
