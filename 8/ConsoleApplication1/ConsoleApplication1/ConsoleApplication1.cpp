// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int zad4(int x) {

	int* wsk;

	wsk = &x;

	return *wsk * *wsk;

}

int zad5(int a, int b, int c) {

	int* wsk5;
	int* wsk5p;
	int* wsk5w;

	wsk5 = &a;
	wsk5p = &b;
	wsk5w = &c;

	for (int i = 1; i < *wsk5p; i++)
	{
		*wsk5w = *wsk5 * *wsk5;
	}


	return *wsk5w;


}

char zad6(char zn, int pow) {

	char* wsk6Zn;
	int* wsk6Pow;

	wsk6Zn = &zn;
	wsk6Pow = &pow;

	for (int i = 0; i < *wsk6Pow; i++)
	{
		return  *wsk6Zn;

	}

}

int main()
{


	// Zad 1

	/*

	int a = 10;
	int b = 44;
	int c = 60;

	int* ptr;

	ptr = &a;

	int* ptr1;
	ptr1 = &b;

	int* ptr2;
	ptr2 = &c;

	cout << "adres zadeklarowanej zmiennej a: " << ptr << endl;
	cout << "wartosc zadeklarowanej zmiennej a: " << *ptr << endl;
	cout << "roznica dwoch liczb: " << *ptr - *ptr1 << endl;
	cout << "srednia trzech liczb: " << (*ptr + *ptr1 + *ptr2) / 3 << endl;


	*/



	// Zad 2


	/*
	

	float tablica[10];

	float* wsk1;

	float* wsk4;

	for (int i = 0; i < 10; i++) {
		cout << "Dodaj wartosci do tablicy: ", cin >> tablica[i];
	}

	wsk1 = &tablica[0];

	wsk4 = &tablica[3];

	cout << "Adres pierwszego elementu: " << tablica + 1 << endl << "Adres czwartego elementu: " << tablica + 4 << endl;


	*/

	// Zad 3


	/*



	float tablica[10];

	float* wsk1;
	float* wsk2;
	float* wsk3;
	float* wsk4;
	float* wsk5;
	float* wsk6;
	float* wsk7;
	float* wsk8;
	float* wsk9;
	float* wsk10;

	for (int i = 0; i < 10; i++) {
		cout << "Dodaj wartosci do tablicy: ", cin >> tablica[i];
	}

	wsk1 = &tablica[0];
	wsk2 = &tablica[1];
	wsk3 = &tablica[2];
	wsk4 = &tablica[3];
	wsk5 = &tablica[4];
	wsk6 = &tablica[5];
	wsk7 = &tablica[6];
	wsk8 = &tablica[7];
	wsk9 = &tablica[8];
	wsk10 = &tablica[9];

	float srednia = (*wsk1 + *wsk2 + *wsk3 + *wsk4 + *wsk5 + *wsk6 + *wsk7 + *wsk8 + *wsk9 + *wsk10) / 10;

	cout << "Średnia: " << srednia;

	*/


	// ZAD 4
	
	/*

	int x;
	cout << "Podaj liczbe: ", cin >> x;

	cout << "Kwadrat podanej liczby: ";

	cout << zad4(x);

	*/

	// ZAD 5

	
	/*

	int a, b;
	int c = 0;
	cout << "Podaj liczbe potegowana: ", cin >> a;
	cout << "Podaj potege: ", cin >> b;
	cout << zad5(a, b, c);

	*/


	// ZAD 6

	char zn;
	cout << "Podaj znak: ", cin >> zn;

	int pow;
	cout << "Ile razy ?: ", cin >> pow;

	cout << zad6(zn, pow);
	

}

