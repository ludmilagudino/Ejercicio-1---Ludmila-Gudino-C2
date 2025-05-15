//Ejercicio 6: Sistema simple de compra
//Ingresar la cantidad de monedas del jugador y el precio de un objeto.Restar el precio a las monedas y mostrar lo que le queda. (puede que se saque fiado : D)

#include <iostream>

int main()
{

    std::cout << "Ejercicio 6: Sistema simple de compra\n";
    int monedasActuales = 0;
    int precioObjeto = 0;

    std::cout << "Ingrese la cantidad de monedas actuales: ";
    std::cin >> monedasActuales;

    std::cout << "Ingrese el valor del objeto a comprar: ";
    std::cin >> precioObjeto;

    int restante = monedasActuales - precioObjeto;

    std::cout << "Monedas actuales: " << monedasActuales << std::endl;
    std::cout << "Valor del objeto: " << precioObjeto << std::endl;
    std::cout << "Total de monedas restantes: " << restante << std::endl;

    return 0;
}