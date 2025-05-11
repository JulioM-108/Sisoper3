#include <iostream>

void actividad1() {
    int numero = 42;
    std::cout << "Valor inicial: " << numero << " en dirección " << &numero << "\n";

    int* modificarnumero = &numero;
    *modificarnumero = 100;
    std::cout << "Nuevo valor: " << numero << " en dirección " << modificarnumero << "\n";
}

void memoriaActividad1() {
    std::cout << "\n--- Información de Memoria (Actividad 1) ---\n";

    int stackVar = 0;
    std::cout << "Stack (variable local): &stackVar = " << &stackVar << "\n";

    std::cout << "Heap: no se realizó new en esta actividad\n";

    std::cout << "Code (dirección de función actividad1): " << reinterpret_cast<void*>(&actividad1) << "\n";
}

int main() {
    actividad1();
    memoriaActividad1();
    return 0;
}
