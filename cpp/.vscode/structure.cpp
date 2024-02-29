#include<iostream>
#include<string>
using namespace std;
struct employee
{
    int emp_id;
    string emp_name;
    string emp_department;
    float emp_salary;
};
int main()
{
    struct employee empl1;
    struct employee empl2;
    empl1.emp_id=999;
    empl1.emp_name="Haswanth";
    empl1.emp_department="System Engineer";
    empl1.emp_salary=846787.33;
    empl2.emp_id=999;
    empl2.emp_name="Haswanth";
    empl2.emp_department="System Engineer";
    empl2.emp_salary=846787.33;
    cout<<"The following details of Employee 1:"<<endl;
    cout<<"Employee Id:"<<empl1.emp_id<<endl;
    cout<<"Employee Name:"<<empl1.emp_name<<endl;
    cout<<"Employee Department:"<<empl1.emp_department<<endl;
    cout<<"Employee Salary:"<<empl1.emp_salary<<endl;
    cout<<"The following details of Employee 2:"<<endl;
    cout<<"Employee Id:"<<empl2.emp_id<<endl;
    cout<<"Employee Name:"<<empl2.emp_name<<endl;
    cout<<"Employee Department:"<<empl2.emp_department<<endl;
    cout<<"Employee Salary:"<<empl2.emp_salary<<endl;
    cout<<"The following size of structure is:"<<sizeof(employee)<<" "<<"BYTES"<<endl;
    return 0;
}