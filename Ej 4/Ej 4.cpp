//Ejercicio 4: Calcular experiencia necesaria para subir de nivel
//Ingresar el nivel actual del personaje y calcular cuánta experiencia necesita para el próximo nivel.

#include <iostream>

int main()
{
    std::cout << "Ejercicio 4: Calcular experiencia necesaria para subir de nivel\n";

    int experienciaActual = 0;
    int nivelActual = 0;

    std::cout << "Ingrese el nivel actual del personaje: ";
    std::cin >> nivelActual;

    std::cout << "Ingrese el nivel la experiencia del personaje: ";
    std::cin >> experienciaActual;

    int experienciaTotalParaSubir = 1000 + (nivelActual * 500);
    std::cout << "Experiencia necesaria para el siguiente nivel: " << experienciaTotalParaSubir;

   int experienciaFaltante = experienciaTotalParaSubir - experienciaActual;

   std::cout << "\nNivel actual: " << nivelActual << std::endl;
   std::cout << "Experiencia total necesaria para subir de nivel: " << experienciaTotalParaSubir << std::endl;
   std::cout << "Experiencia actual: " << experienciaActual << std::endl;
   std::cout << "Experiencia restante para subir de nivel: " << experienciaFaltante << std::endl;

    return 0;
}