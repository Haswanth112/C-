#include<iostream>
using namespace std;
class Node
{
    public:
    int value;
    Node* Next;
};
void printList(Node* head) 
{
    while(head!=NULL)
    {
       cout<< head->value<<endl;
       head=head->Next;


    }
}
void insertAtTheFront(Node** head,int newvalue)
{
    Node* newNode=new Node();
    newNode->value=newvalue;
    newNode->Next=*head;
    *head=newNode;
}
void deletefromBeginning(Node** head)
{
    if (*head == nullptr) {
        return;
    }
    Node* temp = *head;     // Store the address of the current head node
    *head = (*head)->Next;  // Move the head pointer to the next node
    delete temp;            // Free the memory occupied by the original head node
}


int main()
{
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();
    head->value=1;
    head->Next=second;
    second->value=2;
    second->Next=third;
    third->value=3;
    third->Next=NULL;
    insertAtTheFront(&head,6);
    insertAtTheFront(&head,7);
    printList(head);

    deletefromBeginning(&head);
    printList(head);
}
