#include <iostream>
#include "MyHttpMethods.h"
using namespace std;
int main() {
    MyHttpMethods http;
    int choice;
    string url, postData;
    while (true) {
        cout << "Choose an HTTP method:\n";
        cout << "1. GET\n";
        cout << "2. POST\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: 
                cout << "Enter the URL for the GET request: ";
                cin >> url;
                cout << "GET Response:\n" << http.get(url) << endl;
                break;
            case 2: 
                cout << "Enter the URL for the POST request: ";
                cin >> url;
                cout << "Enter the POST data in JSON format: ";
                cin >> postData;
                cout << "POST Response:\n" << http.post(url, postData) << endl;
                break;
            case 3: 
                cout << "Exiting program...\n";
                return 0;
            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    }
    return 0;
}