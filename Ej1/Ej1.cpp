//Ejercicio 1: Sumar puntos al jugador
//Pedir al usuario los puntos iniciales y los puntos ganados.Mostrar el total.


#include <iostream>

int main()
{

    std::cout << "Ejercicio 1: Sumar puntos al jugador\n";
    int PuntosJugador = 0;
    int PuntosObtenidos = 0;


    std::cout << "Ingrese los puntos iniciales del jugador: ";
    std::cin >> PuntosJugador;


    std::cout << "Ingrese los puntos obtenidos por el jugador: ";
    std::cin >> PuntosObtenidos;

    int total = PuntosJugador + PuntosObtenidos;
    std::cout << "Puntos totales del jugador: "<< total << std::endl;


    return 0;
}
