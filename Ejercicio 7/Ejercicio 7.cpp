//Ejercicio 7: Crear una función que sume dos números
//Crear una función llamada Sumar que reciba dos números y devuelva el resultado.Usarla para sumar puntos, monedas u otro recurso.

#include <iostream>

void Sumar(int a, int b) {

    int total = a + b;
    std::cout << "Total de la suma: " << total << std::endl;
}

int main() {
    std::cout << "Ejercicio 7: Crear una funcion que sume dos numeros \n";
    int x = 0;
    int y = 0;
    std::cout << "Ingrese el primer numero para sumar: ";
    std::cin >> x;
    std::cout << "Ingrese el segundo numero para sumar: ";
    std::cin >> y;
    Sumar(x, y);


    return 0;
}
