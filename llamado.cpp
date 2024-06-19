#include "cuerpo.cpp"
int main(){
    string opcion, comando, evento, fechas;
    int identificadorUnico = 1;
    do{
        cout<<"\t\t\t\t   Registro de eventos   \t\t\t\t \n\n";
        cout<<"Para agregar un nuevo evento se uda el comando: Add\n\n";
        cout<<"para eliminar evento se usa el comando: Del \n\n";
        cout<<"Para eliminar todos los eventos de una fecha especifica se usa el comando: Del \n\n";
        cout<<"Para buscar un evento con una fecha en especifico se usa el comando: Find \n\n";
        cout<<"Para imprimir todos los eventos se usa el comando: Print\n\n";
        cout<<"Para salir se usa el comando salir \n\n";
        cout<<"Escriba su opcion: ";
        cout<<"\n";
        getline(cin,opcion);
        cout<<"\n";

        //opcion = Add 1212-12-12 cumple
        comando = obtenerPrimeraPalabra(opcion); //para ver que comando utiliza
        // comando = Add
        opcion = eliminarPrimeraPalabra(opcion); 
        // opcion = 1212-12-12 cumple
        fechas = obtenerLafecha(opcion);  //para obtener la fecha;
        // fechas = 1212-12-12
        opcion = eliminarPrimeraPalabra(opcion);
        // opcion = cumple
        evento = obtenerPrimeraPalabra(opcion);  //para obtener el nombre del evento
        // evento = cumple 

        if(comando == "Add"){
            agregarEvento(identificadorUnico, fechas, evento);
            identificadorUnico +=  1;
        
        }else if(comando == "Del"){
            eliminarEvento(fechas,evento);
        }else if(comando == "Print"){
            imprimir();
        }else if(comando == "Find"){
            buscarEventoConFecha(fechas);
        }else{
            cout<<"Comando Incorrecto";
        }
        pausar();

    }while(comando != "salir");


    return 0;
}
