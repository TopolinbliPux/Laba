#include "Header.h"

Rectangle::Rectangle()
{
	d = 0;
	e = 0;
	S = 0;
	P = 0;
	cout << "Вызвался конструктор по умолчанию" << endl;
}

Rectangle::Rectangle(double x, double y)
{
	d = x;
	e = y;
	this->P = 2 * (d + e);
	this->S = d * e;
	cout << "Задан прямоугольник со сторонами " << d << ", " << e << endl;
}

double Rectangle::GetPerimetr()
{
	cout << "Периметр прмяоугольника равен " << this->P << endl;
	return this->P;
}

double Rectangle::GetSquare()
{
	cout << "Площадь прямоугольника равна " << this->S << endl;
	return this->S;
}

