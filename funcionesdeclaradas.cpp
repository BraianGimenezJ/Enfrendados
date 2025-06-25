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

   int op, primerlanzamiento1, primerlanzamiento2;

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

   cin >> op;


    switch (op) {
  case 1:
         system ("cls");
         jugador1 = PreguntoNombreJugador1();
         cout << "¡Bienvenido/a " << jugador1 << "!";
         cout << endl;
         cout << endl;

         jugador2 = PreguntoNombreJugador2();
         cout << "¡Bienvenido/a " << jugador2 << "!";
         cout << endl;
         cout << endl;

         cout << endl;
         cout << jugador1 << " lanzará su tiro de prueba." << endl;
         cout << endl;

         system ("pause");
         primerlanzamiento1 = TirarDado6caras();
         cout << endl;
         cout << jugador1 << ": " << primerlanzamiento1;
         cout << endl;
         cout << endl;
         cout << endl;
         cout << "Ahora " << jugador2 << " lanzará su tiro de prueba." << endl;
         cout << endl;
         system ("pause");

         primerlanzamiento2 = TirarDado6caras();
         cout << endl;
         cout << jugador2 << ": " << primerlanzamiento2;
         cout << endl;

          if (primerlanzamiento1 == primerlanzamiento2){
             cout << endl;
             cout << "¡EMPATE!" << endl;
             cout << endl;
             cout <<  "Se lanzarán otra vez los dados";
               do{
                cout << endl;
                cout << endl;
                cout << jugador1 << " lanzará nuevamente." << endl;
                cout << endl;
                system ("pause");
                cout << endl;
                primerlanzamiento1 = TirarDado6caras();
                cout << jugador1 << ": " << primerlanzamiento1;

                cout << endl;
                cout << endl;
                cout << "Ahora " << jugador2 << " lanzará nuevamente." << endl;
                cout << endl;
                system ("pause");
                primerlanzamiento2 = TirarDado6caras();
                cout << endl;
                cout << jugador2 << ": " << primerlanzamiento2;
                }
                while (primerlanzamiento1 == primerlanzamiento2);
                }

            if (primerlanzamiento1>primerlanzamiento2) {
                cout << endl;
                cout << endl;
                cout << endl;
                cout << "¡"<<jugador1 << " DARÁ INICIO A LA PARTIDA!" << endl;
                cout << endl;
                system ("pause");
                void ComienzaPartida();
                }

            if (primerlanzamiento1<primerlanzamiento2) {
                cout << endl;
                cout << endl;
                cout << endl;
                cout << "¡"<<jugador2 << " DARÁ INICIO A LA PARTIDA!" << endl;
                cout << endl;
                system ("pause");
                void ComienzaPartidajugador1();
                }
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
        system ("cls");
        MostrarTitulo();
        system ("cls");
   // SalirDelJuego();
    break;

     default:
        cout<< MostrarTitulo;
}

}   while (op !=4);

 }

 string PreguntoNombreJugador1 (){

  string jugador1;
  cout<< "Ingresar el nombre del jugador 1: "<<endl;
  cout << endl;
  cin>> jugador1;
  cout << endl;
  system ("cls");

  return jugador1;
}

string PreguntoNombreJugador2 (){

  string jugador2;
  cout<< "Ingresar el nombre del jugador 2: "<<endl;
  cout << endl;
  cin>> jugador2;
  system ("cls");

  return jugador2;
}

int TirarDado6caras(){
    return rand() % 6 + 1;
}

int TirarDado12caras (){
    return rand() % 12 + 1;
}

void ComienzaPartidajugador1(string& jugador1, string& jugador2){

    int dadosobjetivostotal, dadosobjetivojugador1[2], dadostockjugador1[6];

    system ("cls");
    cout << "RONDA 1" << endl;
    cout << endl;
    cout << "Lanza sus dados " << jugador1;
    cout << endl << endl;
    system ("pause");
    system ("cls");

    for (int i=0; i<2; i++){
      dadosobjetivojugador1[i] = TirarDado12caras();
       }

    dadosobjetivostotal =  dadosobjetivojugador1[0] + dadosobjetivojugador1[1];
    cout << "RONDA 1" << endl;
    cout << endl;
    cout << endl;
    cout << "Turno de " << jugador1;
    cout << endl;
    cout << endl;
    cout << "Dados objetivos: " << dadosobjetivojugador1[0] << " y " << dadosobjetivojugador1[1] << " = " << dadosobjetivostotal;
    cout << endl;
    cout << "Dados stock: ";
      for (int i=0; i<6; i++){
        dadostockjugador1[i] = TirarDado6caras();
        cout << dadostockjugador1[i] << " - ";
      }
    cout << endl;
    cout << endl;
    cout << "A continuación seleccionar los dados deseados";
    cout << endl;
    cout << endl;
    system ("pause");
    system ("cls");
    cout << endl;
    cout << endl;

}
