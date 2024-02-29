#include <iostream>
#include <map>
#include <string>
using namespace std;
class Contact {
public:
    string name;
    string phoneNumber;
    string email;
    Contact(const string& n,const string& phone,const string& e): name(n), phoneNumber(phone), email(e) {}
    Contact() = default;
};
void addContact(multimap<string,Contact>& addressBook) {
    Contact newContact;
    cout<< "Enter Name: ";
    cin>>newContact.name;
    cout << "Enter Phone Number: ";
    cin >> newContact.phoneNumber;
    cout << "Enter Email: ";
    cin >> newContact.email;
    addressBook.insert(make_pair(newContact.name, newContact));
    cout << "Contact added successfully!"<<endl;
}
void searchContact(const multimap<string,Contact>& addressBook) {
    string searchName;
    cout << "Enter Name to Search: ";
    cin >> searchName;
    auto range = addressBook.equal_range(searchName);
    if (range.first != range.second) {
        cout << "Contacts found with name " << searchName << ":"<<endl;
        for (auto it = range.first; it != range.second; ++it) {
            cout << "Name: " << it->second.name << "\tPhone: " << it->second.phoneNumber << "\tEmail: " << it->second.email<<endl;
        }
    } else {
        cout << "Contact not found."<<endl;
    }
}
void displayAllContacts(const multimap<string, Contact>& addressBook) {
    cout << "All Contacts"<<endl;
    for (const auto& entry : addressBook) {
        cout << "Name: " << entry.second.name << "\tPhone: " << entry.second.phoneNumber << "\tEmail: " << entry.second.email<<endl;
    }
}
int main() {
    multimap<string, Contact> addressBook;
    int choice;
    while(true)
    {
        cout << "1.Add a new contact :"<<endl;
        cout << "2. Search for a contact by name :"<<endl;
        cout << "3. Display all contacts :"<<endl;
        cout << "4. Exit :"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addContact(addressBook);
                break;
            case 2:
                searchContact(addressBook);
                break;
            case 3:
                displayAllContacts(addressBook);
                break;
            case 4:
                cout << "Exiting the program"<<endl;
                break;
            default:
                cout << "Invalid choice please try again"<<endl;
        }

    } 

    return 0;
}

