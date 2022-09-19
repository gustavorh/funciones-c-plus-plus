#include <iostream>

using namespace std;

// Definición de variables globales.
int matriz_a[10][15];
int matriz_b[8][14];


// Definición de funciones
void cargar_impares();
void cargar_pares();
int es_par_impar();

int main() {
	
	cargar_impares();
	cargar_pares();
	
	// Mostrar matriz A
	for (int fila = 0; fila < 10; fila++) {
		for (int columna = 0; columna < 15; columna++) {
			cout << matriz_a[fila][columna];
		}
	}
	
	// Mostrar matriz B
	for (int fila = 0; fila < 10; fila++) {
		for (int columna = 0; columna < 15; columna++) {
			cout << matriz_b[fila][columna];
		}
	}
	
	return 0;
}

void cargar_impares() {
	for (int fila = 0; fila < 8; fila++) {
		for (int columna = 0; columna < 14; columna++) {
			if (es_par_impar() == false) {
				cout << "No es par" << endl;
				cin >> matriz_a[fila][columna];
			}
		}
	}
}

void cargar_pares() {
	
	for (int fila = 0; fila < 8; fila++) {
		for (int columna = 0; columna < 14; columna++) {
			if (es_par_impar() == true) {
				cout << "Si es par" << endl;
				cin >> matriz_b[fila][columna];
			}
		}
	}
}

int es_par_impar() {
	for (int numero = 0; numero < 999; numero++) {
		if (numero % 2 == 0) {
			// True: es par.
			return true;
		} else {
			// False: es impar.
			return false;
		}
	}
}
