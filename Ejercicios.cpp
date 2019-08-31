#include<iostream>

using namespace std;

int sumMatri(int* A, int* B, int* C, int n) {
	if (n <= -1) {
		return 0;
	}
	else {
		C[n] = A[n] + B[n];
		return  C[n] + sumMatri(A, B, C, n - 1);
	}
}

int Pot(int ba, int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return ba * Pot(ba, n - 1);
	}
}

int men(int f, int i, int n, int* Arr) {
	if (f == 1) {
		if (Arr[i] <= n) {
			return Arr[i];
		}
		return n;
	}
	else {
		if (Arr[i] <= n && Arr[i] <= Arr[i + 1]) {
			return men(f - 1, i + 1, Arr[i], Arr);
		}
		else {
			return men(f - 1, i + 1, n, Arr);
		}
	}
}

int main() {

	cout << "Laboratorio1-AA"<<endl;
	cout << "Ingrese la Ejercicio a ejecutar: Ejercicio 1 --- Ejercicio 2----- Ejercicio 3";
	int opcion = 0;
	cin >> opcion;
	
	int A[9] = { 1,8,4,5,7,7,1,0,2 };
	int B[9] = { 8,0,1,0,1,0,3,2,1 };
	int C[9];
	int i = 1;

	switch (opcion)
	{
	case 1:
		cout << "Ejercio 1 ";
		sumMatri(A, B, C, 8);
		cout << "Matiz C" << endl;
		for (int j = 0; j < 9; j++) {
			cout << C[j] << ' ';
			if (i == 3) {
				cout << endl;
				i = 0;
			}
			i++;
		}

		break;
	case 2:
		cout << "Ejercicio 2";
		cout << "Potencia: " << Pot(4, 2);

		break;


	case 3:
		cout << "Ejercicio3";
		int Arr[7] = { 1,8,-6,5,2,6 };
		cout << "El numero menor es: " << men(6, 0, 0, Arr);

		break;

	}



}


