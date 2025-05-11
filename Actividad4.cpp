#include <iostream>

class Matriz {
public:
    int filas, cols;
    int* data;

    Matriz(int r, int c) : filas(r), cols(c) {
        data = new int[filas * cols];
    }
    ~Matriz() {
        delete[] data;
    }
    int& at(int i, int j) {
        return data[i * cols + j];
    }
};
Matriz* actividad4() {
    std::cout << "\nActividad 4\n";
    const int filas = 3;
    const int cols  = 4;
    Matriz* mat = new Matriz(filas, cols);
    std::cout << "Matriz " << filas << "x" << cols << ".\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < cols; ++j) {
            mat->at(i, j) = i * cols + j;
            std::cout << "Valores: " << mat->at(i, j) << " con direccion " << &(mat->at(i, j)) << ".\n";
        }
    }
    return mat;
}
void memoriaActividad4(Matriz* mat) {
    std::cout << "Heap (objeto Matriz): " << mat << ".\n";
    std::cout << "Heap (buffer data): " << mat->data << ".\n";
    std::cout << "Code (dirección de actividad4): " << reinterpret_cast<void*>(&actividad4) << ".\n";
}

int main(){
    Matriz* matriz = actividad4();
    memoriaActividad4(matriz);
    delete matriz;
    return 0;
}
