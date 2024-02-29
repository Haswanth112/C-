#ifndef MYHTTPMETHODS_H
#define MYHTTPMETHODS_H
#include <string>
class MyHttpMethods {
public:
    MyHttpMethods();
    ~MyHttpMethods();
    std::string get(const std::string& url);
    std::string post(const std::string& url, const std::string& data);
};
#endif 
