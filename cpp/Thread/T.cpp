#include<iostream>
#include<thread>
#include<map>
#include<string>
using namespace std;
void RefreshForeCast(map<string,int>&forecastmap){
    while(true){
    for(auto& item : forecastmap){
        item.second++;
        cout<<item.first<<"-"<<item.second<<endl;
    }
    this_thread::sleep_for(2000ms);
    }

}
int main()
{
    map<string,int>forecastmap={
        {"chennai",25},
        {"Tirupati",22},
        {"Ooty",12}

    };
    thread bgWorker(RefreshForeCast,ref(forecastmap));
    bgWorker.join();
    
    return 0;
}
