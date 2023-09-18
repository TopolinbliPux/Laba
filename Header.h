#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class Figure
{
public:
	virtual double GetSquare()=0;
	virtual double GetPerimetr() = 0;
	void operator==(Figure&);
};

class Triangle : public Figure
{
private:
	double a;
	double b;
	double c;
	double S;
	double P;
public:
	Triangle(); //����������� �� ���������
	Triangle(double x, double y, double z); //�����������
	double GetPerimetr() override; 
	double  GetSquare() override;
};

class Rectangle : public Figure
{
private:
	double d;
	double e;
	double S;
	double P;
public:
	Rectangle(); //����������� �� ���������
	Rectangle(double x, double y); //�����������
	double GetPerimetr() override;
	double  GetSquare() override;
};

class Circule : public Figure
{ 
private:
	double r;
	double S;
	double P;
public:
	Circule();//����������� �� ���������
	Circule(double x);
	double GetPerimetr() override;
	double  GetSquare() override;
};

