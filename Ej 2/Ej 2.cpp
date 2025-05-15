//Ejercicio 2: Calcular daño recibido
//Ingresar la vida actual del personaje y cuánto daño recibe.Restar el daño a la vida y mostrar la vida resultante.



#include <iostream>

int main()
{

    std::cout << "Ejercicio 2: Calcular dano recibido\n";
    int vida = 0;
    int dano = 0;


    std::cout << "Ingrese la vida actual del personaje: ";
    std::cin >> vida;


    std::cout << "Ingrese el dano que recibe el personaje: ";
    std::cin >> dano;

    int vidaResultante = vida - dano;
    std::cout << "Vida resultante: " << vidaResultante << std::endl;


    return 0;
}