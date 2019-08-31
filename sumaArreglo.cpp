#include<iostream>

using namespace std;


int sumaArr(int Lista[], int cont, int res = 0) {
	if (cont == 1) {
		return res + Lista[0];
	}
	return sumaArr(Lista, cont - 1, res += Lista[cont - 1]);
}



int main() {

	cout << "Laboratorio1-AA" << endl;
	cout << "Ingrese la Ejercicio a ejecutar: 1)sumaArreglo ";
	int opcion = 0, num = 0;
	cin >> opcion;



	switch (opcion)
	{
	case 1:
		int Arr[7] = { 1,8,-6,5,2,6 };
		cout << "Suma del Arreglo: "<< sumaArr(Arr, sizeof(Arr) / sizeof(Arr[0]));	



		break;
	




	}



}


