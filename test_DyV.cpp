#include <iostream>
#include <chrono>
#include "DyV.h"
using namespace std;

void testBusquedaBinariaInt() {
	vector<int> valores{1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	int x = 7;
	int posicion = BusquedaBinaria(x, valores, 0, valores.size() - 1);
	cout << "Prueba con int: ";
	if (posicion != -1) {
		cout << "El valor " << x << " se encuentra en la posición " << posicion << endl;
	} else {
		cout << "No se encuentra en el array." << endl;
	}
}

void testBusquedaBinariaFloat() {
	vector<float> valores{1.1, 2.2, 3.3, 4.4, 5.5};
	float x = 3.3;
	int posicion = BusquedaBinaria(x, valores, 0, valores.size() - 1);
	cout << "Prueba con float: ";
	if (posicion != -1) {
		cout << "El valor " << x << " se encuentra en la posición " << posicion << endl;
	} else {
		cout << "No se encuentra en el array." << endl;
	}
}

void testBusquedaBinariaChar() {
	vector<char> valores{'a', 'x', 'z', 'h', 'b'};
	char x = 'e';
	int posicion = BusquedaBinaria(x, valores, 0, valores.size() - 1);
	cout << "Prueba con char: ";
	if (posicion != -1) {
		cout << "El valor '" << x << "' se encuentra en la posición " << posicion << endl;
	} else {
		cout << "No se encuentra en el array." << endl;
	}
}


void testQuickSortInt() {
	vector<int> valores = {1, 2, 3, 6, 5, 4, 9, 8, 7};
	auto start = chrono::system_clock::now();
	QuickSort(valores, 0, valores.size() - 1);
	auto end = chrono:: system_clock::now();
	chrono::duration<float,milli> duration = end-start; 
	cout << "Vector de enteros ordenado: ";
	for (int val : valores) {
		cout << val << " ";
	}
	cout << endl;
	cout << "Tiempo de ejcución (Qint): "<< duration.count() << "ms" << endl;
}

void testQuickSortFloat() {
	vector<float> valores = {6.5, 3.1, 4.3, 2.7, 5.9, 2.4, 5.5, 7.6, 6.2};
	auto start = chrono::system_clock::now();
	QuickSort(valores, 0, valores.size() - 1);
	auto end = chrono:: system_clock::now();
	chrono::duration<float,milli> duration = end-start;
	cout << "Vector de floats ordenado: ";
	for (float val : valores) {
		cout << val << " ";
	}
	cout << endl;
	cout << "Tiempo de ejcución (Qint): "<< duration.count() << "ms" << endl;

}

void testQuickSortChar() {
	vector<char> valores = {'a', 't', 'l', 'd', 'a', 'x', 'm', 'q', 'p'};
	auto start = chrono::system_clock::now();
	QuickSort(valores, 0, valores.size() - 1);
	auto end = chrono:: system_clock::now();
	chrono::duration<float,milli> duration = end-start;
	cout << "Vector de chars ordenado: ";
	for (char val : valores) {
		cout << val << " ";
	}
	cout << endl;
	cout << "Tiempo de ejcución (Qint): "<< duration.count() << "ms" << endl;

}

int main() {
	testBusquedaBinariaInt();
	testBusquedaBinariaFloat();
	testBusquedaBinariaChar();
	cout << "Pruebas Quicksort" << endl;
	testQuickSortInt();
	testQuickSortFloat();
	testQuickSortChar();
	return 0;
}
