#include "Header.h"

Rectangle::Rectangle()
{
	d = 0;
	e = 0;
	S = 0;
	P = 0;
	cout << "�������� ����������� �� ���������" << endl;
}

Rectangle::Rectangle(double x, double y)
{
	d = x;
	e = y;
	this->P = 2 * (d + e);
	this->S = d * e;
	cout << "����� ������������� �� ��������� " << d << ", " << e << endl;
}

double Rectangle::GetPerimetr()
{
	cout << "�������� �������������� ����� " << this->P << endl;
	return this->P;
}

double Rectangle::GetSquare()
{
	cout << "������� �������������� ����� " << this->S << endl;
	return this->S;
}

