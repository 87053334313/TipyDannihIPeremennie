#include <iostream>

using namespace std;

void main() 
{
	setlocale(LC_ALL,"");
	/*
	cout << "Введите дробное число: ";
	double n;
	cin >> n;
	int grvn = n;
	int cop = (n - grvn) * 100;
	cout << grvn << " грвн.\t" <<cop <<"коп.";
	*/
	//задача 2
	/*
	cout << "Введите стоимость покупки\n";
	cout << "Введите исходные данные:\n";
	double price_notebook;
	int  count_notebook;
	double price_pencil;
	int count_pencil;
	cout << "Цена тетради: "; cin >> price_notebook; 
	cout << "Количество тетрадей: "; cin >> count_notebook;

	cout << "Цена карандаша: "; cin >> price_pencil; 
	cout << "Количество карандащей: "; cin >> count_pencil; 
	double rez = price_notebook * count_notebook + price_pencil * count_pencil;
	int grvn = rez;
	int cop = (rez - grvn) * 100;
	cout << "Cтоимость покупки: "<<rez<<" грн.";
	*/
	//Задача 3
	/*
	cout << "Введите стоимость покупки\n";
	cout << "Введите исходные данные:\n";
	double price_notebook;
	double price_cover;
	
	cout << "Цена тетради: "; cin >> price_notebook;
	cout << "Цена обложки: "; cin >> price_cover;
	int complect;
	cout << "Количество комплектов: "; cin >> complect;
	double rez = (price_notebook + price_cover) * complect;
	cout << "Стоимость покупки: "<<rez;
	*/
	//задача 4
	int distance;
	double rashod;
	double price;
	cout << "Растояние до дачи: "; cin >> distance;
	cout << "Расход бензина: "; cin >> rashod;
	cout << "Цена за литр бензина: "; cin >> price;
	double rez = distance * rashod / 100 * price*2;
	cout << "Поездка на дачу и обратно обойдется: "<<rez;
	

}