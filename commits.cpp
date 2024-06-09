#include<iostream>
#include <string>

using namespace std;

string obtenerPrimeraPalabra (string str){
    string abc = "qwertyuiopasdfghjkl  zxcvbnmQWERTYUIOPASDFGHJKL ZXCVBNM";
    while(0 < str.size() && abc.find(str[0]) == string::npos){
        str.erase(0,1); //elimina los espacios hacia la izquierda
    }
    int pos = str.find(' ');
    if(pos == string::npos){
        return str;
    }
    return str.substr(0, pos);
}

string eliminarPrimeraPalabra(string cadena){
    string abc ="qwertyuiopasdfghjklñ zxcvbnmQWERTYUIOPASDFGHJKLÑ ZXCVBNM+-";
    while(0 < cadena.size() && abc.find(cadeba[0]) == string::npos){
        cadena.erase(0,1);
    }
    int pos = cadena.find(' ')
    cadena.erase(0,pos);
    return cadena;
}


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

        comando = eliminarPrimeraPalabra (opcion);
    } 


    return 0;
}