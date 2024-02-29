#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex carMutex;
void DriveCar(string DriverName){
    lock_guard<mutex>carLock(carMutex);
    cout<<DriverName<<" "<<"is driving"<<endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout<<DriverName<<" "<<"is completed the driving"<<endl;
}
int  main()
{
    thread t1(DriveCar,"Haswanth");
    thread t2(DriveCar,"Ubedulla");
    t1.join();
    t2.join();

}