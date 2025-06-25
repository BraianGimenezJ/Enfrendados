#include <iostream>
#include <ctime>
using namespace std;

void MostrarTitulo();
void MostrarMenu (string& jugador1, string& jugador2);
void ComienzaPartidajugador1(string& jugador1, string& jugador2);
int TirarDado6caras();
int TirarDado12caras();


int main (){

 srand(time(nullptr));
 string jugador1;
 string jugador2;


 MostrarTitulo();

 MostrarMenu(jugador1, jugador2);

 ComienzaPartidajugador1(jugador1, jugador2);


  return 0;
}
