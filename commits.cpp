#include<iostream>
#include <string>

using namespace std;





int main(){
    string opcion, comando, evento ,fecha;

    do{
        cout<<"\t\t\t\t   Registro de eventos   \t\t\t\t \n\n";
        cout<<" Para agregar un evento usa el comando: Add \n\n";
        cout<<" Para eliminar un evento usa el comando: Del \n\n";
        cout<<" Para eliminar todos los eventos de una fecha en especifico usa el comando:  Del \n\n";
        cout<<" Para buscar un evento con fecha en especifico usa el comando: Find \n\n";
        cout<<" Para imprimir todos los eventos usa el comando: Print \n\n";
        cout<<" Para salir usa el comando: Salir \n\n";
        cout<<" Escriba su opcion: ";
        getline(cin, opcion); //para leer toda la linea
        cout<<"\n";

        comando = obtenerPrimeraPalabra (opcion);

    } 


    return 0;
}