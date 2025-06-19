#include <iostream>
using namespace std;
#include "funciones.h"
#include <ctime>

void MostrarTitulo() {
    cout<<endl<<
"     _______   ____________  _______   ______  ___    ____  ____  _____"<<endl<<
"    /____ / |  // ____/ __ \/ ____/ | / / __ \/   |  / __ \/ __ \/ ___ "<<endl<<
"   / __/ /  |/ / /_  / /_/ / __/ /  |/ / / / / /| | / / / / / / /\__ \ "<<endl<<
"  / /___/ /|  / __/ / _  _/ /___/ /|  / /_/ / ___ |/ /_/ / /_/ /___/ /"<<endl<<
" /_____/_/ |_/_/   /_/ |_/_____/_/ |_/_____/_/  |_/_____/\____//____/"<<endl<<endl;

cout<<endl<<
system ("pause");
system ("cls");
}



void MostrarMenu (string& jugador1, string& jugador2) {
   int op;

    do {
   cout << "MENÚ PRINCIPAL";
   cout << endl;
   cout << endl;
   cout << "1 - JUGAR";
   cout << endl;
   cout << endl;
   cout << "2 - ESTADÍSTICAS";
   cout << endl;
   cout << endl;
   cout << "3 - CRÉDITOS";
   cout << endl;
   cout << endl;
   cout << "-----------------";
   cout << endl;
   cout << endl;
   cout << "4 - SALIR";
   cout << endl;
   cout << endl;

  cin>>  op;


    switch (op) {
  case 1:
         system ("cls");
         jugador1 = PreguntoNombreJugador1();
         cout << "¡Bienvenido/a " << jugador1 << " !";
         cout << endl;
         cout << endl;

         jugador2 = PreguntoNombreJugador2();
         cout << "¡Bienvenido/a " << jugador2 << " !";
         cout << endl;
         cout << endl;
         system ("cls");


         cout << "A continuación " << jugador1 << " y " << jugador2 << " lanzarán su tiro de prueba.";

         cout << endl;
         cout << endl;

         cout << jugador1 << ": " << TirarDado6caras();
         cout << endl;
         cout << jugador2 << ": " << TirarDado6caras();
         cout << endl;
         cout << endl;

         return;
         break;

  case 2:
      cout<< "Todavia no esta configurado ";
    //  MuestroEstadisticas();
    break;

     case 3:
         cout<< "Todavia no esta configurado ";
    // Creditos();
    break;

     case 4:
         cout << "Todavia no esta configurado ";
   // SalirDelJuego();
    break;

     default:
        cout<< "Error 404, Intente de nuevo con otro numero de opcion... "<<endl;
}

}   while (op !=4);

 }

 string PreguntoNombreJugador1 (){

  string nombre;
  cout<< "Ingresar el nombre del jugador 1: "<<endl;
  cout << endl;
  cin>> nombre;
  cout << endl;
  system ("cls");

  return nombre;
}

string PreguntoNombreJugador2 (){

  string nombre;
  cout<< "Ingresar el nombre del jugador 2: "<<endl;
  cout << endl;
  cin>> nombre;
  system ("cls");

  return nombre;
}

int TirarDado6caras(){
    return rand() % 6 + 1;
}
