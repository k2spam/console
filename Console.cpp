#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void Voice()
	{
		cout << "Animal voice here\n";
	}
};

class Dog : public Animal
{
public:
	void Voice() override
	{
		cout << "Woof-woof!\n";
	}
};

class Cat : public Animal
{
public:
	void Voice() override
	{
		cout << "Meeew!\n";
	}
};

class Cow : public Animal
{
public:
	void Voice() override
	{
		cout << "Moo-oo!\n";
	}
};

int main()
{
	int size = 3;
	Animal** animals = new Animal * [size] {new Dog, new Cat, new Cow};

	for (int i = 0; i < size; i++)
		animals[i]->Voice();
}