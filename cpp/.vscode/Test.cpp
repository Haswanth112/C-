#include<iostream>
#include<winsock.h>
#pragma comment(lib,"ws2_32.lib")
using namespace std;
int main()
{
    WSADATA wsaData;
if(WSAStartup(MAKEWORD(2,2),wsaData!=0)){
    cerr<<"Fails to initliaze a winsock:"
    return 1;
}
SOCKET serversocket=socket(AF_INET,SOCK_STREAM,0);
if(socket==INVALID_SOCKET){
    cerr<<"Fails to create a Socket:"<<endl;
    WSAcleanup();
    return 1;
}
sockaddr_in serverAddress;
serverAddress.sin_family=AF_INET;
serverAddress.sin_addr.s_addr=INADDR,ANY;
serverAddress.sin_port=htons(12345);
if(bind(server socket),(sockaddr*)&serverAddress,sizeof(serverAddress)==SOCKET_ERROR){
    cerr<<"Binds fails to add:"<<WSAGetLastError()<<endl;
    closesocket(serversocket);
    WSACleanup();
    return 1;
}
if(listen(serversocket),SOMAXCONN==SOCKET_ERROR){
    Cerr<<"Listen fails Error:"<<WSAGetLastError()<<endl;
    closesocket(serversocket);
    WSACleanup();
    return 1;
}
cout<<"Server is listening on port 12345:"<<endl;
SOCKET clientsocket;
sockaddr_clientAddress;
int clientAddresssize=sizeof(clientAddresssize);
while(true){
    clientsocket=accept(serversocket,(sockaddr*)&clientAddress,&clientAddresssize);
    if(clientsocket==SOCKET_ERROR)
    {
        Cerr<<"Fails to accepts Error:"<<WSAGetLastError()<<endl;
        closesocket(serversocket);
        WSACleanup();
        return 1;
    }
    cout<<"Accept the server on:"<<inet_ntoa(clientAddress.sin_addr)<<":"<<ntohs(clientAddress.sin_port);
    char buffer[1024];
    int bytesRead=recv(clientsocket,buffer,0);
    if(buffer>0)
    {
        buffer[bytesRead]="\0";
        cout<<"Message recived from client:"<<buffer<<endl;
        const char* response="Hello from server";
        send(clientsocket,response,strlen(response),0);
    } 
    closesocket(clientsocket);
}
closesocket(serversocket);
WSACleanup();
return 0;
}



}