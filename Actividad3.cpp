  GNU nano 7.2                                                           Actividad3.cpp                                                                     #include <iostream>

int main(){
  int numeros[] = {1,2,3,4,5};
  int *pnumeros = numeros;
  pnumeros[0] = 1000;
  std::cout << "Valores del array numeros: " << std::endl;
  for (int i = 0; i<5; i++){
      std::cout << numeros[i] << std::endl;
  }
  std::cout << "Dirección de memoria del array: " << numeros << std::endl;
  std::cout << "Dirección de memoria del puntero: " << &pnumeros << std::endl;

  return 0;
}

