//Ejercicio 11: Simulación de combate simple.
//Crear un programa que pida el nombre, vida, ataque y defensa del jugador, y también los datos del enemigo.Usar una función para calcular el daño del jugador al enemigo y viceversa(ataque menos defensa).Restar los daños a las vidas de ambos personajes.Mostrar los resultados en pantalla : vida inicial y final del jugador y del enemigo.simplemente mostrar todos los valores resultantes después del intercambio de ataques.


#include <iostream>

void CalcularDanio(int ataque, int defensa, int& danio) {
    danio = ataque - defensa;
}

int main() {
    std::cout << "Ejercicio 11: Simulacion de combate simple\n";

    std::string nombreJugador;
    int vidaJugador = 0;
    int ataqueJugador = 0;
    int defensaJugador = 0;

    std::string nombreEnemigo;
    int vidaEnemigo = 0;
    int ataqueEnemigo = 0;
    int defensaEnemigo = 0;

    std::cout << "Ingrese nombre del jugador: ";
    std::cin >> nombreJugador;
    std::cout << "Ingrese vida del jugador: ";
    std::cin >> vidaJugador;
    std::cout << "Ingrese ataque del jugador: ";
    std::cin >> ataqueJugador;
    std::cout << "Ingrese defensa del jugador: ";
    std::cin >> defensaJugador;

    std::cout << "Ingrese nombre del enemigo: ";
    std::cin >> nombreEnemigo;
    std::cout << "Ingrese vida del enemigo: ";
    std::cin >> vidaEnemigo;
    std::cout << "Ingrese ataque del enemigo: ";
    std::cin >> ataqueEnemigo;
    std::cout << "Ingrese defensa del enemigo: ";
    std::cin >> defensaEnemigo;

    int danioJugador = 0;
    int danioEnemigo = 0;

    CalcularDanio(ataqueJugador, defensaEnemigo, danioJugador);
    CalcularDanio(ataqueEnemigo, defensaJugador, danioEnemigo);

    int vidaFinalJugador = vidaJugador - danioEnemigo;
    int vidaFinalEnemigo = vidaEnemigo - danioJugador;

    std::cout << "Jugador: " << nombreJugador << ", Vida inicial: " << vidaJugador << ", Vida final: " << vidaFinalJugador << std::endl;
    std::cout << "Enemigo: " << nombreEnemigo << ", Vida inicial: " << vidaEnemigo << ", Vida final: " << vidaFinalEnemigo << std::endl;

    return 0;
}
