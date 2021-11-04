#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	bool done = false;
	int input;
	string array[15][15];
	int x, y;
	int n = 3, m = 2;
	char move;
	int score = 0;
	char exit;
	system("color 9");
	

	for (x = 0; x < 15; x++)
	{
		for (y = 0; y < 15; y++)
		{
			cout << array[x][y];
		}
	}

	//Dibujado del mapa

	for (x = 0; x < 15; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if (x == 0 || x == 14) {
				array[x][y] = "#";
			}
			else if (y == 0 || y == 14) {
				array[x][y] = "#";

			}
			else if (x == 5 && y > 2 && y < 10) {
				array[x][y] = "#";
			}
			else if (x == 9 && y > 2 && y < 10) {
				array[x][y] = "#";
			}
			else if (y == 9 && x > 2 && x < 10) {
				array[x][y] = "#";
			}
			else if (y == 12 && x > 2 && x < 10) {
				array[x][y] = "#";
			}
			else if (y == 1 && x < 6 && x < 10) {
				array[x][y] = "#";



			}
			else
			{
				array[12][12] = "0";
				array[x][y] = ".";

			}
		}
	}



	//Imprimir el mapa
	array[n][m] = "O";
	cout << "\t\t\tPuntuacion: " << score;
	cout << endl;
	for (x = 0; x < 15; x++) {
		for (y = 0; y < 15; y++) {
			cout << array[x][y] << " ";
		}
		cout << endl;
	}
	while (true) {
		cout << "\nELIGE UN MOVIMIENTO";
		cout << "\nEscribe las letras en minuscula: ";
		cin >> move;
		
		
		

		if (move == 's') {
			n++;
			if (n > 0) {
				array[n - 1][m] = " ";
			}
		}
		if (move == 'w') {
			n--;
			if (n > 0) {
				array[n + 1][m] = " ";
			}
		}
		if (move == 'a') {
			m--;
			if (n > 0) {
				array[n][m + 1] = " ";
			}
		}
		if (move == 'd') {
			m++;
			if (m > 0) {
				array[n][m - 1] = " ";
			}
		}
		
		

		
		
		

		if (array[n][m] == "0") {
			system("CLS");
			cout << "BIEN HECHO";
			break;
		}
		if (array[n][m] == "#") {
			system("CLS");
			cout << "GAME OVER";
			break;
		}


		if (array[n][m] == ".") {
			score += 1;
		}

		system("CLS");



		array[n][m] = "O";
		cout << "\t\t\tPuntuacion: " << score;
		cout << endl;
		for (x = 0; x < 15; x++) {
			for (y = 0; y < 15; y++) {
				cout << array[x][y] << " ";
			}
			cout << endl;
		}
	}

}

