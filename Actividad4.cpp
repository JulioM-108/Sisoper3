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

    int& get(int i, int j) {
        return data[i * cols + j];
    }
};

int main() {
    Matriz mat(3, 4);


    for (int i = 0; i < mat.filas; ++i) {
        for (int j = 0; j < mat.cols; ++j) {
            mat.get(i, j) = i * mat.cols + j;
        }
    }


    std::cout << "Matriz 3x4:\n";
    for (int i = 0; i < mat.filas; ++i) {
        for (int j = 0; j < mat.cols; ++j) {
            std::cout << mat.get(i, j) << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
