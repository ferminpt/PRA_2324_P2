
#include <iostream>
#include <vector>
#include "DyV.h"

int main() {
    // Prueba con vector de enteros
    std::vector<int> vecInt{1, 3, 5, 7, 9, 11, 13, 15};
    int xInt = 7;
    int resultInt = BusquedaBinaria(xInt, vecInt, 0, vecInt.size() - 1);
    if (resultInt != -1)
        std::cout << "Elemento " << xInt << " encontrado en la posición: " << resultInt << " (vector de int)" << std::endl;
    else
        std::cout << "Elemento " << xInt << " no se encuentra (vector de int)" << std::endl;

    // Prueba con vector de floats
    std::vector<float> vecFloat{1.1, 3.3, 5.5, 7.7, 9.9, 11.11};
    float xFloat = 7.7;
    int resultFloat = BusquedaBinaria(xFloat, vecFloat, 0, vecFloat.size() - 1);
    if (resultFloat != -1)
        std::cout << "Elemento " << xFloat << " encontrado en la posición: " << resultFloat << " (vector de float)" << std::endl;
    else
        std::cout << "Elemento " << xFloat << " no se encuentra (vector de float)" << std::endl;

    // Prueba con vector de caracteres
    std::vector<char> vecChar{'a', 'c', 'e', 'g', 'i', 'k'};
    char xChar = 'g';
    int resultChar = BusquedaBinaria(xChar, vecChar, 0, vecChar.size() - 1);
    if (resultChar != -1)
        std::cout << "Elemento '" << xChar << "' encontrado en la posición: " << resultChar << " (vector de char)" << std::endl;
    else
        std::cout << "Elemento '" << xChar << "' no se encuentra (vector de char)" << std::endl;

    return 0;
}
