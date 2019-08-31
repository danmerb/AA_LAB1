#include<iostream>

using namespace std;




int fibPos(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}

	else {
		return fibPos(n - 1) + fibPos(n - 2);
	}

}


int fibCol(int pos, int uno = 0, int dos = 1) {
	if (pos == 0) {
		return uno;
	}
	if (pos == 1) {
		return dos;
	}
	pos -= 1;
	return fibCol(pos, dos, uno + dos);
}

int main() {

	cout << "Laboratorio1-AA" << endl;
	cout << "Ingrese la Ejercicio a ejecutar: 1)Fibonacci Pos --- 2)Fibonacci cola";
	int opcion = 0,num=0;
	cin >> opcion;
	
	

	switch (opcion)
	{
	case 1:
		
		cout << "Ingrese el numero" << endl;
		cin >> num;
		cout << endl << "Resusltado de la serie : ";
		cout << fibPos(num) << endl << endl;

		

		break;
	case 2:
		
		cout << "Ingrese el numero " << endl;
		cin >> num;
		cout << endl << "Resusltado de la serie: "; 
		cout << fibCol(num, 0, 1) << endl;
		

		break;


	

	}



}


