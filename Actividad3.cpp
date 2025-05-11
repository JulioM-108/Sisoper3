#include <iostream>

void actividad3() {
    const int N = 5;
    int numeros[N] = { 1, 2, 3, 4, 5 };
    std::cout << "Array inicial:\n";
    for (int i = 0; i < N; ++i) {
        std::cout << "Valores: " << numeros[i] << " en dirección " << &numeros[i] << "\n";
    }
    int *pnumeros = numeros;
    pnumeros[1] = 1000;
    std::cout << "\nArray modificado con puntero:\n";
    for (int i = 0; i < N; ++i) {
        std::cout << "Valores: " << numeros[i] << std::endl;
    }
    std::cout << "\nDirección del array (numeros) = " << numeros << "\n";
    std::cout << "Dirección del puntero pnumeros = " << &pnumeros << "\n";
    std::cout << "Valor de pnumeros (&numeros[0]) = " << pnumeros << "\n";
}

void memoriaActividad3() {
    int numero = 10;
    std::cout << "Stack (variable local): &numero = " << &numero  << "\n";

    std::cout << "Heap: no se realizó new en esta actividad\n";

    std::cout << "Code (dirección de función actividad3): " << reinterpret_cast<void*>(&actividad3) << "\n";
}

int main() {
    actividad3();
    memoriaActividad3();
    return 0;
}
