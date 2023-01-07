#include <iostream>

using namespace std;


class Figure
{
protected:
	int a;
	int b;
	int c;

	int A;
	int B;
	int C;
public:
	Figure() 
	{

	}
	virtual void get_info()
	{
		 
	}
};


class Triangle : public Figure
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
	void get_info() override
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

	void get_info() override
	{
		cout << "\n\nПрямоугольный треугольник:" << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C;
	}
};

class Isosceles_triangle : public Triangle
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

	void get_info() override
	{
		cout << "\n\nРавнобедренный треугольник:" << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C;
	}
};

class Equilateral_triangle : public Triangle
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

	void get_info() override
	{
		cout << "\n\nРавносторонний треугольник:" << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C;
	}
};

class Quadrilateral : public Figure
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
public:
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
	void get_info() override
	{
		cout << "\n\nЧетырехугольник:" << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D;
	}
};

class Rectangle : public Quadrilateral
{
public:
	Rectangle(int a, int b)
	{
		this->a = a;
		this->b = b;
		c = a;
		d = b;

		A = B = C = D = 90;
	}
	void get_info() override
	{
		cout << "\n\nПрямоугольник:" << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D;
	}
};

class Square : public Quadrilateral
{
public:
	Square(int a)
	{
		this->a = a;
		b = a;
		c = a;
		d = a;

		A = B = C = D = 90;
	}
	void get_info() override
	{
		cout << "\n\nКвадрат:" << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D;
	}
};

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(int a,int b,int A,int B)
	{
		this->a = a;
		this->b = b;
		c = a;
		d = b;

		this->A = A;
		C = A;
		this->B = B;
		D = B;
	}
	void get_info() override
	{
		cout << "\n\nПараллелограмм:" << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D;
	}

};

class Rhomb : public Quadrilateral
{
public:
	Rhomb(int a, int A, int B)
	{
		this->a = a;
		b = c = d = a;

		this->A = A;
		C = A;
		this->B = B;
		D = B;
	}
	void get_info() override
	{
		cout << "\n\nРомб:" << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D;
	}

};

void print_info(Figure* figure)
{
	figure->get_info();
}

int main()
{
	setlocale(LC_ALL, "ru");

	Triangle triangle(10,20,30,50,60,70);
	print_info(&triangle);

	Right_triangle right_triangle(10,20,30,50,60);
	print_info(&right_triangle);

	Isosceles_triangle sosceles_triangle(10,20,50,60);
	print_info(&sosceles_triangle);

	Equilateral_triangle equilateral_triangle(30);
	print_info(&equilateral_triangle);

	Quadrilateral quadrilateral (10, 20, 30, 40, 50, 60, 70, 80);
	print_info(&quadrilateral);

	Rectangle rectangle(10,20);
	print_info(&rectangle);

	Square square(20);
	print_info(&square);

	Parallelogram parallelogram(20, 30, 30, 40);
	print_info(&parallelogram);

	Rhomb rhomb(30, 30, 40);
	print_info(&rhomb);
}
