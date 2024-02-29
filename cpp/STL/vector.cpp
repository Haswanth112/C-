#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>myvector;
	for(int i=0;i<=5;i++)
		myvector.push_back(i);
	cout<<"output of begin and end:"<<endl;
	for(auto i=myvector.begin();i!=myvector.end();i++)
		cout<<*i<<endl;
         cout<<"output of cbegin and cend:"<<endl;
	for(auto i=myvector.cbegin();i!=myvector.cend();i++)
		cout<<*i<<endl;
	cout<<"Reversing the Elements :"<<endl;
	for(auto i=myvector.rbegin();i!=myvector.rend();i++)
		cout<<*i<<endl;
	cout<<"Adding the elements:"<<endl;
	myvector.push_back(6);
	myvector.insert(myvector.begin()+1,999);
	for(auto i=myvector.begin();i!=myvector.end();i++)
		cout<<*i<<endl;
	myvector.insert(myvector.begin()+4,888);
	for(auto i=myvector.begin();i!=myvector.end();i++)
		cout<<*i<<endl;
	cout<<"Deleting the last Element:"<<endl;
	myvector.pop_back();
	for(auto i=myvector.begin();i!=myvector.end();i++)
		cout<<*i<<endl;
	cout<<"max size of vector:"<<myvector.max_size()<<endl;
	cout<<"Size of the vector:"<<myvector.size()<<endl;
	cout<<"Checking the vector Empty or Not:"<<myvector.empty()<<endl;
	cout<<"Accessing first element in the vector:"<<myvector.front()<<endl;
	cout<<"Accessing the last element in the vector:"<<myvector.back()<<endl;

	return 0;
}



