#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
#include <ctime>
using namespace std;

void MostrarTitulo();
void MostrarMenu(string& jugador1, string& jugador2);
string PreguntoNombreJugador1();
string PreguntoNombreJugador2();
int TirarDado6caras();
int TirarDado12caras();
void ComienzaPartidajugador1(string& jugador1, string& jugador2);

#endif // FUNCIONES_H_INCLUDED
