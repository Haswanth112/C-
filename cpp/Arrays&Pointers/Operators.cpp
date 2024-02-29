#include<iostream>
using namespace std;
main(){
int a=10,b=5;
//Arthmetic Operators
cout<<"Addition :"<<a+b<<endl;
cout<<"Subtraction :"<<a-b<<endl;
cout<<"Multiplication :"<<a*b<<endl;
cout<<"Division :"<<a/b<<endl;
cout<<"Modulo :"<<a%b<<endl;
cout<<"***Arthmetic Operators ***:"<<endl;
//Assignment Operators
int num=3;
cout<<" C is assigned :"<<num<<endl;
num+=2;
cout<<" C is assigned :"<<num<<endl;
num-=2;
cout<<" C is assigned :"<<num<<endl;
num*=2;
cout<<"C is assigned :"<<num<<endl;
num/=2;
cout<<"C is assigned :"<<num<<endl;
num%=2;
cout<<"C is assigned :"<<num<<endl;
num&=2;
cout<<"C is assigned :"<<num<<endl;
num|=2;
cout<<"C is assigned :"<<num<<endl;
num^=2;
cout<<"C is assigned :"<<num<<endl;
num>>=2;
cout<<"C is assigned :"<<num<<endl;
num<<=2;
cout<<"C is assigned :"<<num<<endl;
cout<<"***Assignment Operators ***:"<<endl;
//comparison operators
int x=5;
int y=3;
cout<<"Both x are y equal :"<<(x==y)<<endl;
cout<<"x is not equal to y :"<<(x!=y)<<endl;
cout<<"x is Greater than y:"<<(x>y)<<endl;
cout<<"x is less than y :"<<(x<y)<<endl;
cout<<"x is Greater than or equal to y:"<<(x>=y)<<endl;
cout<<"x is Less than or equal to y:"<<(x<=y)<<endl;
cout<<"*** Comparison Operators *** :"<<endl;
//Logical Operators
int o=5;
int p=8;
cout<<"o is less than p and p is greater than o:"<<(o && p)<<endl;
cout<<"o is greater than p and p is less than o :"<<(o ||p)<<endl;
cout<<"o is not equal to p:"<<(!p)<<endl;
cout<<"*** Logical Operators ***:"<<endl;
//Bitwise Operators
int q=4;
int r=3;
cout<<"The q and r performs AND Operation:"<<(q&r)<<endl;
cout<<"The q and r performs OR Operation:"<<(q|r)<<endl;
cout<<"The q and r performs XOR Operation:"<<(q^r)<<endl;
cout<<"The q and r performs NOT Operation:"<<(~r)<<endl;
cout<<"The q and r performs left shift Operation:"<<(q<<r)<<endl;
cout<<"The q and r performs right shift Operation:"<<(q>>r)<<endl;
cout<<"***Bitwise Operations ***:"<<endl;
//Increment and Decrement Operations
int i=5;
cout<<"The value before increment is:"<<i<<endl;
i++;
cout<<"The value after increment is :"<<i<<endl;
cout<<"***Increment and Decrement Operations***:"<<endl;
//Precedence and Order of Evaluation Operation
    int a1 = 5, b1 = 3, c1 = 2;
    int result = a1 + b1* c1;  
    cout << "Result: " << result << endl;
    bool condition = (a1 > b1) && (b1 < c1);  
    cout << "Condition: " << condition << endl;
    int x1 = 5, y1 = 3, z1 = 2;
    int expression = x1 + y1 * z1;
    cout << "Expression: " << expression << endl;
    cout<<"***Precedence and Order of Evaluation Operation :"<<endl;
}
    






