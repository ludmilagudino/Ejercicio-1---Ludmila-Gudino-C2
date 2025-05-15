//Ejercicio 5: Multiplicar monedas recogidas por un multiplicador
//Pedir cantidad de monedas recogidas y un multiplicador. Mostrar el total de monedas multiplicadas


#include <iostream>

int main()
{

    std::cout << "Ejercicio 5: Multiplicar monedas recogidas por un multiplicador\n";
    int monedas = 0;
    int multiplicador = 0;

    std::cout << "Ingrese la cantidad de monedas recogidas: ";
    std::cin >> monedas;

    std::cout << "Ingrese el multiplicador recogido: ";
    std::cin >> multiplicador;

    int total = monedas * multiplicador;

    std::cout << "Monedas recogidas: " << monedas << std::endl;
    std::cout << "Multiplicador aplicado: x" << multiplicador << std::endl;
    std::cout << "Total de monedas: " << total << std::endl;

    return 0;
}