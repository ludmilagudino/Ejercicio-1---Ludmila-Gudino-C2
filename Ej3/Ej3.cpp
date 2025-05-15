//Ejercicio 3: Curar al personaje
//Ingresar la vida actual y una cantidad de curación.Sumar la curación a la vida y mostrar la   nueva vida(aunque supere 100, ya que aún no usan condicionales).


#include <iostream>

int main()
{

    std::cout << "Ejercicio 3: Curar al personaje\n";
    int vida = 0;
    int curacion = 0;


    std::cout << "Ingrese la vida actual del personaje: ";
    std::cin >> vida;


    std::cout << "Ingrese la curacion que recibe el personaje: ";
    std::cin >> curacion;

    vida = vida + curacion;
    std::cout << "Vida resultante: " << vida << std::endl;


    return 0;
}