#include <iostream>
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")
using namespace std;
int main() {
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0){
        cerr << "Failed to initialize Winsock"<< endl;
        return 1;
    }
    SOCKET stdinSocket = _fileno(stdin);
    fd_set readfds;
    FD_ZERO(&readfds);
    FD_SET(stdinSocket, &readfds); 
    struct timeval timeout;
    timeout.tv_sec = 5;
    timeout.tv_usec = 0,;
    cout << "Waiting for input" << endl;
int result = select(0, &readfds, NULL, NULL, &timeout);
if (result == SOCKET_ERROR) { 
    cerr << "Select failed: " << WSAGetLastError() << endl;
} else if (result == 0) {
    cout << "Timeout occurred" << endl;
} else {
        if (FD_ISSET(stdinSocket, &readfds)) {
            cout << "Input is ready" << endl;
            char buffer[256];
            fgets(buffer, sizeof(buffer), stdin);
            cout << "You entered: " << buffer << endl;
        }
    }
    WSACleanup();
    return 0;
}
