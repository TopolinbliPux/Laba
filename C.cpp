#include "Header.h"

Circule::Circule()
{
	r = 0;
	cout << "Вызвался конструктор по умолчанию" << endl;
}

Circule::Circule(double x)
{
	r = x;
	this->P = 3.14 * r * 2;
	this->S= 3.14 * r * r;
	cout << "Задана окружность радиусом " << r << endl;
}

double Circule:: GetPerimetr()
{
	cout << "Длина окружности равна " << this->P << endl;
	return this->P;
}

double Circule::GetSquare()
{
	cout << "Площадь окружности равна " << this->S << endl;
	return this->S;
}
