#include <vector>
#include <iostream>
using namespace std;

template <typename T>

int BusquedaBinaria(int x, const vector<T>& v, int ini, int fin) {
        
	if (ini > fin) { // CASO BASE
		return -1;
	}
        
	int medio = (ini + fin) / 2;
        
	if (v[medio] == x) {
		return medio; 
	} else if (v[medio] > x) {
		return BusquedaBinaria(x, v, ini, medio - 1); // izquierda
	} else {
		return BusquedaBinaria(x, v, medio + 1, fin); // derecha
	}
}

template <typename T>

int Partition(vector<T>& v, int ini, int fin) {
	T x = v[fin];
	int i = ini;

	for (int j = ini; j < fin; ++j) {
		if (v[j] <= x) {
			swap(v[i], v[j]);
			i = i + 1;
		}
	}
	swap(v[i], v[fin]);
	return i;
}

template <typename T>

void QuickSort(vector<T>& v, int ini, int fin) {
	if (ini < fin) {
		int pivot = Partition(v, ini, fin);
		QuickSort(v, ini, pivot - 1);
		QuickSort(v, pivot + 1, fin);
	}
}
