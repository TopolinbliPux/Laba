#include "Header.h"

Triangle::Triangle()
{
	a = 0;
	b = 0;
	c = 0;
	S = 0;
	P = 0;
	cout << "�������� ����������� �� ���������" << endl;
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
		cout << "����� ����������� �� ��������� " << a << ", " << b << ", " << c << endl;
	}
	else
	{
		cout << " ������������ � ��������� ��������� �� ����������. ��� ������� ��������� 0." << endl;
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
	cout << "�������� ������������ ����� " << this->P << endl;
	return this->P;
}

double Triangle::GetSquare()
{
	double p = ((a + b + c) / 2);
	this->S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "������� ������������ ����� " << this->S << endl;
	return this->S;
}


 
