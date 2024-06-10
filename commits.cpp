#include<iostream>
#include <string.h>
#include <conio.h> //getch()
#include <vector>
#include <map>

using namespace std;
map<int, vector<string> > mapa1;


//pendiente void pausar
void pausar(){
    cout<<"Precione Enter para pausar....";
    getch();
    system("cls");
}
/*
funcion agregar evento
nueva fceha y vento: Add 2021-10-05 cumple   
id 1: 2021-10-05 bautizo
id 2: 2020-10-15 graduacion 
id 3: 2019-05-26 reunion 
inicamos en false porque uasumimos que no hay igual de fecha y evento
for(itera sobre cada uno desde el principi hasa el final)
if(comprubea entrando a las corrdendas cero y uno del vector cero= fecha uno= evento)


*/
void agregarEvento(Int id, string fecha, string nombreEvento){
    bool bandera = false;
    for(auto i = mapa1.begin(); i != mapa1.end; ++i){
        //en el fi que vemos accderemos a la fecha y nombre del evento atra vez de la posicion
        if(i -> second[0] == fecha && i-> second[1] == nombreEvento){
            bandera = true;
            break;
        }
    }
    if(!bandera)
        mapa1[id] = {fecha, nombreEvento};
}


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

string obtenerFecha(string cadena){
    string abc ="1234567890+-";
    while(0 < cadena.size() && abc.find(cadena[0]) == string::npos){
        cadena.erase(0,1);
    }
    int pos = cadena.find(' ');
    if(pos == string::npos){
        return cadena;
    }
    return cadena.substr(0,pos);
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

        opcion = eliminarPrimeraPalabra (opcion);

        fechas = obtenerFecha (opcion);

    } 



    return 0;
}