#ifndef EXAMEN_LEANDRO_H
#define  EXAMEN_LEANDRO_H

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void pausar();
void agregarEvento(Int id, string fecha, string nombreEvento);
void eliminarEvento(string fecha, string evento);
void imprimir();

string obtenerPrimeraPalabra (string str);
string eliminarPrimeraPalabra(string cadena);
string obtenerFecha(string cadena);

#endif 