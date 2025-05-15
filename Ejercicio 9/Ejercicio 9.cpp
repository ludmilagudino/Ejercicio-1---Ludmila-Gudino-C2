//Ejercicio 9: Ingresar los stats del jugador y mostrarlo en pantalla
//Pedir al usuario que ingrese su nombre, ataque, defensa, velocidad de ataque, vida maxima, multiplicador de danio critico  y mostrar sus stats.

#include <iostream>


int main() {
    std::cout << "Ejercicio 9: Ingresar los stats del jugador y mostrarlo en pantalla\n";

    std::string nombre;
    int ataque = 0;
    int defensa = 0;
    float velocidadAtaque = 0.0;
    int vidaMaxima = 0;
    float multiplicadorCritico = 0.0;

    std::cout << "Ingrese el nombre del jugador: ";
    std::cin >> nombre;

    std::cout << "Ingrese el ataque del jugador: ";
    std::cin >> ataque;

    std::cout << "Ingrese la defensa del jugador: ";
    std::cin >> defensa;

    std::cout << "Ingrese la velocidad de ataque del jugador: ";
    std::cin >> velocidadAtaque;

    std::cout << "Ingrese la vida maxima del jugador: ";
    std::cin >> vidaMaxima;

    std::cout << "Ingrese el multiplicador de danio critico: ";
    std::cin >> multiplicadorCritico;

    std::cout << "Jugador: " << nombre << ", Ataque: " << ataque << ", Defensa: " << defensa
        << ", Velocidad de Ataque: " << velocidadAtaque << ", Vida Maxima: " << vidaMaxima
        << ", Multiplicador Critico: " << multiplicadorCritico << std::endl;

    return 0;
}