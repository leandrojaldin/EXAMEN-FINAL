#ifndef EVENT_MANAGER_H
#define EVENT_MANAGER_H

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

map<int, vector<string>>mapa1;

void pausar();
void agregarEvento(int id, string fecha, string nombreEvento);
void eliminarEvento(string fecha, string evento);
void buscarEventoConFecha(string fecha,string evento);
void imprimir();

string obtenerPrimeraPalabra(string str);
string eliminarPrimeraPalabra(string cadena);
string obtenerLafecha(string cadena);

#endif // EVENT_MANAGER
