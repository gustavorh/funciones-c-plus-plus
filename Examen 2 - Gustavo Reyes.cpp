// Importaci�n de librer�as.
#include <iostream>
#include <math.h>

using namespace std;

// Definici�n de funciones
float calcular_interes_simple(int, float, int);
float valor_seguro_vida(bool, int, int);

// Definici�n de variables globales
float tasa_interes_fija = 0.04;
float valor_uf = 30052.36; // Valor UF al d�a 12/11/2021 13:20 PM.
float factor_riesgo = 0.05;
float gastos_operacionales = 0.5; // Valor en UF
int valor_seguro_uf = 3; // Valor en UF

int main() {
	/*
		Inicializaci�n de variables para su uso posterior.
	*/
	int monto_credito = 0;
	int cuotas = 0;
	bool seguro_vida = true;
	int edad = 0;
	
	float valor_interes_simple = 0;
	float valor_interes_mensual = 0;
	float valor_seguro = 0;
	float valor_gastos_operacionales = 0;
	float valor_cuota = 0;
	int total_a_pagar = 0;
	
	
	/* 
		Secci�n de interacci�n con el usuario, donde se le pide que ingrese
		monto del cr�dito, cantidad de cuotas, si desea o no un seguro de vida y la edad
	*/
	cout << "Ingrese el monto del credito que desea solicitar: "; cin >> monto_credito;
	cout << "Ingrese la cantidad de cuotas con las que desea tomar el credito: "; cin >> cuotas;
	cout << "�Desea agregar un seguro de vida? (Si = 1 ; No = 0): "; cin >> seguro_vida;
	cout << "Ingrese su edad: "; cin >> edad;
	
	/*
		Secci�n de llamado a funciones con los parametros obtenidos en la secci�n anterior
	*/
	valor_interes_simple = calcular_interes_simple(monto_credito, tasa_interes_fija, cuotas);
	valor_interes_mensual = tasa_interes_fija * monto_credito;
	valor_seguro = valor_seguro_vida(seguro_vida, edad, monto_credito);
	valor_gastos_operacionales = gastos_operacionales * monto_credito;
	total_a_pagar = monto_credito + valor_interes_simple + valor_seguro + valor_gastos_operacionales;
	valor_cuota = total_a_pagar / 12;
	
	
	/*
		Secci�n en donde se entregar� en pantalla los resultados obtenidos
		de las funciones y c�lculos realizados por el programa.
	*/
	cout << endl << "La tasa de interes simple es: " << round(valor_interes_simple) << endl;
	cout << "La tasa de interes mensual es: " << round(valor_interes_mensual) << endl;
	cout << "El valor del seguro es: " << round(valor_seguro) << endl;
	cout << "El valor de los gastos operacionales es: " << round(valor_gastos_operacionales) << endl;
	cout << "El total a pagar es: " << total_a_pagar << endl;
	cout << "El valor de cada cuota es: " << round(valor_cuota) << endl;
	
	system("pause");
	
	return 0;
}

float calcular_interes_simple(int monto_credito, float tasa_interes_fija, int cuotas) { // Funci�n que calcular� el valor del interes simple, seg�n el monto del cr�dito, tasa de interes fija y las cuotas seleccionadas.
	float interes = 0; // Se define e inicializa la variable 'interes' con valor 0.
	
	interes = monto_credito * tasa_interes_fija * cuotas; // C�lculo del interes seg�n el monto del cr�dito, tasa de interes fija y las cuotas seleccionadas.
	
	return interes; // Retornamos el valor final del interes simple
}

float valor_seguro_vida(bool seguro_vida, int edad, int monto_credito) { // Funci�n que calcular� el valor del seguro de vida, seg�n su selecci�n del seguro, edad y monto del cr�dito.
	int nueva_edad = 0; // Se define e inicializa la variable 'nueva_edad' con valor 0 para usarla en caso de que la edad ingresada sea incorrecta.
	float seguro = 0; // Se define e inicializa la variable 'seguro' con valor 0 para guardar el valor del seguro de vida una vez calculado.
	
	if (seguro_vida) { // Si el usuario desea un seguro de vida:
		if (edad >= 18 and edad <= 60) { // Si la edad est� entre 18 a�os y 60 a�os
			if (edad < 30) { // Si la edad es menor a 30
				seguro = valor_uf * valor_seguro_uf + (factor_riesgo * monto_credito); // C�lculo del seguro de vida
			} else { // De lo contrario, si la edad NO es menor a 30 ( edad > 30 )
				seguro = (valor_uf * valor_seguro_uf); // C�lculo del seguro de vida
			}
		} else { // Si la edad ingresada por el usuario NO esta entre 18 y 60 a�os
			cout << "La edad ingresada es incorrecta, por favor, ingrese su edad nuevamente: "; cin >> nueva_edad; // Se le pide al usuario que ingrese su edad nuevamente al no estar entre 18 y 60 a�os.
			valor_seguro_vida(seguro_vida, nueva_edad, monto_credito); // Se llama a la funci�n nuevamente de manera recursiva con la nueva edad ingresada por el usuario.
		}
	} else { // De lo contrario, si el usuario NO eligi� un seguro de vida:
		return seguro = 0; // Devolvemos el valor del seguro de vida como 0
	}
	return seguro; // Devolvemos el valor del seguro de vida
}
