#include <iostream>
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")
using namespace std;
int main() {
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        cerr << "Failed to initialize Winsock"<<endl;
        return 1;
    }
    SOCKET serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == INVALID_SOCKET) {
        cerr << "Failed to create socket"<<endl;
        WSACleanup();
        return 1;
    }
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = INADDR_ANY;
    serverAddress.sin_port = htons(54321);
    if (bind(serverSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) == SOCKET_ERROR) {
        cerr << "Bind failed"<<endl;
        closesocket(serverSocket);
        WSACleanup();
        return 1;
    }
    if (listen(serverSocket, SOMAXCONN) == SOCKET_ERROR) {
        cerr << "Listen failed" <<endl;
        closesocket(serverSocket);
        WSACleanup();
        return 1;
    }
    cout << "Server listening on port 54321..."<<endl;
    while (true) {
        SOCKET clientSocket = accept(serverSocket, nullptr, nullptr);
        if (clientSocket == INVALID_SOCKET) {
            cerr << "Accept failed" <<endl;
            closesocket(serverSocket);
            WSACleanup();
            return 1;
        }
        char buffer[1024];
        recv(clientSocket, buffer, sizeof(buffer), 0);
        cout << "Received request:\n" << buffer<<endl;
        const char* response = "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\nHello from CPP server";
        send(clientSocket, response, strlen(response), 0);
        closesocket(clientSocket);
    }
    closesocket(serverSocket);
    WSACleanup();
    return 0;
}
