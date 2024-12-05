#ifndef DYV_H
#define DYV_H

#include <vector>
#include <iostream>

// Función de búsqueda binaria genérica usando templates
template <typename T>
int BusquedaBinaria(T X, const std::vector<T>& V, int ini, int fin) {
    if (ini > fin) {
        return -1;  // No se encuentra en el array
    }

    int medio = (ini + fin) / 2;

    if (V[medio] == X) {
        return medio;  // Se encontró el elemento
    } else if (V[medio] > X) {
        return BusquedaBinaria(X, V, ini, medio - 1);  // Buscar en la parte izquierda
    } else {
        return BusquedaBinaria(X, V, medio + 1, fin);  // Buscar en la parte derecha
    }
}

#endif
