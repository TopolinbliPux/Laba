#include "Header.h"

Circule::Circule()
{
	r = 0;
	cout << "�������� ����������� �� ���������" << endl;
}

Circule::Circule(double x)
{
	r = x;
	this->P = 3.14 * r * 2;
	this->S= 3.14 * r * r;
	cout << "������ ���������� �������� " << r << endl;
}

double Circule:: GetPerimetr()
{
	cout << "����� ���������� ����� " << this->P << endl;
	return this->P;
}

double Circule::GetSquare()
{
	cout << "������� ���������� ����� " << this->S << endl;
	return this->S;
}
