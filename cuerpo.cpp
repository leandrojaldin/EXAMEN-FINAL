#include "event_manager.h"

void pausar(){
    cout<<"\nIngrese Enter para continuar: ";
    cin.ignore();  // ignoramos cualquier entrada pendiente
    cin.get(); // esperamos a que se precione enter 
}
    
void agregarEvento(int id, string fecha, string nombreEvento){ // para esta funcion necesitares map y vector
    bool bandera = false; // determina si ya hay un evento con la misma fecha
    for(auto i = mapa1.begin(); i != mapa1.end(); ++i){
        if(i ->second[0] == fecha && i ->second[1] == nombreEvento){ // debe seguir iterando mientras que i no haya alcanzado el final del contenedor
            bandera = true;  //indica que se encontro un evento con la misma fecha y nombre 
            break;
        }
    }
    if(!bandera){    //verifica si la variable bandera es falso 
        mapa1[id] = {fecha, nombreEvento};   //asigan el nuevo elemnto al mapa
        cout<<"Evento agregado con exito";
    }else{
        cout<<"Ya hay un evento con la misma fecha y nombre";
    }
}

void eliminarEvento(string fecha, string evento){
    bool bandera = false;
    for(auto i = mapa1.begin(); i != mapa1.end(); ++i){ //begin apunto al primer elemento del mapa 1 // i != end continua mientras que i no halla alcanzado el final del mapa 
        if(i -> second[0] == fecha && i -> second [1] == evento){ // accede a los elementos del vector 
            mapa1.erase(i);
            cout<<"Se elimino correctamente\n";
            bandera = true;
            break;
        }
    }if(!bandera){
        cout<<"Evento no encontrado\n";
    }

}

void buscarEventoConFecha(string fecha){
    for(auto i = mapa1.begin(); i != mapa1.end(); ++i){
        if(i -> second[0] == fecha){
            cout<<i -> second[0]<< "|" << i -> second[1]<<"\n";
        }
    }
}

void imprimir() {
    if(mapa1.empty()){
        cout<<"The sistem its empty";
    }else{
        cout<<"Imprimiendo eventos:\n\n";
        //usaremos un multimap para ordenarlo automaticamnete la fecha y el evento
        multimap<string, string> eventosOrdenados;
        for(const auto &evento : mapa1){
            eventosOrdenados.insert(make_pair(evento.second[0], evento.second[1]));
        }
        //imprimir eventos ordenados
        for(const auto &evento : eventosOrdenados){
            cout<<evento.first<<" | "<<evento.second<<"\n";
        }
    }
}

string obtenerPrimeraPalabra(string str){
    string abc="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    while(0 < str.size() && abc.find(str[0]) == string::npos){
        str.erase(0,1);
    }
    int pos = str.find(' ');
    if(pos == string::npos){   // npos significa no encontrado
       return str;
    } 
    return str.substr(0, pos); // devuelve la palbara hasta el primer espacio 
}                              // detecta el comando utilizado

string eliminarPrimeraPalabra(string cadena) {
    size_t pos = cadena.find(' ');
    if (pos != string::npos) {
        cadena = cadena.substr(pos + 1);
    } else {
        cadena = "";
    }
    return cadena;
}

string obtenerLafecha(string cadena){
    string abc="1234567890+-";
    while(0 < cadena.size() && abc.find(cadena[0]) == string::npos){
        cadena.erase(0,1);
    }
    int pos = cadena.find(' ');
    if(pos == string::npos){
        return cadena;
    }
    return cadena.substr(0, pos);
}
