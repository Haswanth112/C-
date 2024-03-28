#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
class LinkedList {
private:
    Node* head;
public:
    LinkedList() {
        head = nullptr;
    }
    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void deleteNode(int key) {
        Node* temp = head;
        Node* prev = nullptr;
        if (temp != nullptr && temp->data == key) {
            head = temp->next;
            delete temp;
            return;
        }
        while (temp != nullptr && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Node with data " << key << " not found." << endl;
            return;
        }
        prev->next = temp->next;
        delete temp;
    }
    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
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
                    cout << "Linked List: ";
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
    LinkedList linkedList;
    linkedList.menu();
    return 0;
}
