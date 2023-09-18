#include "Header.h"


int main()
{
	setlocale(LC_ALL, "RUS");

	Triangle tr0;
	Triangle tr(3, 4, 5); Triangle tr1(6, 8,10);
	tr.GetPerimetr();
	tr.GetSquare();
	tr1.GetSquare();
	cout << endl;

	Rectangle rect0;
	Rectangle rect(2, 6); Rectangle rect1 (3,4);
	rect.GetPerimetr();
	rect.GetSquare();
	cout << endl;

	Circule c0;
	Circule c(3); Circule c1(5);
	c.GetPerimetr();
	c.GetSquare();
	cout << endl;

	cout << "---------------Сравнение фигур---------------" << endl;
	cout << "Сравнение двух треугольников" << endl; tr == tr1; cout << endl;
	cout << "Сравнение двух прямоугольников" << endl; rect == rect1; cout << endl;
	cout << "Сравнение двух кругов" << endl; c == c1; cout << endl;
	cout << "Сравнение треугольника и прямоугольника" << endl; tr == rect1; cout << endl;
	cout << "Сравнение треугольника и круга" << endl; tr1 == c; cout << endl;
	cout << "Сравнение прямоугольника и круга" << endl; rect1 == c1;  cout << endl;
}