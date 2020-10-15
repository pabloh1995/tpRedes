#include <iostream>
#include <winsock2.h>

using namespace std;

class Cliente{
public:
    WSADATA WSAData;
    SOCKET servidor;
    SOCKADDR_IN addr;
    char buffer[1024];
    Cliente()
    {
        cout<<"Conectando al servidor..."<<endl<<endl;
        WSAStartup(MAKEWORD(2,0), &WSAData);
        servidor = socket(AF_INET, SOCK_STREAM, 0);
        addr.sin_addr.s_addr = inet_addr("?"); // borren el ? y pongan su direccion IPv4
        addr.sin_family = AF_INET;
        addr.sin_port = htons(5555);
        connect(servidor, (SOCKADDR *)&addr, sizeof(addr));
        cout << "Conectado al Servidor!" << endl;
    }
    void Enviar()
    {
        cout<<"Escribe el mensaje a enviar: ";
        cin>>this->buffer;
        send(servidor, buffer, sizeof(buffer), 0);
        memset(buffer, 0, sizeof(buffer));
        cout << "Mensaje enviado!" << endl;
    }
    void Recibir()
    {
        recv(servidor, buffer, sizeof(buffer), 0);
        cout << "El servidor dice: " << buffer << endl;
        memset(buffer, 0, sizeof(buffer));
    }
    void CerrarSocket()
    {
       closesocket(servidor);
       WSACleanup();
       cout << "Socket cerrado." << endl << endl;
    }
};

int main()
{
    Cliente *Cli = new Cliente();
    while(true)
    {
        Cli->Enviar();
        Cli->Recibir();
    }
}
