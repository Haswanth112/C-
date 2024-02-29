#include <iostream>
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")
#include <unistd.h>
using namespace std;
int main()
{
    pid_t child_pid = fork();
    if (child_pid == -1)
    {
        cerr << "Fork failed" << endl;
        return 1;
    }
    if (child_pid == 0)
    {
        cout << "Child process: PID = " << getpid() << ", Parent PID = " << getpid() <<endl;
    }
    else
    {
        cout << "Parent process: PID = " << getpid() << ", Child PID = " << child_pid << endl;
    }
    return 0;
}
