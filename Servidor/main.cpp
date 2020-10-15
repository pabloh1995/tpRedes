#include <iostream>
#include <winsock2.h>

using namespace std;

class Servidor{
public:
    WSADATA WSAData;
    SOCKET servidor, cliente;
    SOCKADDR_IN serverAddr, clientAddr;
    char buffer[1024];

    Servidor() //constructor establece la conexion con el cliente
    {
        WSAStartup(MAKEWORD(2,0), &WSAData);
        servidor = socket(AF_INET, SOCK_STREAM, 0);

        serverAddr.sin_addr.s_addr = INADDR_ANY;
        serverAddr.sin_family = AF_INET;
        serverAddr.sin_port = htons(5555);

        bind(servidor, (SOCKADDR *)&serverAddr, sizeof(serverAddr));
        listen(servidor, 0);

        cout << "Escuchando para conexiones entrantes." << endl;
        int clientAddrSize = sizeof(clientAddr);
        if((cliente = accept(servidor, (SOCKADDR *)&clientAddr, &clientAddrSize)) != INVALID_SOCKET)
        {
            cout << "Cliente conectado!" << endl;
        }
    }

    void Recibir()
    {
      recv(cliente, buffer, sizeof(buffer), 0);
      cout << "El cliente dice: " << buffer << endl;
      memset(buffer, 0, sizeof(buffer)); //resetea el arreglo buffer a 0
    }
    void Enviar()
    {
        cout<<"Escribe el mensaje a enviar: ";
        cin>>this->buffer;
        send(cliente, buffer, sizeof(buffer), 0);
        memset(buffer, 0, sizeof(buffer));
        cout << "Mensaje enviado!" << endl;
    }
    void CerrarSocket()
    {
        closesocket(cliente);
        cout << "Socket cerrado, cliente desconectado." << endl;
    }
};


int main()
{
  Servidor *Server = new Servidor();
  while(true)
  {
     Server->Recibir();
     Server->Enviar();
  }
}
