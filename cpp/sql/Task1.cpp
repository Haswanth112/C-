#include <iostream>
#include <mysql_connection.h>
#include <mysql_driver.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
using namespace std;
int main() {
    sql::Driver *driver;
    sql::Connection *con;
    sql::Statement *stmt;
    sql::ResultSet *res;
    try {
        driver = get_driver_instance();
        con = driver->connect("localhost", "root", "sivareddy@143");
        con->setSchema("students");
        stmt = con->createStatement();
        res = stmt->executeQuery("SELECT * FROM students"); 
        while (res->next()) {
            cout << "student_id " << res->getString(1) << "student_name " << res->getString(2) <<"student_email_id"<<res->getString(3)<<"student_department"<<res->getString(4)<< endl;

        }
        delete res;
        delete stmt;
        delete con;
    } catch (sql::SQLException &e) {
        cout << "SQLException: " << e.what() << endl;
    }
    return 0;
}
