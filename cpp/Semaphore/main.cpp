#include <iostream>
#include <thread>
#include "Semaphore.h" 
using namespace std;
Semaphore semaphore(1); 
void worker_thread(int id) {
    semaphore.wait();
    cout << "Thread " << id << " is accessing the shared resource."<<endl;
    this_thread::sleep_for(chrono::seconds(1));
    semaphore.signal();
}
int main() {
    thread threads[5]; 
    for (int i = 0; i < 5; ++i) {
        threads[i]=thread(worker_thread,i);
    }
    for (int i = 0; i < 5; ++i) {
        threads[i].join();
    }
    return 0;
}
