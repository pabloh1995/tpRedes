#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
int menu();
int altaServicios();
int registroActividades();
int cerrarSecion();
int reservarAsiento();
int liverarAsiento();
int elegirServicio();
void gestionPasaje();
int main(){
    int accion;

    cout<< "Elija una Accion:\n 1 Menu\n 2 Salir\n"<< endl;
    cin>>accion;
    while(accion!=2){
    switch(accion){
        case 1:
        menu();
        break;
        case 2:
            return 0;
        break;
        default:
            cout<< "Elija una Accion:\n 1 Menu\n 2 Salir\n"<< endl;
            cin>>accion;
        break;
    }}
    return 0;
}

int menu()
{
    int accion;

    cout << "Bienvenido elija su siguiente accion:\n 1 Alta Servicios\n 2 Gestionar Pasajes\n 3 Ver Registro Acividades\n 4 Cerrar Seccion\n" << endl;
    cin>>accion;
    while(accion!=4){
    switch(accion){
        case 1:
            altaServicios();
        break;
        case 2:
            gestionPasaje();
        break;
        case 3:
            registroActividades();
        break;
        case 4:
            cerrarSecion();
        break;
        default:
            cout << "Bienvenido elija su siguiente accion:\n 1 Alta Servicios\n 2 Gestionar Pasajes\n 3 Ver Registro Acividades\n 4 Cerrar Seccion\n" << endl;
            cin>>accion;
        break;
    }}
    return 0;
}

int altaServicios(){
    int opcion, dd, mm, aa, flag, a;
    char origen[20], turno[20];
    aa=0;
            opcion=0;
        while(opcion>2||opcion<1){
            cout<< "Seleccione Origen:\n 1 Buenos Aires\n 2 Mar del Plata" <<endl;
            cin>> opcion;
            if (opcion>2 || opcion<1){
                cout<< "Error Opcion incorrecta vuelva a intentar" <<endl;
            }

            if (opcion==1){
                strcpy(origen, "Buenos Aires");
            }
            if( opcion==2){
                strcpy(origen, "Mar del Plata");
                }
        }
        aa=1; mm=0; dd=0;
            while (aa<2020){
            cout<< "Fecha? Ingrese Anio:\n" << endl;
            cin>> flag;
            if(flag<2020){
                cout<< "Error Anio incorrecto vuelva a intentar" <<endl;
            }
            if (flag>2019){
                    aa = flag;
            }}
            while (mm<1 || mm>12){
            cout<< "Ingrese Mes:\n" << endl;
            cin>> flag;
            if(flag<1 || flag>12){
                cout<< "Error Mes incorrecto vuelva a intentar" <<endl;
            }
            if (flag>0 && flag <13){
                mm = flag;
            }
            }
            while (dd<1 || dd>31){
                cout<< "Ingrese Dia:\n" << endl;
                cin>> flag;
                if(flag<1 || flag>31){
                cout<< "Error Dia incorrecto vuelva a intentar" <<endl;
            }
            if (flag>0 && flag <32){
                dd = flag;
            }
            }
            opcion=0;
            while(opcion>3 || opcion<1){
            cout<< "Ingrese Turno:\n 1 Manana\n 2 Tarde\n 3 Noche\n" <<endl;
            cin>> opcion;
            if(opcion<1 || opcion>3){
                cout<< "Error Turno incorrecto vuelva a intentar" <<endl;
            }
            if (opcion=1){
                strcpy(turno,"Manana");
            }
            if (opcion=2){
                strcpy(turno,"Tarde");
            }
            if (opcion=3){
                strcpy(turno,"Noche");
            }
            }
            //int reversarAsiento(char origen,int  aa, mm, dd, char turno);

            return 0;

}

/**
    int reservarAsiento(char origen,int  aa, mm, dd, char turno){
    return 0;
    }
**/

void gestionPasaje(){
    int accion;
            cout << "Elija su siguiente accion:\n 1 Reservar Asiento\n 2 Liverar Asiento\n 3 Elegir otro servicio\n 4 Volver al menu anterior\n" << endl;
            cin>>accion;
    do {

    switch(accion){
        case 1:
            reservarAsiento();
        break;
        case 2:
            liverarAsiento();
        break;
        case 3:
            elegirServicio();
        break;
        case 4:
            menu();
        break;
        default:
                cout << "ACCION INVALIDA \n Elija su siguiente accion:\n 1 Reservar Asiento\n 2 Liverar Asiento\n 3 Elegir otro servicio\n 4 Volver al menu anterior\n" << endl;
                cin>>accion;
        break;
    }
    }while(accion!=4);

}

int reservarAsiento(){
    return 0;
}

int liverarAsiento(){
    return 0;
}

int elegirServicio(){
        int accion, opcion, dd, mm, aa, flag, a, condicion;
        char origen[20], turno[20];
        cout<< "Desea Filtrar por:\n 1 Origen\n 2 Fecha\n 3 Turno"<<endl;
        cin>>accion;
        condicion=1;
        while(condicion==1){
            switch(accion){
            case 1:
        while(opcion>2||opcion<1){
            cout<< "Seleccione Origen:\n 1 Buenos Aires\n 2 Mar del Plata" <<endl;
            cin>> opcion;
            if (opcion>2 || opcion<1){
                cout<< "ErrorOpcion incorrecta vuelva a intentar" <<endl;
            }

            if (opcion==1){
                strcpy(origen, "Buenos Aires");
            }
            if( opcion==2){
                strcpy(origen, "Mar del Plata");
            }
        }
            break;
            case 2:
                aa=1; mm=0; dd=0;
            while (aa<2020){
            cout<< "Fecha? Ingrese Anio:\n" << endl;
            cin>> flag;
            if(flag<2020){
                cout<< "Error Anio incorrecto vuelva a intentar" <<endl;
            }
            if (flag>2019){
                    aa = flag;
            }}
            while (flag<1 || flag>12){
            cout<< "Ingrese Mes:\n" << endl;
            cin>> flag;
            if(flag<1 || flag>12){
                cout<< "Error Mes incorrecto vuelva a intentar" <<endl;
            }
            if (flag>0 && flag <13){
                mm = flag;
            }
            }
            while (flag<1 || flag>31){
                cout<< "Ingrese Dia:\n" << endl;
                cin>> flag;
                if(flag<1 || flag>31){
                cout<< "Error Dia incorrecto vuelva a intentar" <<endl;
            }
            if (flag>0 && flag <32){
                dd = flag;
            }
            }

            break;
            case 3:
                opcion=0;
            while(opcion>3 || opcion<1){
            cout<< "Ingrese Turno:\n 1 Manana\n 2 Tarde\n 3 Noche\n" <<endl;
            cin>> opcion;
            if(opcion<1 || opcion>3){
                cout<< "Error Turno incorrecto vuelva a intentar" <<endl;
            }
            if (opcion==1){
                strcpy(turno,"Manana");

            }
            if (opcion==2){
                strcpy(turno,"Tarde");

            }
            if (opcion==3){
                strcpy(turno,"Noche");

            }
            }
            case 4:
                    //int reversarAsiento(char origen,int  aa, mm, dd, char turno);
                    condicion=0;
            break;
            }
            cout<< "Desea Filtrar ademas por:\n 1 Origen\n 2 Fecha\n 3 Turno\n 4 No\n"<<endl;
            cin>>accion;
            }
            //int reversarAsiento(char origen,int  aa, mm, dd, char turno);
            return 0;
}
int registroActividades(){
    return 0;
}

int cerrarSecion(){
    return 0;
}
