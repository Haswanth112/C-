#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
	map<string,int>mymap;
	mymap["Haswanth"]=1;
	mymap["Udbe"]=2;
	mymap["Sri"]=3;
	mymap["Hemanth"]=4;
	mymap["Reddy"]=5;
	for(auto i=mymap.begin();i!=mymap.end();i++)
		cout<<i->first<<" = "<<i->second<<endl;
	//Size of the Map
	cout<<"Size of a Map:"<<mymap.size()<<endl;
	//Insert the Elements to the Map
	mymap["Habeeb"]=6;
	mymap["Vedha"]=7;
	for(auto i=mymap.begin();i!=mymap.end();i++)
	{
		cout<<i->first<<" = "<<i->second<<endl;
	}
	//By using emplace function
	mymap["Virat"]=18;
	mymap["Rohit"]=48;
	mymap["Sachin"]=10;
	mymap["Gill"]=18;
	mymap["surya"]=48;
	mymap["Bumrah"]=10;
	for(auto i=mymap.begin();i!=mymap.end();i++)
		cout<<i->first<<" = "<<i->second<<endl;
	//By using Find function
	auto it=mymap.find("Gill");
	cout<<it->first<<" = "<<it->second<<endl;
	//By using count function
	cout<<mymap.count("Haswanth")<<endl;
	//By using Erase function
	mymap.erase("Haswanth");
	for(auto i=mymap.begin();i!=mymap.end();i++)
		cout<<i->first<<" = "<<i->second<<endl;


	

	return 0;
	}
