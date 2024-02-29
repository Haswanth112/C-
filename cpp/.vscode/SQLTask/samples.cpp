#include <iostream>
#include <mysql.h>
using namespace std;
int main() {
  MYSQL* conn;
  conn = mysql_init(0);
  if (conn == nullptr) {
    cerr << "mysql_init failed!" << endl;
    return 1;
  }
  conn = mysql_real_connect(conn, "localhost", "HaswanthReddy", "Haswanth@123", "db1", 3306, NULL, 0);
  if (conn) {
    // Insert data
    string insert_query = "INSERT INTO mymarketsimplifiers(e_id, e_name, e_dept, E_salary, E_xp) VALUES (777, 'Hash', 'CPP', 30000.0, '1Year')";
    int query_state = mysql_query(conn, insert_query.c_str());

    if (query_state != 0) {
      cerr << "Insert query failed: " << mysql_error(conn) << endl;
    }
    // Update data
    string update_query = "UPDATE mymarketsimplifiers SET E_salary=30000 WHERE e_id=777";
    query_state = mysql_query(conn, update_query.c_str());
    if (query_state != 0) {
      cerr << "Update query failed: " << mysql_error(conn) << endl;
    }
    // Delete data
    string delete_query = "DELETE FROM mymarketsimplifiers WHERE e_id=777";
    query_state = mysql_query(conn, delete_query.c_str());
    if (query_state != 0) {
      cerr << "Delete query failed: " << mysql_error(conn) << endl;
    }
    // Print data
    string select_query = "SELECT * FROM mymarketsimplifiers";
    query_state = mysql_query(conn, select_query.c_str());
    if (query_state == 0) {
      MYSQL_RES* result = mysql_store_result(conn);
      if (result) {
        while (MYSQL_ROW row = mysql_fetch_row(result)) {
          cout << row[0] << " " << row[1] << endl;
        }
        mysql_free_result(result);
      } else {
        cerr << "Failed to store result set: " << mysql_error(conn) << endl;
      }
    } else {
      cerr << "Select query failed: " << mysql_error(conn) << endl;
    }
  } else {
    cout << "Failed to connect to the database." << endl;
  }
  mysql_close(conn);
  return 0;
}