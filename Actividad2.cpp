  GNU nano 7.2                                                           Actividad2.cpp                                                                     #include <iostream>

int main(){
  int variable = 10;
  std::cout << "Valor de variable sin modificar: " << variable << std::endl;
  std::cout << "Valor de la dirección de la variable: " << &variable << std::endl;
  int *mvariable = &variable;
  *mvariable = 1000;

  std::cout << "Valor de variable modificada con puntero: " << variable << std::endl;
  std::cout << "Dirección almacenada en puntero (mvariable): " << mvariable << std::endl;
  std::cout << "Valor del puntero de la variable: " << &mvariable << std::endl;


  int &referencia = variable;


  referencia = 60;
  std::cout << "Valor variable referenciada: " << variable << std::endl;
  std::cout << "Valor de la direccion de la variable referenciada: " << &referencia << std::endl;
  return 0;
}
