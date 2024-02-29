#include <iostream>
#include <queue>
using namespace std;
int main() {
    std::queue<int> myQueue;
    cout<<"Pushing elements into the queue"<<endl;
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    cout << "Size of the queue: " << myQueue.size() << endl;
    cout<<"Accessing the front and back elements of the queue"<<endl;
    cout << "Front element of the queue: " << myQueue.front() << endl;
    cout << "Back element of the queue: " << myQueue.back() << endl;
    cout<<"Checking if the queue is empty"<<endl;
    if (myQueue.empty()) {
        cout << "Queue is empty" <<endl;
    } else {
        cout << "Queue is not empty" <<endl;
    }
    cout<<"Popping elements from the queue"<<endl;
    myQueue.pop();
    cout << "Size of the modified queue: " << myQueue.size() << endl;
    return 0;
}
