//Ejercicio 10: Calcular tiempo total de juego
//Pedir cuántos minutos jugó el jugador en tres días distintos.Mostrar el total y el promedio por Día y mostrarlos en pantalla en formato hs : mm

#include <iostream>


int main() {
    std::cout << "Ejercicio 10: Calcular tiempo total de juego\n";
    int minutosDia1 = 0;
    int minutosDia2 = 0;
    int minutosDia3 = 0;

    std::cout << "Ingrese minutos jugados el dia 1: ";
    std::cin >> minutosDia1;

    std::cout << "Ingrese minutos jugados el dia 2: ";
    std::cin >> minutosDia2;

    std::cout << "Ingrese minutos jugados el dia 3: ";
    std::cin >> minutosDia3;

    int totalMinutos = minutosDia1 + minutosDia2 + minutosDia3;
    int promedioMinutos = totalMinutos / 3;

    int horasTotales = totalMinutos / 60;
    int minutosTotales = totalMinutos % 60;

    int horasPromedio = promedioMinutos / 60;
    int minutosPromedio = promedioMinutos % 60;


    std::cout << "Tiempo total jugado: " << horasTotales << "h:" << minutosTotales << "m\n";
    std::cout << "Promedio diario: " << horasPromedio << "h:" << minutosPromedio << "m\n";



    return 0;
}