#include <iostream>
#include <ctime>
using namespace std;

void MostrarTitulo();
void MostrarMenu (string& jugador1, string& jugador2);
int TirarDado6caras();


int main (){

 srand(time(nullptr));
 string nombreJugador1;
 string nombreJugador2;

 MostrarTitulo();

 MostrarMenu(nombreJugador1, nombreJugador2);


  return 0;
}
