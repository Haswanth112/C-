#include<iostream>
#include<list>
using namespace std;
int main()
{
	//Inserting the Elements to List
	list<int> mylist;
	mylist.push_back(111);
	mylist.push_front(110);
	mylist.push_back(999);
	for(auto i=mylist.begin();i!=mylist.end();i++)
	{
		cout<<*i<<endl;
	}
	//Accesing the Elements to list
	cout<<"Accessing the First Element :"<<mylist.front()<<endl;
	cout<<"Accessing the Second Element :"<<mylist.back()<<endl;
	//Removing the Elements from the list
	mylist.pop_front();
	mylist.pop_back();
	for(auto i=mylist.begin();i!=mylist.end();i++)
	{
		cout<<*i<<endl;
	}
	cout<<"How many elements in the list :"<<mylist.size()<<endl;
	

	return 0;

}
