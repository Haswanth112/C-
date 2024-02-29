#ifndef SEMAPHORE_H
#define SEMAPHORE_H
#include <mutex>
#include <condition_variable>
using namespace std;
class Semaphore {
public:
    Semaphore(int count = 1) : count_(count) {}
    void wait() {
        unique_lock<mutex> lock(mutex_);
        while (count_ <= 0) {
            condition_.wait(lock);
        }
        count_--;
    }
    void signal() {
        lock_guard<mutex> lock(mutex_);
        count_++;
        condition_.notify_one();
    }
private:
    int count_;
    mutex mutex_;
    condition_variable condition_;
};
#endif 
