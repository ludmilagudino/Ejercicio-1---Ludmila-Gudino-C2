//Ejercicio 8: Crear una función que calcule daño
//La función CalcularDanio debe recibir ataque y defensa, y devolver el resultado de ataque menos defensa. No limitar el resultado.

#include <iostream>

void CalcularDanio(int ataque, int defensa) {
    int danio = ataque - defensa;
    std::cout << "Danio infligido: " << danio << std::endl;
}

    int main() {
        std::cout << "Ejercicio 8: Calcular danio entre ataque y defensa\n";

        int ataque = 0;
        int defensa = 0;

        std::cout << "Ingrese el valor de ataque: ";
        std::cin >> ataque;

        std::cout << "Ingrese el valor de defensa: ";
        std::cin >> defensa;

        CalcularDanio(ataque, defensa);

        return 0;
    }
