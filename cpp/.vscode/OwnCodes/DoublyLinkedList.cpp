#include<iostream>
using namespace std;
class Node
{
    public:
    int value;
    Node* next;
    Node* previous;
};
int main()
{
    Node* head;
    Node* tail;
    Node* node=new Node();
    node->value=1;
    node->next=NULL;
    node->previous=NULL;
    head=node;
    tail=node;
     
    node=new Node();
    
    


}