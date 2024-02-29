#include<iostream>
using namespace std;
class shape
{
public:
virtual void tellNoOfSides(){

    
}
};
class square : public shape
{
    public:
    void tellNoOfSides()
    {
        cout<<"The number of sides is four :"<<endl;
    }
};
int main()
{
    square s;
    s.tellNoOfSides();
}