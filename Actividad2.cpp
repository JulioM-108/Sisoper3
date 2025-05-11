#include <iostream>

void actividad2() {
    int variable = 10;
    int* mvariable = &variable;
    std::cout << "Valor inicial: " << variable << ", dirección &variable = " << &variable << "\n";

    *mvariable = 20;
    std::cout << "Valor de mvariable: " << variable << ", con puntero  = " << mvariable << "\n";

    int& refVar = variable;
    refVar = 30;
    std::cout << "Valor de refVar: " << variable << ", dirección &refVar = " << &refVar << "\n";


    std::cout << "Dirección del puntero mvariable: " << &mvariable << "\n";
    std::cout << "Dirección que almacena mvariable (&variable): " << mvariable << "\n";
    std::cout << "Dirección de la referencia refVar (&variable): " << &refVar << "\n";
}

void memoriaActividad2() {

    double stackEjemplo = 0.0;
    std::cout << "Stack (variable local): &stackEjemplo = " << &stackEjemplo << "\n";

    std::cout << "Heap: no se realizó new en esta actividad\n";

    std::cout << "Code (dirección de función actividad2): " << reinterpret_cast<void*>(&actividad2) << "\n";
}

int main() {
    actividad2();
    memoriaActividad2();
    return 0;
}
