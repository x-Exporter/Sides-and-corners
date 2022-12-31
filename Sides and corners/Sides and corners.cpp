#include <iostream>

using namespace std;

class Triangle
{
protected:
	int a;
	int b;
	int c;

	int A;
	int B;
	int C;
public:
	Triangle()
	{
	}
	Triangle(int a, int b, int c, int A, int B, int C)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}
	void get_info() 
	{
		cout << "Треугольник:" << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C;
	}

};


class Right_triangle : public Triangle
{
public:
	Right_triangle(int a, int b, int c, int A, int B)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		C = 90;
	}

	void get_info()
	{
		cout << "\n\nПрямоугольный треугольник:" << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C;
	}
};

class Isosceles_triangle : Triangle
{
public:
	Isosceles_triangle(int a, int b, int A, int B)
	{
		this->a = a;
		this->b = b;
		c = a;

		this->A = A;
		this->B = B;
		C = A;
	}

	void get_info()
	{
		cout << "\n\nРавнобедренный треугольник:" << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C;
	}
};

class Equilateral_triangle : Triangle
{
public:
	Equilateral_triangle(int a)
	{
		this->a = a;
		b = a;
		c = a;
		A = 60;
		B = 60;
		C = 60;
	}

	void get_info()
	{
		cout << "\n\nРавносторонний треугольник:" << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C;
	}
};

class Quadrilateral
{
protected:
	int a;
	int b;
	int c;
	int d;

	int A;
	int B;
	int C;
	int D;

	Quadrilateral()
	{
	}
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;

		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}
	void get_info()
	{
		cout << "Четырехугольник:" << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << " D=" << C;
	}


};

class Rectangle : public Quadrilateral
{

};

class Square : public Quadrilateral
{


};

class Parallelogram : public Quadrilateral
{


};

class Rhomb : public Quadrilateral
{

};

int main()
{
	setlocale(LC_ALL, "ru");

	Triangle triangle(10,20,30,50,60,70);
	triangle.get_info();

	Right_triangle right_triangle(10,20,30,50,60);
	right_triangle.get_info();

	Isosceles_triangle sosceles_triangle(10,20,50,60);
	sosceles_triangle.get_info();

	Equilateral_triangle equilateral_triangle(30);
	equilateral_triangle.get_info();





}
