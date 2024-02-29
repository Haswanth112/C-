#include<iostream>
using namespace std;
int main()
{
    try{
        int age;
        cout<<"Emter your age :"<<endl;
        cin>>age;
        if (age>=18){

        cout<<"Above 18 vote is eligible :"<<age<<endl;

        
    }
    else{
        throw 999;

    }
    }
    catch(int nim){
        cout<<"Below 18 not eligible for vote :"<<nim<<endl;
    }
}