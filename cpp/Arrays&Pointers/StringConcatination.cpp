#include<iostream>
using namespace std;
main()
{
   /*string Firstname="Haswanth";
    string Lastname="Reddy";
    string Fullname=Firstname + Lastname;
    cout<<Fullname;*/
    string firstname="Haswanth";
    string Lastname="Reddy";
    string fullname=firstname.append(Lastname);
    cout<<fullname;
    return 0;
}