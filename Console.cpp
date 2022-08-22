#include <iostream>

class Vector
{
private:
	double x;
	double y;
	double z;

public:
	Vector() : x(0), y(0), z(0)
	{}

	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}

	void Set(double _x, double _y, double _z)
	{
		x = _x;
		y = _y;
		z = _z;
	}

	void Show() 
	{
		std::cout << x << ' ' << y << ' ' << z << '\n';
	}

	double Length()
	{
		return sqrt(x * x + y * y + z * z);
	}
};

int main()
{
	Vector temp(10, 16, 23);
	temp.Show();
	std::cout << "Vector length: " << temp.Length() << '\n';
	temp.Set(2, 2, 2);
	temp.Show();
	std::cout << "Vector length: " << temp.Length() << '\n';
}