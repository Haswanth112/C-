#include <iostream>
#include <memory>
using namespace std;
const int MAX_PERSONS = 10;
class Person
{
protected:
    string name;
    int age;

public:
    Person(const string &name, int age) : name(name), age(age) {}
    virtual void displayInfo() const
    {
        cout << "Name:" << name << "  ""Age:" << age;
    }
    virtual ~Person()
    {
        cout << "Destructor of Person called for: " <<this -> name << endl;
    }
    string getName(){
	    return name;
    }
};
class Student : public Person
{
private:
    float grade;

public:
    Student(const string &name, int age, float grade) : Person(name, age), grade(grade) {}
    void displayInfo() const override
    {
        Person::displayInfo();
        cout << "  "<<"Grade: " << grade << endl;
    }
    ~Student()
    {
        cout << "Destructor of Student called for: " << this->name << endl;
    }
};
class Teacher : public Person
{
private:
    string subject;

public:
    Teacher(const string &name, int age, const string &subject) : Person(name, age), subject(subject) {}
    void displayInfo() const override
    {
        Person::displayInfo();
        cout << "Subject: " << subject << endl;
    }
    ~Teacher()
    {
        cout << "Destructor of Teacher called for: " << this->name << endl;
    }
};
int findPersonIndex(const unique_ptr<Person> persons[], int size, const string &name)
{
    for (int i = 0; i < size; ++i)
    {
        if (persons[i] && persons[i]->getName() == name)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    unique_ptr<Person> persons[MAX_PERSONS];
    int count = 0;
    int choice;
    while (true)
    {
        cout << "Choose an option:" << endl;
        cout << "1. Add Person:" << endl;
        cout << "2. Delete Person:" << endl;
        cout << "3. Search Person:" << endl;
        cout << "4. Display All Persons:" << endl;
        cout << "5. Exit:" << endl;
        cout << "Enter your choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            char personType;
            cout << "Enter person type (S for student, T for teacher): ";
            cin >> personType;
            string name;
            int age;
            cout << "Enter name: ";
            cin >> name;
            int index = findPersonIndex(persons, count+1, name);
            if (index == -1)
            {
                if (personType == 'S')
                {
		    int age;
		    cout<<"Enter Age: ";
		    cin>>age;
                    float grade;
                    cout << "Enter grade: ";
                    cin >> grade;
                    persons[count] = make_unique<Student>(name, age, grade);
                    count++;
                }
                else if (personType == 'T')
                {
		    int age;
		    cout<<"Enter Age: ";
		    cin>>age;
                    string subject;
                    cout << "Enter subject: ";
                    cin >> subject;
                    persons[count] = make_unique<Teacher>(name, age, subject);
                }
                else
                {
                    cout << "Invalid person type!" << endl;
                }
            }
            else
            {
                cout << "Person with the same name already exists!" << endl;
            }
        }
        break;

        case 2:
        {
            string name;
            cout << "Enter name to delete: ";
            cin >> name;
            int index = findPersonIndex(persons, count+1, name);
            if (index != -1)
            {
                persons[index].reset();
                cout << "Person deleted" << endl;
            }
            else
            {
                cout << "Person not found" << endl;
            }
        }
        break;
        case 3:
        {
            string name;
            cout << "Enter name to search: ";
            cin >> name;
            for (int i = 0; i < count+1; i++)
            {
                if(persons[i] && persons[i]->getName()==name){
                    persons[i]->displayInfo();
                    break;
                }
            }
        }break;
        case 4:{
            cout << "All Persons Information:" << endl;
            for (int i = 0; i < count+1; i++)
            {
                   if (persons[i]){
                    persons[i]->displayInfo();
                   }
            }
        }break;
        case 5:
            cout << "Exiting program" << endl;
            return 0;
            break;
        default:
            cout << "Invalid choice. Try again" << endl;
        }
    }
    return 0;
}
