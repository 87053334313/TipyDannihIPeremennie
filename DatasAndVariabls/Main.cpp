#include <iostream>

using namespace std;

void main() 
{
	setlocale(LC_ALL,"");
	/*
	cout << "������� ������� �����: ";
	double n;
	cin >> n;
	int grvn = n;
	int cop = (n - grvn) * 100;
	cout << grvn << " ����.\t" <<cop <<"���.";
	*/
	//������ 2
	/*
	cout << "������� ��������� �������\n";
	cout << "������� �������� ������:\n";
	double price_notebook;
	int  count_notebook;
	double price_pencil;
	int count_pencil;
	cout << "���� �������: "; cin >> price_notebook; 
	cout << "���������� ��������: "; cin >> count_notebook;

	cout << "���� ���������: "; cin >> price_pencil; 
	cout << "���������� ����������: "; cin >> count_pencil; 
	double rez = price_notebook * count_notebook + price_pencil * count_pencil;
	int grvn = rez;
	int cop = (rez - grvn) * 100;
	cout << "C�������� �������: "<<rez<<" ���.";
	*/
	//������ 3
	/*
	cout << "������� ��������� �������\n";
	cout << "������� �������� ������:\n";
	double price_notebook;
	double price_cover;
	
	cout << "���� �������: "; cin >> price_notebook;
	cout << "���� �������: "; cin >> price_cover;
	int complect;
	cout << "���������� ����������: "; cin >> complect;
	double rez = (price_notebook + price_cover) * complect;
	cout << "��������� �������: "<<rez;
	*/
	//������ 4
	int distance;
	double rashod;
	double price;
	cout << "��������� �� ����: "; cin >> distance;
	cout << "������ �������: "; cin >> rashod;
	cout << "���� �� ���� �������: "; cin >> price;
	double rez = distance * rashod / 100 * price*2;
	cout << "������� �� ���� � ������� ���������: "<<rez;
	

}