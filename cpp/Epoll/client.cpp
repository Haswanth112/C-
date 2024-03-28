#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>
using namespace std;
int main() {

    int client_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (client_fd == -1) {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(8080);
    if (inet_pton(AF_INET, "127.0.0.1", &server_addr.sin_addr) <= 0) {
        perror("inet_pton failed");
        exit(EXIT_FAILURE);
    }
    if (connect(client_fd, (struct sockaddr *)&server_addr, sizeof(server_addr)) == -1) {
        perror("connect failed");
        exit(EXIT_FAILURE);
    }
    cout << "Connected to server. Enter message to send (type 'exit' to quit):" << endl;
    while (true) {
        string message;
        getline(cin, message);

        if (message == "exit") {
            break;
        }
        if (send(client_fd, message.c_str(), message.length(), 0) == -1) {
            perror("send failed");
            exit(EXIT_FAILURE);
        }
        cout << "Message sent to server." << endl;
    }
    close(client_fd); 
    return 0;
}
