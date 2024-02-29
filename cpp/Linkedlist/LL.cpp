#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};
void printLinkedList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout<<endl;
}
int main() {
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    head->next = second;
    second->next = third;
    cout << "Linked List: ";
    printLinkedList(head);
    delete head;
    delete second;
    delete third;
    return 0;
}
