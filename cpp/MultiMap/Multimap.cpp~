#include<iostream>
#include<map>
using namespace std;
int main()
{
	multimap<int,string>mp;
	//Inserting the Elements
	mp.insert({1,"Haswanth"});
	mp.insert({2,"ubedulla"});
	mp.insert({3,"srimanth"});
	mp.insert({1,"Haswanth"});
	mp.insert({2,"Siva"});
	for(auto i=mp.begin();i!=mp.end();i++)
	cout<<i->first<<" = "<<i->second<<endl;
	//Using the size function
	cout<<"How many elements contains in Multimap:"<<mp.size()<<endl;
	//Using emplace function
	mp.emplace(111,"Haswanth Reddy");
	for(auto i=mp.begin();i!=mp.end();i++)
		cout<<i->first<<" = "<<i->second<<endl;
	//Using the Erase function
	mp.erase(2);
	for(auto i=mp.begin();i!=mp.end();i++)
		cout<<i->first<<" = "<<i->second<<endl;
	//Using the Empty function
	cout<<"Checking whether the map is empty or not:"<<mp.empty()<<endl;




	return 0;
}
