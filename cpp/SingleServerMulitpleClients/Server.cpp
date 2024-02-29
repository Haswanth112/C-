#include<iostream>
#include<winsock2.h>
#pragma comment(lib,"ws2_32.lib")
using namespace std;
int main(){
    WSADATA wsaData;
    if(WSAStartup(MAKEWORD(2,2),&wsaData)!=0){
        cerr<<"Fails to initilaze a WinSock:"<<endl;
        return 1;
    }
    SOCKET serversocket=socket(AF_INET,SOCK_STREAM,0);
    if(serversocket==INVALID_SOCKET){
        cerr<<"Fails to create a socket:"<<endl;
        return 1;
    }
    sockaddr_in serverAddress;
    serverAddress.sin_family=AF_INET;
    serverAddress.sin_addr.s_addr=INADDR_ANY;
    serverAddress.sin_port=htons(12345);
    if(bind(serversocket,(sockaddr*)&serverAddress,sizeof(serverAddress))==SOCKET_ERROR){
     cerr<<"Fails to Binds a Socket:"<<WSAGetLastError()<<endl;
     closesocket(serversocket);
     WSACleanup();
     return 1;
}
    if(listen(serversocket,SOMAXCONN==INVALID_SOCKET)){
     closesocket(serversocket);
     cerr<<"Fails to listen:"<<WSAGetLastError()<<endl;
     WSACleanup();
    return 1;
    }
    cout<<"Server is listening on Port 1234:"<<endl;
     SOCKET clientsocket;
     sockaddr_in clientAddress;
     int clientAddresssize=sizeof(clientAddress);
     while(true){
     clientsocket=accept(serversocket,(sockaddr*)&clientAddress,&clientAddresssize);
     if(clientsocket == INVALID_SOCKET){
        cerr<<"Fails to Accept :"<<WSAGetLastError()<<endl;
        closesocket(serversocket);
        WSACleanup();
        return 1;
     }
     cout<<"Server Accepts from:"<<inet_ntoa(clientAddress.sin_addr)<<":"<<ntohs(clientAddress.sin_port)<<endl;
     char buffer[1024];
     int bytesRead=recv(clientsocket,buffer,sizeof(buffer),0);
     if(bytesRead>0){
        buffer[bytesRead]='\0';
        cout<<"Recieved message from client:"<<buffer<<endl;
        const char* response="Hello from Server:";
        send(clientsocket,response,strlen(response),0);
     }
     closesocket(clientsocket);
     }
     closesocket(serversocket);
     WSACleanup();
     return 1;
}


    

 