#include "Header.h"

Triangle::Triangle()
{
	a = 0;
	b = 0;
	c = 0;
	S = 0;
	P = 0;
	cout << "Вызвался конструктор по умолчанию" << endl;
}

Triangle::Triangle(double x, double y, double z)
{
	if ((x + y > z) && (x + z > y) && (y + z > x))
	{
		a = x;
		b = y;
		c = z;
		this->P = (a + b + c);
		this->S = sqrt(P * (P - a) * (P - b) * (P - c));
		cout << "Задан треугольник со сторонами " << a << ", " << b << ", " << c << endl;
	}
	else
	{
		cout << " Треугольника с заданными сторонами не существует. Все стороны присвоены 0." << endl;
		a = 0;
		b = 0;
		c = 0;
		S = 0;
		P = 0;
	};
}

double Triangle::GetPerimetr()
{
	this->P = (a + b + c);
	cout << "Периметр треугольника равен " << this->P << endl;
	return this->P;
}

double Triangle::GetSquare()
{
	double p = ((a + b + c) / 2);
	this->S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Площадь треугольника равна " << this->S << endl;
	return this->S;
}


 
